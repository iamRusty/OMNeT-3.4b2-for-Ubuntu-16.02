//==========================================================================
//  CMYSQLNETBUILDER.CC - part of
//
//                     OMNeT++/OMNEST
//            Discrete System Simulation in C++
//
//==========================================================================

/*--------------------------------------------------------------*
  Copyright (C) 1992-2005 Andras Varga

  This file is distributed WITHOUT ANY WARRANTY. See the file
  `license' for details on this and other legal matters.
*--------------------------------------------------------------*/

#include <string.h>
#include <omnetpp.h>
#include <mysql.h>
#include "oppmysqlutils.h"


/**
 * Builds a network dynamically, with the topology coming from a
 * MySQL database.
 *
 * <pre>
 * CREATE TABLE network (
 *      id INT UNSIGNED AUTO_INCREMENT NOT NULL PRIMARY KEY,
 *      name VARCHAR(80)
 * );
 *
 * CREATE TABLE node (
 *      id INT UNSIGNED AUTO_INCREMENT NOT NULL PRIMARY KEY,
 *      networkid INT,
 *      type VARCHAR(80),
 *      name VARCHAR(80),
 *      display VARCHAR(200)
 * );
 *
 * CREATE TABLE link (
 *      srcnodeid INT,
 *      destnodeid INT,
 *      duplex BOOL,
 *      delay DOUBLE PRECISION,
 *      error DOUBLE PRECISION,
 *      datarate DOUBLE PRECISION
 * );
 *
 * CREATE TABLE parameter (
 *      nodeid INT,
 *      name VARCHAR(200),
 *      value VARCHAR(200)
 * );
 * </pre>
 *
 * For database configuration parameters, please refer to the documentation
 * of opp_mysql_connectToDB(). connectPrefix can be given in a module parameter.
 */
class cMySQLNetBuilder : public cSimpleModule
{
  public:
    Module_Class_Members(cMySQLNetBuilder, cSimpleModule, 0);
  protected:
    cGate *getFirstUnusedSubmodGate(cModule *modp, const char *gatename);
    void addLinkAttributes(cGate *src, double delay, double error, double datarate);
    void readAndBuild(MYSQL *mysql, const char *networkName, cModule *parent);
    virtual void initialize();
    virtual void handleMessage(cMessage *msg);
};

Define_Module(cMySQLNetBuilder);

void cMySQLNetBuilder::initialize()
{
    // connect
    const char *prefix = par("connectPrefix");
    ev << className() << " connecting to MySQL database";
    if (prefix && prefix[0]) ev << " using " << prefix << "-* config entries";
    ev << "...";
    MYSQL *mysql = mysql_init(NULL);
    opp_mysql_connectToDB(mysql, ev.config(), prefix);
    ev << " OK\n";

    // do the job, and close the database
    const char *modName = par("parentModule");
    cModule *mod = (!modName || !modName[0]) ? parentModule() : simulation.moduleByPath(modName);
    readAndBuild(mysql, par("networkName"), mod);
    mysql_close(mysql);
}

cGate *cMySQLNetBuilder::getFirstUnusedSubmodGate(cModule *modp, const char *gatename)
{
    // same code as generated by nedtool into _n.cc files
    int baseId = modp->findGate(gatename);
    if (baseId<0)
        throw new cRuntimeError("Module %s has no %s[] gate",modp->fullPath().c_str(), gatename);
    int n = modp->gate(baseId)->size();
    for (int i=0; i<n; i++)
        if (!modp->gate(baseId+i)->isConnectedOutside())
            return modp->gate(baseId+i);
    int newBaseId = modp->setGateSize(gatename,n+1);
    return modp->gate(newBaseId+n);
}

void cMySQLNetBuilder::addLinkAttributes(cGate *src, double delay, double error, double datarate)
{
    if (delay>0 || error>0 || datarate>0)
    {
        cBasicChannel *chan = new cBasicChannel("chan");
        if (delay>0)
            chan->setDelay(delay);
        if (error>0)
            chan->setError(error);
        if (datarate>0)
            chan->setDatarate(datarate);
        src->setChannel(chan);
    }
}

void cMySQLNetBuilder::readAndBuild(MYSQL *mysql, const char *networkName, cModule *parentmod)
{
    // read and create nodes
    std::string stmt = "SELECT n.id, n.name, n.type, n.display FROM node n, network t "
                       "WHERE n.networkid=t.id AND t.name=\"@networkname@\"";
    opp_mysql_substitute(stmt, "@networkname@", networkName, mysql);
    if (mysql_query(mysql, stmt.c_str()))
        throw new cRuntimeError("MySQL error: SELECT failed: %s", mysql_error(mysql));

    std::map<long,cModule *> nodeid2mod;
    MYSQL_RES *res = mysql_store_result(mysql);
    if (res==NULL)
        throw new cRuntimeError("MySQL error: mysql_store_result() failed: %s", mysql_error(mysql));
    if (mysql_num_rows(res)==0)
        throw new cRuntimeError("networkName='%s': no such network in the database, or it has no nodes", networkName);
    ASSERT(mysql_num_fields(res)==4);
    MYSQL_ROW row;
    while ((row = mysql_fetch_row(res))!=NULL)
    {
        // get fields from row
        long nodeid = atol(row[0]);
        const char *name = row[1];
        const char *modtypename = row[2];
        const char *dispstr = row[3];
        ev << "NODE id=" << nodeid << " name=" << name << " type=" << modtypename << "\n";

        // create module
        cModuleType *modtype = findModuleType(modtypename);
        if (!modtype)
            throw new cRuntimeError("module type `%s' for node `%s' not found", modtypename, name);
        cModule *mod = modtype->create(name, parentmod);
        nodeid2mod[nodeid] = mod;

        // set display string
        mod->displayString().parse(dispstr);
    }
    mysql_free_result(res);

    // set parameters
    stmt = "SELECT p.nodeid, p.name, p.value FROM parameter p, node n, network t "
           "WHERE p.nodeid=n.id and n.networkid=t.id AND t.name=\"@networkname@\" "
           "GROUP BY nodeid";
    opp_mysql_substitute(stmt, "@networkname@", networkName, mysql);
    if (mysql_query(mysql, stmt.c_str()))
        throw new cRuntimeError("MySQL error: SELECT failed: %s", mysql_error(mysql));
    res = mysql_store_result(mysql);
    if (res==NULL)
        throw new cRuntimeError("MySQL error: mysql_store_result() failed: %s", mysql_error(mysql));
    ASSERT(mysql_num_fields(res)==3);
    while ((row = mysql_fetch_row(res))!=NULL)
    {
        // get fields from row
        long nodeid = atol(row[0]);
        const char *parname = row[1];
        const char *value = row[2];

        // WHERE clause should guarantee this
        ASSERT(nodeid2mod.find(nodeid)!=nodeid2mod.end());

        // look up module and set its parameter
        cModule *mod = nodeid2mod[nodeid];
        cPar& par = mod->par(parname); // will throw an error if no such param
        par.setFromText(value);
    }

    // read and create connections
    stmt = "SELECT srcnodeid, destnodeid, duplex, delay, error, datarate "
           "FROM link l, node sn, node dn, network t "
           "WHERE (l.srcnodeid=sn.id and sn.networkid=t.id)"
           "  AND (l.srcnodeid=dn.id and dn.networkid=t.id)"
           "  AND t.name=\"@networkname@\"";
    opp_mysql_substitute(stmt, "@networkname@", networkName, mysql);
    if (mysql_query(mysql, stmt.c_str()))
        throw new cRuntimeError("MySQL error: SELECT failed: %s", mysql_error(mysql));
    res = mysql_store_result(mysql);
    if (res==NULL)
        throw new cRuntimeError("MySQL error: mysql_store_result() failed: %s", mysql_error(mysql));
    ASSERT(mysql_num_fields(res)==6);
    while ((row = mysql_fetch_row(res))!=NULL)
    {
        // get fields from row
        long srcnodeid = atol(row[0]);
        long destnodeid = atol(row[1]);
        bool duplex = strcmp(row[2],"0")!=0;
        double delay = row[3] ? atof(row[3]) : -1;
        double error = row[4] ? atof(row[4]) : -1;
        double datarate = row[5] ? atof(row[5]) : -1;

        // the SQL query's WHERE clause guarantees the following
        ASSERT(nodeid2mod.find(srcnodeid)!=nodeid2mod.end());
        ASSERT(nodeid2mod.find(destnodeid)!=nodeid2mod.end());

        cModule *srcmod = nodeid2mod[srcnodeid];
        cModule *destmod = nodeid2mod[destnodeid];

        // connect
        cGate *srcOut = getFirstUnusedSubmodGate(srcmod, "out");
        cGate *destIn = getFirstUnusedSubmodGate(destmod, "in");
        srcOut->connectTo(destIn);
        addLinkAttributes(srcOut, delay, error, datarate);
        if (duplex)
        {
            cGate *destOut = getFirstUnusedSubmodGate(destmod, "out");
            cGate *srcIn = getFirstUnusedSubmodGate(srcmod, "in");
            destOut->connectTo(srcIn);
            addLinkAttributes(destOut, delay, error, datarate);
        }
    }
    mysql_free_result(res);

    // final touches: buildinside, initialize()
    std::map<long,cModule *>::iterator it;
    for (it=nodeid2mod.begin(); it!=nodeid2mod.end(); ++it)
    {
        cModule *mod = it->second;
        mod->buildInside();
    }

    // the following is not entirely OK regarding multi-stage init...
    for (it=nodeid2mod.begin(); it!=nodeid2mod.end(); ++it)
    {
        cModule *mod = it->second;
        mod->callInitialize();
    }
}

void cMySQLNetBuilder::handleMessage(cMessage *)
{
    error("This modules does not process messages.");
}

