//
// Generated file, do not edit! Created by opp_msgc 3.4 from httpmsg.msg.
//

// Disable warnings about unused variables, empty switch stmts, etc:
#ifdef _MSC_VER
#  pragma warning(disable:4101)
#  pragma warning(disable:4065)
#endif

#include <iostream>
#include <sstream>
#include "httpmsg_m.h"

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


Register_Class(HTTPMsg);

HTTPMsg::HTTPMsg(const char *name, int kind) : NetPkt(name,kind)
{
    this->payload_var = "";
}

HTTPMsg::HTTPMsg(const HTTPMsg& other) : NetPkt()
{
    unsigned int i;
    setName(other.name());
    operator=(other);
}

HTTPMsg::~HTTPMsg()
{
    unsigned int i;
}

HTTPMsg& HTTPMsg::operator=(const HTTPMsg& other)
{
    if (this==&other) return *this;
    unsigned int i;
    NetPkt::operator=(other);
    this->payload_var = other.payload_var;
    return *this;
}

void HTTPMsg::netPack(cCommBuffer *b)
{
    NetPkt::netPack(b);
    doPacking(b,this->payload_var);
}

void HTTPMsg::netUnpack(cCommBuffer *b)
{
    NetPkt::netUnpack(b);
    doUnpacking(b,this->payload_var);
}

const char * HTTPMsg::getPayload() const
{
    return payload_var.c_str();
}

void HTTPMsg::setPayload(const char * payload_var)
{
    this->payload_var = payload_var;
}

class HTTPMsgDescriptor : public cClassDescriptor
{
  public:
    HTTPMsgDescriptor();
    virtual ~HTTPMsgDescriptor();

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

Register_ClassDescriptor(HTTPMsgDescriptor);

HTTPMsgDescriptor::HTTPMsgDescriptor() : cClassDescriptor("HTTPMsg", "NetPkt")
{
}

HTTPMsgDescriptor::~HTTPMsgDescriptor()
{
}

bool HTTPMsgDescriptor::doesSupport(cPolymorphic *obj)
{
    return dynamic_cast<HTTPMsg *>(obj)!=NULL;
}

const char *HTTPMsgDescriptor::getProperty(const char *propertyname)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int HTTPMsgDescriptor::getFieldCount(void *object)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 1+basedesc->getFieldCount(object) : 1;
}

unsigned int HTTPMsgDescriptor::getFieldTypeFlags(void *object, int field)
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

const char *HTTPMsgDescriptor::getFieldName(void *object, int field)
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

const char *HTTPMsgDescriptor::getFieldTypeString(void *object, int field)
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

const char *HTTPMsgDescriptor::getFieldProperty(void *object, int field, const char *propertyname)
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

int HTTPMsgDescriptor::getArraySize(void *object, int field)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    HTTPMsg *pp _MAYBEUNUSED = (HTTPMsg *)object;
    switch (field) {
        default: return 0;
    }
}

bool HTTPMsgDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    HTTPMsg *pp _MAYBEUNUSED = (HTTPMsg *)object;
    switch (field) {
        case 0: oppstring2string(pp->getPayload(),resultbuf,bufsize); return true;
        default: return false;
    }
}

bool HTTPMsgDescriptor::setFieldAsString(void *object, int field, int i, const char *value)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    HTTPMsg *pp _MAYBEUNUSED = (HTTPMsg *)object;
    switch (field) {
        case 0: pp->setPayload((value)); return true;
        default: return false;
    }
}

const char *HTTPMsgDescriptor::getFieldStructName(void *object, int field)
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

void *HTTPMsgDescriptor::getFieldStructPointer(void *object, int field, int i)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    HTTPMsg *pp _MAYBEUNUSED = (HTTPMsg *)object;
    switch (field) {
        default: return NULL;
    }
}

