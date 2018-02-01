//=========================================================================
//  XYPLOTNODE.CC - part of
//                  OMNeT++/OMNEST
//           Discrete System Simulation in C++
//
//=========================================================================

/*--------------------------------------------------------------*
  Copyright (C) 1992-2005 Andras Varga

  This file is distributed WITHOUT ANY WARRANTY. See the file
  `license' for details on this and other legal matters.
*--------------------------------------------------------------*/

#ifdef _MSC_VER
#pragma warning(disable:4786)
#endif

#include "channel.h"
#include "xyplotnode.h"


Port *XYPlotNode::portY(int k)
{
    if (k<0 || yin.size()< (unsigned)k)
        throw new Exception("XYPlotNode::portY(k): k=%d out of range, size of yin[] is %d",k,yin.size());
    if (yin.size()==(unsigned)k)
    {
        yin.push_back(Port(this));
        out.push_back(Port(this));
    }
    return &yin[k];
}

Port *XYPlotNode::portOut(int k)
{
    if (k<0 || out.size()<=(unsigned)k)
        throw new Exception("XYPlotNode::portOut(k): k=%d out of range, size of out[] is %d",k,out.size());
    return &out[k];
}

bool XYPlotNode::isReady() const
{
    // if no "x" data, we're not ready
    if (xin()->length()==0)
        return false;
    // otherwise, we're ready only if all "y" ports have something (except those at EOF)
    for (PortVector::const_iterator it=yin.begin(); it!=yin.end(); it++)
        if ((*it)()->length()==0 && !(*it)()->closing())
            return false;
    return true;
}

void XYPlotNode::process()
{
    // read one value from "x" port, then read "y" ports until their peek()'s
    // return ty>tx values (where tx is timestamp of the "x" value). Meanwhile,
    // if we find ty==tx values, output the (x,y) pair. If a port has reached
    // EOF, skip it.
    ASSERT(xin()->length()>0);
    Datum xd;
    xin()->read(&xd,1);

    for (unsigned int i=0; i<yin.size(); i++)
    {
        Channel *ychan = yin[i]();
        ASSERT(ychan->eof() || ychan->length()>0);
        const Datum *yp;
        Datum d;
        while ((yp=ychan->peek())!=NULL && yp->x < xd.x)
        {
            ychan->read(&d,1);  // discard if timestamps not equal
        }
        while ((yp=ychan->peek())!=NULL && yp->x == xd.x)
        {
            ychan->read(&d,1);
            d.x = xd.y;
            out[i]()->write(&d,1);
        }
        if (ychan->eof())
        {
            out[i]()->close(); // doesn't hurt
        }
    }
}

bool XYPlotNode::finished() const
{
    // if "x" reached eof, we're finished in any case
    if (xin()->eof())
        return true;
    // otherwise only if all "y" ports are at EOF
    for (PortVector::const_iterator it=yin.begin(); it!=yin.end(); it++)
        if (!(*it)()->eof())
            return false;
    return true;
}

//-------

const char *XYPlotNodeType::description() const
{
    return "Creates x-y plot by matching values that arrive on one x and several\n"
           "y ports by their timestamps. (One value on x and one on y create one\n"
           "output value when their timestamps are equal).";
}

void XYPlotNodeType::getAttributes(StringMap& attrs) const
{
}

Node *XYPlotNodeType::create(DataflowManager *, StringMap& attrs) const
{
    checkAttrNames(attrs);

    Node *node = new XYPlotNode();
    node->setNodeType(this);
    return node;
}

Port *XYPlotNodeType::getPort(Node *node, const char *portname) const
{
    XYPlotNode *node1 = dynamic_cast<XYPlotNode *>(node);
    if (!strcmp(portname,"x"))
        return &(node1->xin);
    if (portname[0]=='y')
        return node1->portY(atoi(portname+1));
    else if (!strncmp(portname,"out",3))
        return node1->portOut(atoi(portname+3));
    throw new Exception("no such port `%s'", portname);
}



