//
// Generated file, do not edit! Created by opp_msgc 3.4 from sim_std.msg.
//

#ifndef _SIM_STD_M_H_
#define _SIM_STD_M_H_

#include <omnetpp.h>

// opp_msgc version check
#define MSGC_VERSION 0x0304
#if (MSGC_VERSION!=OMNETPP_VERSION)
#    error Version mismatch! Probably this file was generated by an earlier version of opp_msgc: 'make clean' should help.
#endif

// cplusplus {{ ... }} section:





EXECUTE_ON_STARTUP(cGate_Type,
    cEnum *e = new cEnum("cGate_Type");
    enums.instance()->add(e);
    e->insert('I', "INPUT");
    e->insert('O', "OUTPUT");
);

EXECUTE_ON_STARTUP(cPar_Type,
    cEnum *e = new cEnum("cPar_Type");
    enums.instance()->add(e);
    e->insert('S', "STRING");
    e->insert('B', "BOOL");
    e->insert('L', "LONG");
    e->insert('D', "DOUBLE");
    e->insert('F', "MATH FUNCTION");
    e->insert('T', "DISTRIBUTION");
    e->insert('C', "COMPILED EXPRESSION");
    e->insert('X', "EXPRESSION");
    e->insert('I', "INDIRECTION");
    e->insert('P', "VOID* POINTER");
    e->insert('O', "OBJECT POINTER");
    e->insert('M', "XML");
);




std::ostream& operator<<(std::ostream& os, const cDisplayString& d) {
    return os << "\"" << d.getString() << "\"";
}

typedef cDensityEstBase::Cell cDensityEstBase_Cell;
std::ostream& operator<<(std::ostream& os, const cDensityEstBase::Cell& cell) {
    return os << "[" << cell.lower << ", " << cell.upper << ")  ==>  " << cell.value << " (" << cell.relativeFreq << ")";
}





void std_sim_descriptor_dummy() {}

// end cplusplus

// cplusplus {{ ... }} section:

typedef cTopology::Node cTopology_Node;
typedef cTopology::Link cTopology_Link;
typedef cTopology::LinkIn cTopology_LinkIn;
typedef cTopology::LinkOut cTopology_LinkOut;
// end cplusplus


#endif // _SIM_STD_M_H_
