//
// Generated file, do not edit! Created by opp_msgc 3.4 from netpkt.msg.
//

// Disable warnings about unused variables, empty switch stmts, etc:
#ifdef _MSC_VER
#  pragma warning(disable:4101)
#  pragma warning(disable:4065)
#endif

#include <iostream>
#include <sstream>
#include "netpkt_m.h"

// Template rule which fires if a struct or class doesn't have operator<<
template<typename T>
std::ostream& operator<<(std::ostream& out,const T&) {return out;}

// Another default rule (prevents compiler from choosing base class' doPacking())
template<typename T>
void doPacking(cCommBuffer *, T& t) {
    throw new cRuntimeError("Parsim error: no doPacking() function for type %s or its base class (check .msg and _m.cc/h files!)",opp_typename(typeid(t)));
}
template<typename T>
void doUnpacking(cCommBuffer *, T& t) {
    throw new cRuntimeError("Parsim error: no doUnpacking() function for type %s or its base class (check .msg and _m.cc/h files!)",opp_typename(typeid(t)));
}

// Automatically supply array (un)packing functions
template<typename T>
void doPacking(cCommBuffer *b, T *t, int n) {
    for (int i=0; i<n; i++)
        doPacking(b,t[i]);
}
template<typename T>
void doUnpacking(cCommBuffer *b, T *t, int n) {
    for (int i=0; i<n; i++)
        doUnpacking(b,t[i]);
}
inline void doPacking(cCommBuffer *, cPolymorphic&) {}
inline void doUnpacking(cCommBuffer *, cPolymorphic&) {}

#define DOPACKING(T,R) \
    inline void doPacking(cCommBuffer *b, T R a) {b->pack(a);}  \
    inline void doPacking(cCommBuffer *b, T *a, int n) {b->pack(a,n);}  \
    inline void doUnpacking(cCommBuffer *b, T& a) {b->unpack(a);}  \
    inline void doUnpacking(cCommBuffer *b, T *a, int n) {b->unpack(a,n);}
#define _
DOPACKING(char,_)
DOPACKING(unsigned char,_)
DOPACKING(bool,_)
DOPACKING(short,_)
DOPACKING(unsigned short,_)
DOPACKING(int,_)
DOPACKING(unsigned int,_)
DOPACKING(long,_)
DOPACKING(unsigned long,_)
DOPACKING(float,_)
DOPACKING(double,_)
DOPACKING(long double,_)
DOPACKING(char *,_)
DOPACKING(const char *,_)
DOPACKING(opp_string,&)
//DOPACKING(std::string,&)
#undef _
#undef DOPACKING


Register_Class(NetPkt);

NetPkt::NetPkt(const char *name, int kind) : cMessage(name,kind)
{
    this->srcAddress_var = 0;
    this->destAddress_var = 0;
}

NetPkt::NetPkt(const NetPkt& other) : cMessage()
{
    unsigned int i;
    setName(other.name());
    operator=(other);
}

NetPkt::~NetPkt()
{
    unsigned int i;
}

NetPkt& NetPkt::operator=(const NetPkt& other)
{
    if (this==&other) return *this;
    unsigned int i;
    cMessage::operator=(other);
    this->srcAddress_var = other.srcAddress_var;
    this->destAddress_var = other.destAddress_var;
    return *this;
}

void NetPkt::netPack(cCommBuffer *b)
{
    cMessage::netPack(b);
    doPacking(b,this->srcAddress_var);
    doPacking(b,this->destAddress_var);
}

void NetPkt::netUnpack(cCommBuffer *b)
{
    cMessage::netUnpack(b);
    doUnpacking(b,this->srcAddress_var);
    doUnpacking(b,this->destAddress_var);
}

int NetPkt::getSrcAddress() const
{
    return srcAddress_var;
}

void NetPkt::setSrcAddress(int srcAddress_var)
{
    this->srcAddress_var = srcAddress_var;
}

int NetPkt::getDestAddress() const
{
    return destAddress_var;
}

void NetPkt::setDestAddress(int destAddress_var)
{
    this->destAddress_var = destAddress_var;
}

class NetPktDescriptor : public cClassDescriptor
{
  public:
    NetPktDescriptor();
    virtual ~NetPktDescriptor();

    virtual bool doesSupport(cPolymorphic *obj);
    virtual const char *getProperty(const char *propertyname);
    virtual int getFieldCount(void *object);
    virtual const char *getFieldName(void *object, int field);
    virtual unsigned int getFieldTypeFlags(void *object, int field);
    virtual const char *getFieldTypeString(void *object, int field);
    virtual const char *getFieldProperty(void *object, int field, const char *propertyname);
    virtual int getArraySize(void *object, int field);

    virtual bool getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize);
    virtual bool setFieldAsString(void *object, int field, int i, const char *value);

    virtual const char *getFieldStructName(void *object, int field);
    virtual void *getFieldStructPointer(void *object, int field, int i);
};

Register_ClassDescriptor(NetPktDescriptor);

NetPktDescriptor::NetPktDescriptor() : cClassDescriptor("NetPkt", "cMessage")
{
}

NetPktDescriptor::~NetPktDescriptor()
{
}

bool NetPktDescriptor::doesSupport(cPolymorphic *obj)
{
    return dynamic_cast<NetPkt *>(obj)!=NULL;
}

const char *NetPktDescriptor::getProperty(const char *propertyname)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int NetPktDescriptor::getFieldCount(void *object)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 2+basedesc->getFieldCount(object) : 2;
}

unsigned int NetPktDescriptor::getFieldTypeFlags(void *object, int field)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return FD_ISEDITABLE;
        case 1: return FD_ISEDITABLE;
        default: return 0;
    }
}

const char *NetPktDescriptor::getFieldName(void *object, int field)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "srcAddress";
        case 1: return "destAddress";
        default: return NULL;
    }
}

const char *NetPktDescriptor::getFieldTypeString(void *object, int field)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "int";
        case 1: return "int";
        default: return NULL;
    }
}

const char *NetPktDescriptor::getFieldProperty(void *object, int field, const char *propertyname)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return NULL;
    }
}

int NetPktDescriptor::getArraySize(void *object, int field)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    NetPkt *pp _MAYBEUNUSED = (NetPkt *)object;
    switch (field) {
        default: return 0;
    }
}

bool NetPktDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    NetPkt *pp _MAYBEUNUSED = (NetPkt *)object;
    switch (field) {
        case 0: long2string(pp->getSrcAddress(),resultbuf,bufsize); return true;
        case 1: long2string(pp->getDestAddress(),resultbuf,bufsize); return true;
        default: return false;
    }
}

bool NetPktDescriptor::setFieldAsString(void *object, int field, int i, const char *value)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    NetPkt *pp _MAYBEUNUSED = (NetPkt *)object;
    switch (field) {
        case 0: pp->setSrcAddress(string2long(value)); return true;
        case 1: pp->setDestAddress(string2long(value)); return true;
        default: return false;
    }
}

const char *NetPktDescriptor::getFieldStructName(void *object, int field)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return NULL;
    }
}

void *NetPktDescriptor::getFieldStructPointer(void *object, int field, int i)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    NetPkt *pp _MAYBEUNUSED = (NetPkt *)object;
    switch (field) {
        default: return NULL;
    }
}

