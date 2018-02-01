//
// Generated file, do not edit! Created by opp_msgc 3.4 from dynapacket.msg.
//

// Disable warnings about unused variables, empty switch stmts, etc:
#ifdef _MSC_VER
#  pragma warning(disable:4101)
#  pragma warning(disable:4065)
#endif

#include <iostream>
#include <sstream>
#include "dynapacket_m.h"

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


EXECUTE_ON_STARTUP(DynaPacketType,
    cEnum *e = findEnum("DynaPacketType");
    if (!e) enums.instance()->add(e = new cEnum("DynaPacketType"));
    e->insert(DYNA_CONN_REQ, "DYNA_CONN_REQ");
    e->insert(DYNA_CONN_ACK, "DYNA_CONN_ACK");
    e->insert(DYNA_DISC_REQ, "DYNA_DISC_REQ");
    e->insert(DYNA_DISC_ACK, "DYNA_DISC_ACK");
    e->insert(DYNA_DATA, "DYNA_DATA");
);

Register_Class(DynaPacket);

DynaPacket::DynaPacket(const char *name, int kind) : cMessage(name,kind)
{
    this->srcAddress_var = 0;
    this->destAddress_var = 0;
    this->serverProcId_var = 0;
}

DynaPacket::DynaPacket(const DynaPacket& other) : cMessage()
{
    unsigned int i;
    setName(other.name());
    operator=(other);
}

DynaPacket::~DynaPacket()
{
    unsigned int i;
}

DynaPacket& DynaPacket::operator=(const DynaPacket& other)
{
    if (this==&other) return *this;
    unsigned int i;
    cMessage::operator=(other);
    this->srcAddress_var = other.srcAddress_var;
    this->destAddress_var = other.destAddress_var;
    this->serverProcId_var = other.serverProcId_var;
    return *this;
}

void DynaPacket::netPack(cCommBuffer *b)
{
    cMessage::netPack(b);
    doPacking(b,this->srcAddress_var);
    doPacking(b,this->destAddress_var);
    doPacking(b,this->serverProcId_var);
}

void DynaPacket::netUnpack(cCommBuffer *b)
{
    cMessage::netUnpack(b);
    doUnpacking(b,this->srcAddress_var);
    doUnpacking(b,this->destAddress_var);
    doUnpacking(b,this->serverProcId_var);
}

int DynaPacket::getSrcAddress() const
{
    return srcAddress_var;
}

void DynaPacket::setSrcAddress(int srcAddress_var)
{
    this->srcAddress_var = srcAddress_var;
}

int DynaPacket::getDestAddress() const
{
    return destAddress_var;
}

void DynaPacket::setDestAddress(int destAddress_var)
{
    this->destAddress_var = destAddress_var;
}

int DynaPacket::getServerProcId() const
{
    return serverProcId_var;
}

void DynaPacket::setServerProcId(int serverProcId_var)
{
    this->serverProcId_var = serverProcId_var;
}

class DynaPacketDescriptor : public cClassDescriptor
{
  public:
    DynaPacketDescriptor();
    virtual ~DynaPacketDescriptor();

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

Register_ClassDescriptor(DynaPacketDescriptor);

DynaPacketDescriptor::DynaPacketDescriptor() : cClassDescriptor("DynaPacket", "cMessage")
{
}

DynaPacketDescriptor::~DynaPacketDescriptor()
{
}

bool DynaPacketDescriptor::doesSupport(cPolymorphic *obj)
{
    return dynamic_cast<DynaPacket *>(obj)!=NULL;
}

const char *DynaPacketDescriptor::getProperty(const char *propertyname)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int DynaPacketDescriptor::getFieldCount(void *object)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 3+basedesc->getFieldCount(object) : 3;
}

unsigned int DynaPacketDescriptor::getFieldTypeFlags(void *object, int field)
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
        case 2: return FD_ISEDITABLE;
        default: return 0;
    }
}

const char *DynaPacketDescriptor::getFieldName(void *object, int field)
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
        case 2: return "serverProcId";
        default: return NULL;
    }
}

const char *DynaPacketDescriptor::getFieldTypeString(void *object, int field)
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
        case 2: return "int";
        default: return NULL;
    }
}

const char *DynaPacketDescriptor::getFieldProperty(void *object, int field, const char *propertyname)
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

int DynaPacketDescriptor::getArraySize(void *object, int field)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    DynaPacket *pp _MAYBEUNUSED = (DynaPacket *)object;
    switch (field) {
        default: return 0;
    }
}

bool DynaPacketDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    DynaPacket *pp _MAYBEUNUSED = (DynaPacket *)object;
    switch (field) {
        case 0: long2string(pp->getSrcAddress(),resultbuf,bufsize); return true;
        case 1: long2string(pp->getDestAddress(),resultbuf,bufsize); return true;
        case 2: long2string(pp->getServerProcId(),resultbuf,bufsize); return true;
        default: return false;
    }
}

bool DynaPacketDescriptor::setFieldAsString(void *object, int field, int i, const char *value)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    DynaPacket *pp _MAYBEUNUSED = (DynaPacket *)object;
    switch (field) {
        case 0: pp->setSrcAddress(string2long(value)); return true;
        case 1: pp->setDestAddress(string2long(value)); return true;
        case 2: pp->setServerProcId(string2long(value)); return true;
        default: return false;
    }
}

const char *DynaPacketDescriptor::getFieldStructName(void *object, int field)
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

void *DynaPacketDescriptor::getFieldStructPointer(void *object, int field, int i)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    DynaPacket *pp _MAYBEUNUSED = (DynaPacket *)object;
    switch (field) {
        default: return NULL;
    }
}

Register_Class(DynaDataPacket);

DynaDataPacket::DynaDataPacket(const char *name, int kind) : DynaPacket(name,kind)
{
    this->payload_var = "";
}

DynaDataPacket::DynaDataPacket(const DynaDataPacket& other) : DynaPacket()
{
    unsigned int i;
    setName(other.name());
    operator=(other);
}

DynaDataPacket::~DynaDataPacket()
{
    unsigned int i;
}

DynaDataPacket& DynaDataPacket::operator=(const DynaDataPacket& other)
{
    if (this==&other) return *this;
    unsigned int i;
    DynaPacket::operator=(other);
    this->payload_var = other.payload_var;
    return *this;
}

void DynaDataPacket::netPack(cCommBuffer *b)
{
    DynaPacket::netPack(b);
    doPacking(b,this->payload_var);
}

void DynaDataPacket::netUnpack(cCommBuffer *b)
{
    DynaPacket::netUnpack(b);
    doUnpacking(b,this->payload_var);
}

const char * DynaDataPacket::getPayload() const
{
    return payload_var.c_str();
}

void DynaDataPacket::setPayload(const char * payload_var)
{
    this->payload_var = payload_var;
}

class DynaDataPacketDescriptor : public cClassDescriptor
{
  public:
    DynaDataPacketDescriptor();
    virtual ~DynaDataPacketDescriptor();

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

Register_ClassDescriptor(DynaDataPacketDescriptor);

DynaDataPacketDescriptor::DynaDataPacketDescriptor() : cClassDescriptor("DynaDataPacket", "DynaPacket")
{
}

DynaDataPacketDescriptor::~DynaDataPacketDescriptor()
{
}

bool DynaDataPacketDescriptor::doesSupport(cPolymorphic *obj)
{
    return dynamic_cast<DynaDataPacket *>(obj)!=NULL;
}

const char *DynaDataPacketDescriptor::getProperty(const char *propertyname)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int DynaDataPacketDescriptor::getFieldCount(void *object)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 1+basedesc->getFieldCount(object) : 1;
}

unsigned int DynaDataPacketDescriptor::getFieldTypeFlags(void *object, int field)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return FD_ISEDITABLE;
        default: return 0;
    }
}

const char *DynaDataPacketDescriptor::getFieldName(void *object, int field)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "payload";
        default: return NULL;
    }
}

const char *DynaDataPacketDescriptor::getFieldTypeString(void *object, int field)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "string";
        default: return NULL;
    }
}

const char *DynaDataPacketDescriptor::getFieldProperty(void *object, int field, const char *propertyname)
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

int DynaDataPacketDescriptor::getArraySize(void *object, int field)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    DynaDataPacket *pp _MAYBEUNUSED = (DynaDataPacket *)object;
    switch (field) {
        default: return 0;
    }
}

bool DynaDataPacketDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    DynaDataPacket *pp _MAYBEUNUSED = (DynaDataPacket *)object;
    switch (field) {
        case 0: oppstring2string(pp->getPayload(),resultbuf,bufsize); return true;
        default: return false;
    }
}

bool DynaDataPacketDescriptor::setFieldAsString(void *object, int field, int i, const char *value)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    DynaDataPacket *pp _MAYBEUNUSED = (DynaDataPacket *)object;
    switch (field) {
        case 0: pp->setPayload((value)); return true;
        default: return false;
    }
}

const char *DynaDataPacketDescriptor::getFieldStructName(void *object, int field)
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

void *DynaDataPacketDescriptor::getFieldStructPointer(void *object, int field, int i)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    DynaDataPacket *pp _MAYBEUNUSED = (DynaDataPacket *)object;
    switch (field) {
        default: return NULL;
    }
}

