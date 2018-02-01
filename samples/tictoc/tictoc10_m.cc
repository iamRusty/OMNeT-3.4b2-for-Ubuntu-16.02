//
// Generated file, do not edit! Created by opp_msgc 3.4 from tictoc10.msg.
//

// Disable warnings about unused variables, empty switch stmts, etc:
#ifdef _MSC_VER
#  pragma warning(disable:4101)
#  pragma warning(disable:4065)
#endif

#include <iostream>
#include <sstream>
#include "tictoc10_m.h"

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


Register_Class(TicTocMsg10);

TicTocMsg10::TicTocMsg10(const char *name, int kind) : cMessage(name,kind)
{
    this->source_var = 0;
    this->destination_var = 0;
    this->hopCount_var = 0;
}

TicTocMsg10::TicTocMsg10(const TicTocMsg10& other) : cMessage()
{
    unsigned int i;
    setName(other.name());
    operator=(other);
}

TicTocMsg10::~TicTocMsg10()
{
    unsigned int i;
}

TicTocMsg10& TicTocMsg10::operator=(const TicTocMsg10& other)
{
    if (this==&other) return *this;
    unsigned int i;
    cMessage::operator=(other);
    this->source_var = other.source_var;
    this->destination_var = other.destination_var;
    this->hopCount_var = other.hopCount_var;
    return *this;
}

void TicTocMsg10::netPack(cCommBuffer *b)
{
    cMessage::netPack(b);
    doPacking(b,this->source_var);
    doPacking(b,this->destination_var);
    doPacking(b,this->hopCount_var);
}

void TicTocMsg10::netUnpack(cCommBuffer *b)
{
    cMessage::netUnpack(b);
    doUnpacking(b,this->source_var);
    doUnpacking(b,this->destination_var);
    doUnpacking(b,this->hopCount_var);
}

int TicTocMsg10::getSource() const
{
    return source_var;
}

void TicTocMsg10::setSource(int source_var)
{
    this->source_var = source_var;
}

int TicTocMsg10::getDestination() const
{
    return destination_var;
}

void TicTocMsg10::setDestination(int destination_var)
{
    this->destination_var = destination_var;
}

int TicTocMsg10::getHopCount() const
{
    return hopCount_var;
}

void TicTocMsg10::setHopCount(int hopCount_var)
{
    this->hopCount_var = hopCount_var;
}

class TicTocMsg10Descriptor : public cClassDescriptor
{
  public:
    TicTocMsg10Descriptor();
    virtual ~TicTocMsg10Descriptor();

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

Register_ClassDescriptor(TicTocMsg10Descriptor);

TicTocMsg10Descriptor::TicTocMsg10Descriptor() : cClassDescriptor("TicTocMsg10", "cMessage")
{
}

TicTocMsg10Descriptor::~TicTocMsg10Descriptor()
{
}

bool TicTocMsg10Descriptor::doesSupport(cPolymorphic *obj)
{
    return dynamic_cast<TicTocMsg10 *>(obj)!=NULL;
}

const char *TicTocMsg10Descriptor::getProperty(const char *propertyname)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int TicTocMsg10Descriptor::getFieldCount(void *object)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 3+basedesc->getFieldCount(object) : 3;
}

unsigned int TicTocMsg10Descriptor::getFieldTypeFlags(void *object, int field)
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

const char *TicTocMsg10Descriptor::getFieldName(void *object, int field)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "source";
        case 1: return "destination";
        case 2: return "hopCount";
        default: return NULL;
    }
}

const char *TicTocMsg10Descriptor::getFieldTypeString(void *object, int field)
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

const char *TicTocMsg10Descriptor::getFieldProperty(void *object, int field, const char *propertyname)
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

int TicTocMsg10Descriptor::getArraySize(void *object, int field)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    TicTocMsg10 *pp _MAYBEUNUSED = (TicTocMsg10 *)object;
    switch (field) {
        default: return 0;
    }
}

bool TicTocMsg10Descriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    TicTocMsg10 *pp _MAYBEUNUSED = (TicTocMsg10 *)object;
    switch (field) {
        case 0: long2string(pp->getSource(),resultbuf,bufsize); return true;
        case 1: long2string(pp->getDestination(),resultbuf,bufsize); return true;
        case 2: long2string(pp->getHopCount(),resultbuf,bufsize); return true;
        default: return false;
    }
}

bool TicTocMsg10Descriptor::setFieldAsString(void *object, int field, int i, const char *value)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    TicTocMsg10 *pp _MAYBEUNUSED = (TicTocMsg10 *)object;
    switch (field) {
        case 0: pp->setSource(string2long(value)); return true;
        case 1: pp->setDestination(string2long(value)); return true;
        case 2: pp->setHopCount(string2long(value)); return true;
        default: return false;
    }
}

const char *TicTocMsg10Descriptor::getFieldStructName(void *object, int field)
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

void *TicTocMsg10Descriptor::getFieldStructPointer(void *object, int field, int i)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    TicTocMsg10 *pp _MAYBEUNUSED = (TicTocMsg10 *)object;
    switch (field) {
        default: return NULL;
    }
}

