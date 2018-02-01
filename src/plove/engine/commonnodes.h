//=========================================================================
//  COMMONNODES.H - part of
//                  OMNeT++/OMNEST
//           Discrete System Simulation in C++
//
//=========================================================================

/*--------------------------------------------------------------*
  Copyright (C) 1992-2005 Andras Varga

  This file is distributed WITHOUT ANY WARRANTY. See the file
  `license' for details on this and other legal matters.
*--------------------------------------------------------------*/

#ifndef _COMMONNODES_H_
#define _COMMONNODES_H_

#include "node.h"
#include "nodetype.h"
#include <string.h>
#include <stdlib.h>
#include <cstdio>

#ifdef _MSC_VER
#pragma warning(disable:4355) // 'this' : used in base member initializer list
#endif


/**
 * Base class for one-port producer nodes.
 */
class SingleSourceNode : public Node
{
    public:
        Port out;
    public:
        SingleSourceNode() : out(this) {}
};


/**
 * Base class for one-port consumer nodes.
 */
class SingleSinkNode : public Node
{
    public:
        Port in;
    public:
        SingleSinkNode() : in(this) {}
};


/**
 * Base class for processing nodes with one input and one output port.
 */
class FilterNode : public Node
{
    protected:
        virtual bool finished() const;
    public:
        Port in;
        Port out;
    public:
        FilterNode() : in(this), out(this) {}
};


/**
 * NodeType for SingleSourceNode.
 */
class SingleSourceNodeType : public NodeType
{
    public:
        virtual const char *category() const {return "single sources";}
        virtual bool isHidden() const {return true;}
        virtual Port *getPort(Node *node, const char *portname) const;
};


/**
 * NodeType for SingleSinkNode.
 */
class SingleSinkNodeType : public NodeType
{
    public:
        virtual const char *category() const {return "single sinks";}
        virtual bool isHidden() const {return true;}
        virtual Port *getPort(Node *node, const char *portname) const;
};


/**
 * NodeType for FilterNode.
 */
class FilterNodeType : public NodeType
{
    public:
        virtual const char *category() const {return "filter";}
        virtual bool isHidden() const {return false;}
        virtual Port *getPort(Node *node, const char *portname) const;
};


#endif


