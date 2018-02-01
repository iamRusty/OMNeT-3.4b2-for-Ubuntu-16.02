//
// Generated file, do not edit! Created by opp_msgc 3.4 from token.msg.
//

// Disable warnings about unused variables, empty switch stmts, etc:
#ifdef _MSC_VER
#  pragma warning(disable:4101)
#  pragma warning(disable:4065)
#endif

#include <iostream>
#include <sstream>
#include "token_m.h"

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


EXECUTE_ON_STARTUP(TRTypes,
    cEnum *e = findEnum("TRTypes");
    if (!e) enums.instance()->add(e = new cEnum("TRTypes"));
    e->insert(TR_TOKEN, "TR_TOKEN");
    e->insert(TR_FRAME, "TR_FRAME");
);

Register_Class(TRApplicationData);

TRApplicationData::TRApplicationData(const char *name, int kind) : cMessage(name,kind)
{
    this->destination_var = 0;
    this->data_var = "";
}

TRApplicationData::TRApplicationData(const TRApplicationData& other) : cMessage()
{
    unsigned int i;
    setName(other.name());
    operator=(other);
}

TRApplicationData::~TRApplicationData()
{
    unsigned int i;
}

TRApplicationData& TRApplicationData::operator=(const TRApplicationData& other)
{
    if (this==&other) return *this;
    unsigned int i;
    cMessage::operator=(other);
    this->destination_var = other.destination_var;
    this->data_var = other.data_var;
    return *this;
}

void TRApplicationData::netPack(cCommBuffer *b)
{
    cMessage::netPack(b);
    doPacking(b,this->destination_var);
    doPacking(b,this->data_var);
}

void TRApplicationData::netUnpack(cCommBuffer *b)
{
    cMessage::netUnpack(b);
    doUnpacking(b,this->destination_var);
    doUnpacking(b,this->data_var);
}

int TRApplicationData::getDestination() const
{
    return destination_var;
}

void TRApplicationData::setDestination(int destination_var)
{
    this->destination_var = destination_var;
}

const char * TRApplicationData::getData() const
{
    return data_var.c_str();
}

void TRApplicationData::setData(const char * data_var)
{
    this->data_var = data_var;
}

class TRApplicationDataDescriptor : public cClassDescriptor
{
  public:
    TRApplicationDataDescriptor();
    virtual ~TRApplicationDataDescriptor();

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

Register_ClassDescriptor(TRApplicationDataDescriptor);

TRApplicationDataDescriptor::TRApplicationDataDescriptor() : cClassDescriptor("TRApplicationData", "cMessage")
{
}

TRApplicationDataDescriptor::~TRApplicationDataDescriptor()
{
}

bool TRApplicationDataDescriptor::doesSupport(cPolymorphic *obj)
{
    return dynamic_cast<TRApplicationData *>(obj)!=NULL;
}

const char *TRApplicationDataDescriptor::getProperty(const char *propertyname)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int TRApplicationDataDescriptor::getFieldCount(void *object)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 2+basedesc->getFieldCount(object) : 2;
}

unsigned int TRApplicationDataDescriptor::getFieldTypeFlags(void *object, int field)
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

const char *TRApplicationDataDescriptor::getFieldName(void *object, int field)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "destination";
        case 1: return "data";
        default: return NULL;
    }
}

const char *TRApplicationDataDescriptor::getFieldTypeString(void *object, int field)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "int";
        case 1: return "string";
        default: return NULL;
    }
}

const char *TRApplicationDataDescriptor::getFieldProperty(void *object, int field, const char *propertyname)
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

int TRApplicationDataDescriptor::getArraySize(void *object, int field)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    TRApplicationData *pp _MAYBEUNUSED = (TRApplicationData *)object;
    switch (field) {
        default: return 0;
    }
}

bool TRApplicationDataDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    TRApplicationData *pp _MAYBEUNUSED = (TRApplicationData *)object;
    switch (field) {
        case 0: long2string(pp->getDestination(),resultbuf,bufsize); return true;
        case 1: oppstring2string(pp->getData(),resultbuf,bufsize); return true;
        default: return false;
    }
}

bool TRApplicationDataDescriptor::setFieldAsString(void *object, int field, int i, const char *value)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    TRApplicationData *pp _MAYBEUNUSED = (TRApplicationData *)object;
    switch (field) {
        case 0: pp->setDestination(string2long(value)); return true;
        case 1: pp->setData((value)); return true;
        default: return false;
    }
}

const char *TRApplicationDataDescriptor::getFieldStructName(void *object, int field)
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

void *TRApplicationDataDescriptor::getFieldStructPointer(void *object, int field, int i)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    TRApplicationData *pp _MAYBEUNUSED = (TRApplicationData *)object;
    switch (field) {
        default: return NULL;
    }
}

Register_Class(TRToken);

TRToken::TRToken(const char *name, int kind) : cMessage(name,kind)
{
}

TRToken::TRToken(const TRToken& other) : cMessage()
{
    unsigned int i;
    setName(other.name());
    operator=(other);
}

TRToken::~TRToken()
{
    unsigned int i;
}

TRToken& TRToken::operator=(const TRToken& other)
{
    if (this==&other) return *this;
    unsigned int i;
    cMessage::operator=(other);
    return *this;
}

void TRToken::netPack(cCommBuffer *b)
{
    cMessage::netPack(b);
}

void TRToken::netUnpack(cCommBuffer *b)
{
    cMessage::netUnpack(b);
}

class TRTokenDescriptor : public cClassDescriptor
{
  public:
    TRTokenDescriptor();
    virtual ~TRTokenDescriptor();

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

Register_ClassDescriptor(TRTokenDescriptor);

TRTokenDescriptor::TRTokenDescriptor() : cClassDescriptor("TRToken", "cMessage")
{
}

TRTokenDescriptor::~TRTokenDescriptor()
{
}

bool TRTokenDescriptor::doesSupport(cPolymorphic *obj)
{
    return dynamic_cast<TRToken *>(obj)!=NULL;
}

const char *TRTokenDescriptor::getProperty(const char *propertyname)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int TRTokenDescriptor::getFieldCount(void *object)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 0+basedesc->getFieldCount(object) : 0;
}

unsigned int TRTokenDescriptor::getFieldTypeFlags(void *object, int field)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return 0;
    }
}

const char *TRTokenDescriptor::getFieldName(void *object, int field)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return NULL;
    }
}

const char *TRTokenDescriptor::getFieldTypeString(void *object, int field)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return NULL;
    }
}

const char *TRTokenDescriptor::getFieldProperty(void *object, int field, const char *propertyname)
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

int TRTokenDescriptor::getArraySize(void *object, int field)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    TRToken *pp _MAYBEUNUSED = (TRToken *)object;
    switch (field) {
        default: return 0;
    }
}

bool TRTokenDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    TRToken *pp _MAYBEUNUSED = (TRToken *)object;
    switch (field) {
        default: return false;
    }
}

bool TRTokenDescriptor::setFieldAsString(void *object, int field, int i, const char *value)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    TRToken *pp _MAYBEUNUSED = (TRToken *)object;
    switch (field) {
        default: return false;
    }
}

const char *TRTokenDescriptor::getFieldStructName(void *object, int field)
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

void *TRTokenDescriptor::getFieldStructPointer(void *object, int field, int i)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    TRToken *pp _MAYBEUNUSED = (TRToken *)object;
    switch (field) {
        default: return NULL;
    }
}

Register_Class(TRFrame);

TRFrame::TRFrame(const char *name, int kind) : cMessage(name,kind)
{
    this->source_var = 0;
    this->destination_var = 0;
}

TRFrame::TRFrame(const TRFrame& other) : cMessage()
{
    unsigned int i;
    setName(other.name());
    operator=(other);
}

TRFrame::~TRFrame()
{
    unsigned int i;
}

TRFrame& TRFrame::operator=(const TRFrame& other)
{
    if (this==&other) return *this;
    unsigned int i;
    cMessage::operator=(other);
    this->source_var = other.source_var;
    this->destination_var = other.destination_var;
    return *this;
}

void TRFrame::netPack(cCommBuffer *b)
{
    cMessage::netPack(b);
    doPacking(b,this->source_var);
    doPacking(b,this->destination_var);
}

void TRFrame::netUnpack(cCommBuffer *b)
{
    cMessage::netUnpack(b);
    doUnpacking(b,this->source_var);
    doUnpacking(b,this->destination_var);
}

int TRFrame::getSource() const
{
    return source_var;
}

void TRFrame::setSource(int source_var)
{
    this->source_var = source_var;
}

int TRFrame::getDestination() const
{
    return destination_var;
}

void TRFrame::setDestination(int destination_var)
{
    this->destination_var = destination_var;
}

class TRFrameDescriptor : public cClassDescriptor
{
  public:
    TRFrameDescriptor();
    virtual ~TRFrameDescriptor();

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

Register_ClassDescriptor(TRFrameDescriptor);

TRFrameDescriptor::TRFrameDescriptor() : cClassDescriptor("TRFrame", "cMessage")
{
}

TRFrameDescriptor::~TRFrameDescriptor()
{
}

bool TRFrameDescriptor::doesSupport(cPolymorphic *obj)
{
    return dynamic_cast<TRFrame *>(obj)!=NULL;
}

const char *TRFrameDescriptor::getProperty(const char *propertyname)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int TRFrameDescriptor::getFieldCount(void *object)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 2+basedesc->getFieldCount(object) : 2;
}

unsigned int TRFrameDescriptor::getFieldTypeFlags(void *object, int field)
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

const char *TRFrameDescriptor::getFieldName(void *object, int field)
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
        default: return NULL;
    }
}

const char *TRFrameDescriptor::getFieldTypeString(void *object, int field)
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

const char *TRFrameDescriptor::getFieldProperty(void *object, int field, const char *propertyname)
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

int TRFrameDescriptor::getArraySize(void *object, int field)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    TRFrame *pp _MAYBEUNUSED = (TRFrame *)object;
    switch (field) {
        default: return 0;
    }
}

bool TRFrameDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    TRFrame *pp _MAYBEUNUSED = (TRFrame *)object;
    switch (field) {
        case 0: long2string(pp->getSource(),resultbuf,bufsize); return true;
        case 1: long2string(pp->getDestination(),resultbuf,bufsize); return true;
        default: return false;
    }
}

bool TRFrameDescriptor::setFieldAsString(void *object, int field, int i, const char *value)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    TRFrame *pp _MAYBEUNUSED = (TRFrame *)object;
    switch (field) {
        case 0: pp->setSource(string2long(value)); return true;
        case 1: pp->setDestination(string2long(value)); return true;
        default: return false;
    }
}

const char *TRFrameDescriptor::getFieldStructName(void *object, int field)
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

void *TRFrameDescriptor::getFieldStructPointer(void *object, int field, int i)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    TRFrame *pp _MAYBEUNUSED = (TRFrame *)object;
    switch (field) {
        default: return NULL;
    }
}

