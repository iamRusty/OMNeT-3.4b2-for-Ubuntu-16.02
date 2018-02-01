//
// Generated file, do not edit! Created by opp_msgc 3.4 from sim_std.msg.
//

// Disable warnings about unused variables, empty switch stmts, etc:
#ifdef _MSC_VER
#  pragma warning(disable:4101)
#  pragma warning(disable:4065)
#endif

#include <iostream>
#include <sstream>
#include "sim_std_m.h"

// Template rule which fires if a struct or class doesn't have operator<<
template<typename T>
std::ostream& operator<<(std::ostream& out,const T&) {return out;}


class cObjectDescriptor : public cClassDescriptor
{
  public:
    cObjectDescriptor();
    virtual ~cObjectDescriptor();

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

Register_ClassDescriptor(cObjectDescriptor);

cObjectDescriptor::cObjectDescriptor() : cClassDescriptor("cObject", "cPolymorphic")
{
}

cObjectDescriptor::~cObjectDescriptor()
{
}

bool cObjectDescriptor::doesSupport(cPolymorphic *obj)
{
    return dynamic_cast<cObject *>(obj)!=NULL;
}

const char *cObjectDescriptor::getProperty(const char *propertyname)
{
    if (!strcmp(propertyname,"omitGetVerb")) return "true";
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int cObjectDescriptor::getFieldCount(void *object)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 7+basedesc->getFieldCount(object) : 7;
}

unsigned int cObjectDescriptor::getFieldTypeFlags(void *object, int field)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return 0;
        case 1: return FD_ISEDITABLE;
        case 2: return 0;
        case 3: return 0;
        case 4: return 0;
        case 5: return 0;
        case 6: return FD_ISCOMPOUND | FD_ISPOINTER | FD_ISCPOLYMORPHIC | FD_ISCOBJECT;
        default: return 0;
    }
}

const char *cObjectDescriptor::getFieldName(void *object, int field)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "className";
        case 1: return "name";
        case 2: return "fullName";
        case 3: return "fullPath";
        case 4: return "info";
        case 5: return "detailedInfo";
        case 6: return "owner";
        default: return NULL;
    }
}

const char *cObjectDescriptor::getFieldTypeString(void *object, int field)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "string";
        case 1: return "string";
        case 2: return "string";
        case 3: return "string";
        case 4: return "string";
        case 5: return "string";
        case 6: return "cObject";
        default: return NULL;
    }
}

const char *cObjectDescriptor::getFieldProperty(void *object, int field, const char *propertyname)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0:
            if (!strcmp(propertyname,"group")) return "base";
            if (!strcmp(propertyname,"hint")) return "C++ class name";
            return NULL;
        case 1:
            if (!strcmp(propertyname,"editable")) return "true";
            if (!strcmp(propertyname,"group")) return "base";
            if (!strcmp(propertyname,"hint")) return "an editable string attribute of the object";
            return NULL;
        case 2:
            if (!strcmp(propertyname,"group")) return "base";
            if (!strcmp(propertyname,"hint")) return "if object is part of a module/gate vector: name with index";
            return NULL;
        case 3:
            if (!strcmp(propertyname,"group")) return "base";
            if (!strcmp(propertyname,"hint")) return "hierarchical name, composed of full names of this object and its owners/parents";
            return NULL;
        case 4:
            if (!strcmp(propertyname,"hint")) return "text provided by the object's \"info\" method";
            if (!strcmp(propertyname,"group")) return "base";
            return NULL;
        case 5:
            if (!strcmp(propertyname,"hint")) return "text provided by the object's \"detailedInfo\" method";
            if (!strcmp(propertyname,"group")) return "base";
            return NULL;
        case 6:
            if (!strcmp(propertyname,"hint")) return "module or container this object belongs to";
            if (!strcmp(propertyname,"group")) return "owner or parent";
            return NULL;
        default: return NULL;
    }
}

int cObjectDescriptor::getArraySize(void *object, int field)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    cObject *pp _MAYBEUNUSED = (cObject *)object;
    switch (field) {
        default: return 0;
    }
}

bool cObjectDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    cObject *pp _MAYBEUNUSED = (cObject *)object;
    switch (field) {
        case 0: oppstring2string(pp->className(),resultbuf,bufsize); return true;
        case 1: oppstring2string(pp->name(),resultbuf,bufsize); return true;
        case 2: oppstring2string(pp->fullName(),resultbuf,bufsize); return true;
        case 3: oppstring2string(pp->fullPath(),resultbuf,bufsize); return true;
        case 4: oppstring2string(pp->info(),resultbuf,bufsize); return true;
        case 5: oppstring2string(pp->detailedInfo(),resultbuf,bufsize); return true;
        case 6: {std::stringstream out; out << pp->owner(); opp_strprettytrunc(resultbuf,out.str().c_str(),bufsize-1); return true;}
        default: return false;
    }
}

bool cObjectDescriptor::setFieldAsString(void *object, int field, int i, const char *value)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    cObject *pp _MAYBEUNUSED = (cObject *)object;
    switch (field) {
        case 1: pp->setName((value)); return true;
        default: return false;
    }
}

const char *cObjectDescriptor::getFieldStructName(void *object, int field)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 6: return "cObject"; break;
        default: return NULL;
    }
}

void *cObjectDescriptor::getFieldStructPointer(void *object, int field, int i)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    cObject *pp _MAYBEUNUSED = (cObject *)object;
    switch (field) {
        case 6: return (void *)static_cast<cPolymorphic *>(pp->owner()); break;
        default: return NULL;
    }
}

class cDefaultListDescriptor : public cClassDescriptor
{
  public:
    cDefaultListDescriptor();
    virtual ~cDefaultListDescriptor();

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

Register_ClassDescriptor(cDefaultListDescriptor);

cDefaultListDescriptor::cDefaultListDescriptor() : cClassDescriptor("cDefaultList", "cObject")
{
}

cDefaultListDescriptor::~cDefaultListDescriptor()
{
}

bool cDefaultListDescriptor::doesSupport(cPolymorphic *obj)
{
    return dynamic_cast<cDefaultList *>(obj)!=NULL;
}

const char *cDefaultListDescriptor::getProperty(const char *propertyname)
{
    if (!strcmp(propertyname,"omitGetVerb")) return "true";
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int cDefaultListDescriptor::getFieldCount(void *object)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 1+basedesc->getFieldCount(object) : 1;
}

unsigned int cDefaultListDescriptor::getFieldTypeFlags(void *object, int field)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return FD_ISARRAY | FD_ISCOMPOUND | FD_ISPOINTER | FD_ISCPOLYMORPHIC | FD_ISCOBJECT;
        default: return 0;
    }
}

const char *cDefaultListDescriptor::getFieldName(void *object, int field)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "contents";
        default: return NULL;
    }
}

const char *cDefaultListDescriptor::getFieldTypeString(void *object, int field)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "cObject";
        default: return NULL;
    }
}

const char *cDefaultListDescriptor::getFieldProperty(void *object, int field, const char *propertyname)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0:
            if (!strcmp(propertyname,"hint")) return "list of objects directly held by this component";
            if (!strcmp(propertyname,"group")) return "contents";
            if (!strcmp(propertyname,"sizeGetter")) return "defaultListItems";
            if (!strcmp(propertyname,"getter")) return "defaultListGet";
            return NULL;
        default: return NULL;
    }
}

int cDefaultListDescriptor::getArraySize(void *object, int field)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    cDefaultList *pp _MAYBEUNUSED = (cDefaultList *)object;
    switch (field) {
        case 0: return pp->defaultListItems();
        default: return 0;
    }
}

bool cDefaultListDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    cDefaultList *pp _MAYBEUNUSED = (cDefaultList *)object;
    switch (field) {
        case 0: {std::stringstream out; out << pp->defaultListGet(i); opp_strprettytrunc(resultbuf,out.str().c_str(),bufsize-1); return true;}
        default: return false;
    }
}

bool cDefaultListDescriptor::setFieldAsString(void *object, int field, int i, const char *value)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    cDefaultList *pp _MAYBEUNUSED = (cDefaultList *)object;
    switch (field) {
        default: return false;
    }
}

const char *cDefaultListDescriptor::getFieldStructName(void *object, int field)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "cObject"; break;
        default: return NULL;
    }
}

void *cDefaultListDescriptor::getFieldStructPointer(void *object, int field, int i)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    cDefaultList *pp _MAYBEUNUSED = (cDefaultList *)object;
    switch (field) {
        case 0: return (void *)static_cast<cPolymorphic *>(pp->defaultListGet(i)); break;
        default: return NULL;
    }
}

class cChannelDescriptor : public cClassDescriptor
{
  public:
    cChannelDescriptor();
    virtual ~cChannelDescriptor();

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

Register_ClassDescriptor(cChannelDescriptor);

cChannelDescriptor::cChannelDescriptor() : cClassDescriptor("cChannel", "cObject")
{
}

cChannelDescriptor::~cChannelDescriptor()
{
}

bool cChannelDescriptor::doesSupport(cPolymorphic *obj)
{
    return dynamic_cast<cChannel *>(obj)!=NULL;
}

const char *cChannelDescriptor::getProperty(const char *propertyname)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int cChannelDescriptor::getFieldCount(void *object)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 0+basedesc->getFieldCount(object) : 0;
}

unsigned int cChannelDescriptor::getFieldTypeFlags(void *object, int field)
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

const char *cChannelDescriptor::getFieldName(void *object, int field)
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

const char *cChannelDescriptor::getFieldTypeString(void *object, int field)
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

const char *cChannelDescriptor::getFieldProperty(void *object, int field, const char *propertyname)
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

int cChannelDescriptor::getArraySize(void *object, int field)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    cChannel *pp _MAYBEUNUSED = (cChannel *)object;
    switch (field) {
        default: return 0;
    }
}

bool cChannelDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    cChannel *pp _MAYBEUNUSED = (cChannel *)object;
    switch (field) {
        default: return false;
    }
}

bool cChannelDescriptor::setFieldAsString(void *object, int field, int i, const char *value)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    cChannel *pp _MAYBEUNUSED = (cChannel *)object;
    switch (field) {
        default: return false;
    }
}

const char *cChannelDescriptor::getFieldStructName(void *object, int field)
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

void *cChannelDescriptor::getFieldStructPointer(void *object, int field, int i)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    cChannel *pp _MAYBEUNUSED = (cChannel *)object;
    switch (field) {
        default: return NULL;
    }
}

class cBasicChannelDescriptor : public cClassDescriptor
{
  public:
    cBasicChannelDescriptor();
    virtual ~cBasicChannelDescriptor();

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

Register_ClassDescriptor(cBasicChannelDescriptor);

cBasicChannelDescriptor::cBasicChannelDescriptor() : cClassDescriptor("cBasicChannel", "cChannel")
{
}

cBasicChannelDescriptor::~cBasicChannelDescriptor()
{
}

bool cBasicChannelDescriptor::doesSupport(cPolymorphic *obj)
{
    return dynamic_cast<cBasicChannel *>(obj)!=NULL;
}

const char *cBasicChannelDescriptor::getProperty(const char *propertyname)
{
    if (!strcmp(propertyname,"omitGetVerb")) return "true";
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int cBasicChannelDescriptor::getFieldCount(void *object)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 6+basedesc->getFieldCount(object) : 6;
}

unsigned int cBasicChannelDescriptor::getFieldTypeFlags(void *object, int field)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return 0;
        case 1: return 0;
        case 2: return 0;
        case 3: return 0;
        case 4: return 0;
        case 5: return 0;
        default: return 0;
    }
}

const char *cBasicChannelDescriptor::getFieldName(void *object, int field)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "delay";
        case 1: return "error";
        case 2: return "datarate";
        case 3: return "disabled";
        case 4: return "isBusy";
        case 5: return "transmissionFinishes";
        default: return NULL;
    }
}

const char *cBasicChannelDescriptor::getFieldTypeString(void *object, int field)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "double";
        case 1: return "double";
        case 2: return "double";
        case 3: return "bool";
        case 4: return "bool";
        case 5: return "simtime_t";
        default: return NULL;
    }
}

const char *cBasicChannelDescriptor::getFieldProperty(void *object, int field, const char *propertyname)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0:
            if (!strcmp(propertyname,"hint")) return "transmission delay in seconds";
            return NULL;
        case 1:
            if (!strcmp(propertyname,"hint")) return "bit error rate";
            return NULL;
        case 2:
            if (!strcmp(propertyname,"hint")) return "datarate in bit/sec";
            return NULL;
        case 3:
            if (!strcmp(propertyname,"hint")) return "channel state";
            return NULL;
        case 4:
            if (!strcmp(propertyname,"hint")) return "if channel is currently transmitting";
            if (!strcmp(propertyname,"group")) return "state";
            return NULL;
        case 5:
            if (!strcmp(propertyname,"hint")) return "if busy: when currently active transmissions will finish";
            if (!strcmp(propertyname,"group")) return "state";
            return NULL;
        default: return NULL;
    }
}

int cBasicChannelDescriptor::getArraySize(void *object, int field)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    cBasicChannel *pp _MAYBEUNUSED = (cBasicChannel *)object;
    switch (field) {
        default: return 0;
    }
}

bool cBasicChannelDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    cBasicChannel *pp _MAYBEUNUSED = (cBasicChannel *)object;
    switch (field) {
        case 0: double2string(pp->delay(),resultbuf,bufsize); return true;
        case 1: double2string(pp->error(),resultbuf,bufsize); return true;
        case 2: double2string(pp->datarate(),resultbuf,bufsize); return true;
        case 3: bool2string(pp->disabled(),resultbuf,bufsize); return true;
        case 4: bool2string(pp->isBusy(),resultbuf,bufsize); return true;
        case 5: double2string(pp->transmissionFinishes(),resultbuf,bufsize); return true;
        default: return false;
    }
}

bool cBasicChannelDescriptor::setFieldAsString(void *object, int field, int i, const char *value)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    cBasicChannel *pp _MAYBEUNUSED = (cBasicChannel *)object;
    switch (field) {
        default: return false;
    }
}

const char *cBasicChannelDescriptor::getFieldStructName(void *object, int field)
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

void *cBasicChannelDescriptor::getFieldStructPointer(void *object, int field, int i)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    cBasicChannel *pp _MAYBEUNUSED = (cBasicChannel *)object;
    switch (field) {
        default: return NULL;
    }
}

class cModuleDescriptor : public cClassDescriptor
{
  public:
    cModuleDescriptor();
    virtual ~cModuleDescriptor();

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

Register_ClassDescriptor(cModuleDescriptor);

cModuleDescriptor::cModuleDescriptor() : cClassDescriptor("cModule", "cDefaultList")
{
}

cModuleDescriptor::~cModuleDescriptor()
{
}

bool cModuleDescriptor::doesSupport(cPolymorphic *obj)
{
    return dynamic_cast<cModule *>(obj)!=NULL;
}

const char *cModuleDescriptor::getProperty(const char *propertyname)
{
    if (!strcmp(propertyname,"omitGetVerb")) return "true";
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int cModuleDescriptor::getFieldCount(void *object)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 9+basedesc->getFieldCount(object) : 9;
}

unsigned int cModuleDescriptor::getFieldTypeFlags(void *object, int field)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return 0;
        case 1: return 0;
        case 2: return 0;
        case 3: return 0;
        case 4: return 0;
        case 5: return FD_ISCOMPOUND;
        case 6: return FD_ISCOMPOUND;
        case 7: return FD_ISARRAY | FD_ISCOMPOUND | FD_ISCPOLYMORPHIC | FD_ISCOBJECT;
        case 8: return FD_ISARRAY | FD_ISCOMPOUND | FD_ISPOINTER | FD_ISCPOLYMORPHIC | FD_ISCOBJECT;
        default: return 0;
    }
}

const char *cModuleDescriptor::getFieldName(void *object, int field)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "id";
        case 1: return "isSimple";
        case 2: return "isVector";
        case 3: return "index";
        case 4: return "size";
        case 5: return "displayString";
        case 6: return "backgroundDisplayString";
        case 7: return "par";
        case 8: return "gate";
        default: return NULL;
    }
}

const char *cModuleDescriptor::getFieldTypeString(void *object, int field)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "int";
        case 1: return "bool";
        case 2: return "bool";
        case 3: return "int";
        case 4: return "int";
        case 5: return "cDisplayString";
        case 6: return "cDisplayString";
        case 7: return "cPar";
        case 8: return "cGate";
        default: return NULL;
    }
}

const char *cModuleDescriptor::getFieldProperty(void *object, int field, const char *propertyname)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0:
            if (!strcmp(propertyname,"group")) return "general";
            if (!strcmp(propertyname,"hint")) return "unique module ID -- IDs of deleted modules are not issued again";
            return NULL;
        case 1:
            if (!strcmp(propertyname,"hint")) return "whether this is a simple module";
            if (!strcmp(propertyname,"group")) return "general";
            return NULL;
        case 2:
            if (!strcmp(propertyname,"hint")) return "whether this module is part of a module vector";
            if (!strcmp(propertyname,"group")) return "general";
            return NULL;
        case 3:
            if (!strcmp(propertyname,"hint")) return "if vector: index of this module in its module vector";
            if (!strcmp(propertyname,"group")) return "general";
            return NULL;
        case 4:
            if (!strcmp(propertyname,"hint")) return "if vector: size of module vector this module belongs to";
            if (!strcmp(propertyname,"group")) return "general";
            return NULL;
        case 5:
            if (!strcmp(propertyname,"group")) return "general";
            if (!strcmp(propertyname,"hint")) return "controls appearance of this module in the GUI";
            return NULL;
        case 6:
            if (!strcmp(propertyname,"hint")) return "controls appearance of the background when this module gets opened in the GUI";
            if (!strcmp(propertyname,"group")) return "general";
            return NULL;
        case 7:
            if (!strcmp(propertyname,"hint")) return "module parameters";
            if (!strcmp(propertyname,"label")) return "parameters";
            if (!strcmp(propertyname,"group")) return "parameters, gates";
            if (!strcmp(propertyname,"sizeGetter")) return "params";
            return NULL;
        case 8:
            if (!strcmp(propertyname,"sizeGetter")) return "gates";
            if (!strcmp(propertyname,"group")) return "parameters, gates";
            if (!strcmp(propertyname,"label")) return "gates";
            if (!strcmp(propertyname,"hint")) return "module gates";
            return NULL;
        default: return NULL;
    }
}

int cModuleDescriptor::getArraySize(void *object, int field)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    cModule *pp _MAYBEUNUSED = (cModule *)object;
    switch (field) {
        case 7: return pp->params();
        case 8: return pp->gates();
        default: return 0;
    }
}

bool cModuleDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    cModule *pp _MAYBEUNUSED = (cModule *)object;
    switch (field) {
        case 0: long2string(pp->id(),resultbuf,bufsize); return true;
        case 1: bool2string(pp->isSimple(),resultbuf,bufsize); return true;
        case 2: bool2string(pp->isVector(),resultbuf,bufsize); return true;
        case 3: long2string(pp->index(),resultbuf,bufsize); return true;
        case 4: long2string(pp->size(),resultbuf,bufsize); return true;
        case 5: {std::stringstream out; out << pp->displayString(); opp_strprettytrunc(resultbuf,out.str().c_str(),bufsize-1); return true;}
        case 6: {std::stringstream out; out << pp->backgroundDisplayString(); opp_strprettytrunc(resultbuf,out.str().c_str(),bufsize-1); return true;}
        case 7: {std::stringstream out; out << pp->par(i); opp_strprettytrunc(resultbuf,out.str().c_str(),bufsize-1); return true;}
        case 8: {std::stringstream out; out << pp->gate(i); opp_strprettytrunc(resultbuf,out.str().c_str(),bufsize-1); return true;}
        default: return false;
    }
}

bool cModuleDescriptor::setFieldAsString(void *object, int field, int i, const char *value)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    cModule *pp _MAYBEUNUSED = (cModule *)object;
    switch (field) {
        default: return false;
    }
}

const char *cModuleDescriptor::getFieldStructName(void *object, int field)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 5: return "cDisplayString"; break;
        case 6: return "cDisplayString"; break;
        case 7: return "cPar"; break;
        case 8: return "cGate"; break;
        default: return NULL;
    }
}

void *cModuleDescriptor::getFieldStructPointer(void *object, int field, int i)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    cModule *pp _MAYBEUNUSED = (cModule *)object;
    switch (field) {
        case 5: return (void *)(&pp->displayString()); break;
        case 6: return (void *)(&pp->backgroundDisplayString()); break;
        case 7: return (void *)static_cast<cPolymorphic *>(&pp->par(i)); break;
        case 8: return (void *)static_cast<cPolymorphic *>(pp->gate(i)); break;
        default: return NULL;
    }
}

class cSimpleModuleDescriptor : public cClassDescriptor
{
  public:
    cSimpleModuleDescriptor();
    virtual ~cSimpleModuleDescriptor();

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

Register_ClassDescriptor(cSimpleModuleDescriptor);

cSimpleModuleDescriptor::cSimpleModuleDescriptor() : cClassDescriptor("cSimpleModule", "cModule")
{
}

cSimpleModuleDescriptor::~cSimpleModuleDescriptor()
{
}

bool cSimpleModuleDescriptor::doesSupport(cPolymorphic *obj)
{
    return dynamic_cast<cSimpleModule *>(obj)!=NULL;
}

const char *cSimpleModuleDescriptor::getProperty(const char *propertyname)
{
    if (!strcmp(propertyname,"omitGetVerb")) return "true";
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int cSimpleModuleDescriptor::getFieldCount(void *object)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 3+basedesc->getFieldCount(object) : 3;
}

unsigned int cSimpleModuleDescriptor::getFieldTypeFlags(void *object, int field)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return 0;
        case 1: return 0;
        case 2: return 0;
        default: return 0;
    }
}

const char *cSimpleModuleDescriptor::getFieldName(void *object, int field)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "usesActivity";
        case 1: return "stackSize";
        case 2: return "stackUsage";
        default: return NULL;
    }
}

const char *cSimpleModuleDescriptor::getFieldTypeString(void *object, int field)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "bool";
        case 1: return "unsigned int";
        case 2: return "unsigned int";
        default: return NULL;
    }
}

const char *cSimpleModuleDescriptor::getFieldProperty(void *object, int field, const char *propertyname)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0:
            if (!strcmp(propertyname,"hint")) return "whether this simple module was programmed using the \"activity\" or the \"handleMessage\" C++ method";
            if (!strcmp(propertyname,"group")) return "activity";
            return NULL;
        case 1:
            if (!strcmp(propertyname,"group")) return "activity";
            if (!strcmp(propertyname,"hint")) return "if module uses \"activity\": stack size allocated for this module -- zero means info not available";
            return NULL;
        case 2:
            if (!strcmp(propertyname,"hint")) return "if module uses \"activity\": stack actually used by this module -- zero means info not available";
            if (!strcmp(propertyname,"group")) return "activity";
            return NULL;
        default: return NULL;
    }
}

int cSimpleModuleDescriptor::getArraySize(void *object, int field)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    cSimpleModule *pp _MAYBEUNUSED = (cSimpleModule *)object;
    switch (field) {
        default: return 0;
    }
}

bool cSimpleModuleDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    cSimpleModule *pp _MAYBEUNUSED = (cSimpleModule *)object;
    switch (field) {
        case 0: bool2string(pp->usesActivity(),resultbuf,bufsize); return true;
        case 1: long2string(pp->stackSize(),resultbuf,bufsize); return true;
        case 2: long2string(pp->stackUsage(),resultbuf,bufsize); return true;
        default: return false;
    }
}

bool cSimpleModuleDescriptor::setFieldAsString(void *object, int field, int i, const char *value)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    cSimpleModule *pp _MAYBEUNUSED = (cSimpleModule *)object;
    switch (field) {
        default: return false;
    }
}

const char *cSimpleModuleDescriptor::getFieldStructName(void *object, int field)
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

void *cSimpleModuleDescriptor::getFieldStructPointer(void *object, int field, int i)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    cSimpleModule *pp _MAYBEUNUSED = (cSimpleModule *)object;
    switch (field) {
        default: return NULL;
    }
}

class cCompoundModuleDescriptor : public cClassDescriptor
{
  public:
    cCompoundModuleDescriptor();
    virtual ~cCompoundModuleDescriptor();

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

Register_ClassDescriptor(cCompoundModuleDescriptor);

cCompoundModuleDescriptor::cCompoundModuleDescriptor() : cClassDescriptor("cCompoundModule", "cModule")
{
}

cCompoundModuleDescriptor::~cCompoundModuleDescriptor()
{
}

bool cCompoundModuleDescriptor::doesSupport(cPolymorphic *obj)
{
    return dynamic_cast<cCompoundModule *>(obj)!=NULL;
}

const char *cCompoundModuleDescriptor::getProperty(const char *propertyname)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int cCompoundModuleDescriptor::getFieldCount(void *object)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 0+basedesc->getFieldCount(object) : 0;
}

unsigned int cCompoundModuleDescriptor::getFieldTypeFlags(void *object, int field)
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

const char *cCompoundModuleDescriptor::getFieldName(void *object, int field)
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

const char *cCompoundModuleDescriptor::getFieldTypeString(void *object, int field)
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

const char *cCompoundModuleDescriptor::getFieldProperty(void *object, int field, const char *propertyname)
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

int cCompoundModuleDescriptor::getArraySize(void *object, int field)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    cCompoundModule *pp _MAYBEUNUSED = (cCompoundModule *)object;
    switch (field) {
        default: return 0;
    }
}

bool cCompoundModuleDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    cCompoundModule *pp _MAYBEUNUSED = (cCompoundModule *)object;
    switch (field) {
        default: return false;
    }
}

bool cCompoundModuleDescriptor::setFieldAsString(void *object, int field, int i, const char *value)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    cCompoundModule *pp _MAYBEUNUSED = (cCompoundModule *)object;
    switch (field) {
        default: return false;
    }
}

const char *cCompoundModuleDescriptor::getFieldStructName(void *object, int field)
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

void *cCompoundModuleDescriptor::getFieldStructPointer(void *object, int field, int i)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    cCompoundModule *pp _MAYBEUNUSED = (cCompoundModule *)object;
    switch (field) {
        default: return NULL;
    }
}

class cModuleInterfaceDescriptor : public cClassDescriptor
{
  public:
    cModuleInterfaceDescriptor();
    virtual ~cModuleInterfaceDescriptor();

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

Register_ClassDescriptor(cModuleInterfaceDescriptor);

cModuleInterfaceDescriptor::cModuleInterfaceDescriptor() : cClassDescriptor("cModuleInterface", "cObject")
{
}

cModuleInterfaceDescriptor::~cModuleInterfaceDescriptor()
{
}

bool cModuleInterfaceDescriptor::doesSupport(cPolymorphic *obj)
{
    return dynamic_cast<cModuleInterface *>(obj)!=NULL;
}

const char *cModuleInterfaceDescriptor::getProperty(const char *propertyname)
{
    if (!strcmp(propertyname,"omitGetVerb")) return "true";
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int cModuleInterfaceDescriptor::getFieldCount(void *object)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 8+basedesc->getFieldCount(object) : 8;
}

unsigned int cModuleInterfaceDescriptor::getFieldTypeFlags(void *object, int field)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return 0;
        case 1: return FD_ISARRAY;
        case 2: return FD_ISARRAY;
        case 3: return FD_ISARRAY;
        case 4: return 0;
        case 5: return FD_ISARRAY;
        case 6: return FD_ISARRAY;
        case 7: return FD_ISARRAY;
        default: return 0;
    }
}

const char *cModuleInterfaceDescriptor::getFieldName(void *object, int field)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "numParams";
        case 1: return "paramName";
        case 2: return "paramType";
        case 3: return "isParamConst";
        case 4: return "numGates";
        case 5: return "gateName";
        case 6: return "gateType";
        case 7: return "isGateVector";
        default: return NULL;
    }
}

const char *cModuleInterfaceDescriptor::getFieldTypeString(void *object, int field)
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
        case 2: return "string";
        case 3: return "bool";
        case 4: return "int";
        case 5: return "string";
        case 6: return "char";
        case 7: return "bool";
        default: return NULL;
    }
}

const char *cModuleInterfaceDescriptor::getFieldProperty(void *object, int field, const char *propertyname)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0:
            if (!strcmp(propertyname,"group")) return "parameters";
            if (!strcmp(propertyname,"hint")) return "number of parameters declared in NED";
            return NULL;
        case 1:
            if (!strcmp(propertyname,"group")) return "parameters";
            if (!strcmp(propertyname,"hint")) return "parameter names";
            if (!strcmp(propertyname,"sizeGetter")) return "numParams";
            return NULL;
        case 2:
            if (!strcmp(propertyname,"sizeGetter")) return "numParams";
            if (!strcmp(propertyname,"group")) return "parameters";
            if (!strcmp(propertyname,"hint")) return "parameter types";
            return NULL;
        case 3:
            if (!strcmp(propertyname,"hint")) return "whether parameter was declared const";
            if (!strcmp(propertyname,"group")) return "parameters";
            if (!strcmp(propertyname,"sizeGetter")) return "numParams";
            return NULL;
        case 4:
            if (!strcmp(propertyname,"hint")) return "number of gates declared in NED";
            if (!strcmp(propertyname,"group")) return "gates";
            return NULL;
        case 5:
            if (!strcmp(propertyname,"group")) return "gates";
            if (!strcmp(propertyname,"hint")) return "gate names";
            if (!strcmp(propertyname,"sizeGetter")) return "numParams";
            return NULL;
        case 6:
            if (!strcmp(propertyname,"hint")) return "gate types";
            if (!strcmp(propertyname,"group")) return "gates";
            if (!strcmp(propertyname,"sizeGetter")) return "numParams";
            return NULL;
        case 7:
            if (!strcmp(propertyname,"hint")) return "whether gate was declared vector";
            if (!strcmp(propertyname,"group")) return "gates";
            if (!strcmp(propertyname,"sizeGetter")) return "numParams";
            return NULL;
        default: return NULL;
    }
}

int cModuleInterfaceDescriptor::getArraySize(void *object, int field)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    cModuleInterface *pp _MAYBEUNUSED = (cModuleInterface *)object;
    switch (field) {
        case 1: return pp->numParams();
        case 2: return pp->numParams();
        case 3: return pp->numParams();
        case 5: return pp->numParams();
        case 6: return pp->numParams();
        case 7: return pp->numParams();
        default: return 0;
    }
}

bool cModuleInterfaceDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    cModuleInterface *pp _MAYBEUNUSED = (cModuleInterface *)object;
    switch (field) {
        case 0: long2string(pp->numParams(),resultbuf,bufsize); return true;
        case 1: oppstring2string(pp->paramName(i),resultbuf,bufsize); return true;
        case 2: oppstring2string(pp->paramType(i),resultbuf,bufsize); return true;
        case 3: bool2string(pp->isParamConst(i),resultbuf,bufsize); return true;
        case 4: long2string(pp->numGates(),resultbuf,bufsize); return true;
        case 5: oppstring2string(pp->gateName(i),resultbuf,bufsize); return true;
        case 6: long2string(pp->gateType(i),resultbuf,bufsize); return true;
        case 7: bool2string(pp->isGateVector(i),resultbuf,bufsize); return true;
        default: return false;
    }
}

bool cModuleInterfaceDescriptor::setFieldAsString(void *object, int field, int i, const char *value)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    cModuleInterface *pp _MAYBEUNUSED = (cModuleInterface *)object;
    switch (field) {
        default: return false;
    }
}

const char *cModuleInterfaceDescriptor::getFieldStructName(void *object, int field)
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

void *cModuleInterfaceDescriptor::getFieldStructPointer(void *object, int field, int i)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    cModuleInterface *pp _MAYBEUNUSED = (cModuleInterface *)object;
    switch (field) {
        default: return NULL;
    }
}

class cGateDescriptor : public cClassDescriptor
{
  public:
    cGateDescriptor();
    virtual ~cGateDescriptor();

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

Register_ClassDescriptor(cGateDescriptor);

cGateDescriptor::cGateDescriptor() : cClassDescriptor("cGate", "cObject")
{
}

cGateDescriptor::~cGateDescriptor()
{
}

bool cGateDescriptor::doesSupport(cPolymorphic *obj)
{
    return dynamic_cast<cGate *>(obj)!=NULL;
}

const char *cGateDescriptor::getProperty(const char *propertyname)
{
    if (!strcmp(propertyname,"omitGetVerb")) return "true";
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int cGateDescriptor::getFieldCount(void *object)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 16+basedesc->getFieldCount(object) : 16;
}

unsigned int cGateDescriptor::getFieldTypeFlags(void *object, int field)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return 0;
        case 1: return 0;
        case 2: return 0;
        case 3: return 0;
        case 4: return FD_ISCOMPOUND;
        case 5: return 0;
        case 6: return 0;
        case 7: return FD_ISCOMPOUND | FD_ISPOINTER | FD_ISCPOLYMORPHIC | FD_ISCOBJECT;
        case 8: return FD_ISCOMPOUND | FD_ISPOINTER | FD_ISCPOLYMORPHIC | FD_ISCOBJECT;
        case 9: return FD_ISCOMPOUND | FD_ISPOINTER | FD_ISCPOLYMORPHIC | FD_ISCOBJECT;
        case 10: return 0;
        case 11: return 0;
        case 12: return FD_ISCOMPOUND | FD_ISPOINTER | FD_ISCPOLYMORPHIC | FD_ISCOBJECT;
        case 13: return FD_ISCOMPOUND | FD_ISPOINTER | FD_ISCPOLYMORPHIC | FD_ISCOBJECT;
        case 14: return 0;
        case 15: return 0;
        default: return 0;
    }
}

const char *cGateDescriptor::getFieldName(void *object, int field)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "type";
        case 1: return "id";
        case 2: return "isVector";
        case 3: return "index";
        case 4: return "displayString";
        case 5: return "isBusy";
        case 6: return "transmissionFinishes";
        case 7: return "channel";
        case 8: return "toGate";
        case 9: return "fromGate";
        case 10: return "isConnectedOutside";
        case 11: return "isConnectedInside";
        case 12: return "sourceGate";
        case 13: return "destinationGate";
        case 14: return "isConnected";
        case 15: return "isRouteOK";
        default: return NULL;
    }
}

const char *cGateDescriptor::getFieldTypeString(void *object, int field)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "char";
        case 1: return "int";
        case 2: return "bool";
        case 3: return "int";
        case 4: return "cDisplayString";
        case 5: return "bool";
        case 6: return "simtime_t";
        case 7: return "cChannel";
        case 8: return "cGate";
        case 9: return "cGate";
        case 10: return "bool";
        case 11: return "bool";
        case 12: return "cGate";
        case 13: return "cGate";
        case 14: return "bool";
        case 15: return "bool";
        default: return NULL;
    }
}

const char *cGateDescriptor::getFieldProperty(void *object, int field, const char *propertyname)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0:
            if (!strcmp(propertyname,"hint")) return "gate type";
            if (!strcmp(propertyname,"group")) return "general";
            if (!strcmp(propertyname,"enum")) return "cGate_Type";
            return NULL;
        case 1:
            if (!strcmp(propertyname,"hint")) return "gate id, unique within this module";
            if (!strcmp(propertyname,"group")) return "general";
            return NULL;
        case 2:
            if (!strcmp(propertyname,"group")) return "general";
            if (!strcmp(propertyname,"hint")) return "whether this gate is part of a gate vector";
            return NULL;
        case 3:
            if (!strcmp(propertyname,"hint")) return "if vector: index of this gate within its gate vector";
            if (!strcmp(propertyname,"group")) return "general";
            return NULL;
        case 4:
            if (!strcmp(propertyname,"hint")) return "affects appearance of connection arrow on the \"to\" side";
            if (!strcmp(propertyname,"group")) return "general";
            return NULL;
        case 5:
            if (!strcmp(propertyname,"group")) return "state";
            if (!strcmp(propertyname,"hint")) return "only if the connection has a channel with nonzero datarate: whether there is an ongoing transmission on the channel";
            return NULL;
        case 6:
            if (!strcmp(propertyname,"hint")) return "only if the connection has a channel with nonzero datarate: if busy: when currently active transmissions will finish";
            if (!strcmp(propertyname,"group")) return "state";
            return NULL;
        case 7:
            if (!strcmp(propertyname,"group")) return "connection";
            if (!strcmp(propertyname,"hint")) return "channel object associated with the connection";
            return NULL;
        case 8:
            if (!strcmp(propertyname,"hint")) return "the gate this one is connected to, following the arrow direction -- for input gates, if set, it points inwards into the compound module";
            if (!strcmp(propertyname,"group")) return "connection";
            return NULL;
        case 9:
            if (!strcmp(propertyname,"group")) return "connection";
            if (!strcmp(propertyname,"hint")) return "gate on the opposite side as \"toGate\" -- \"fromGate\" of an output gate, if set, usually points to a submodule of this module";
            return NULL;
        case 10:
            if (!strcmp(propertyname,"group")) return "connection";
            if (!strcmp(propertyname,"hint")) return "whether if this gate is connected to the parent module or a sibling module";
            return NULL;
        case 11:
            if (!strcmp(propertyname,"group")) return "connection";
            if (!strcmp(propertyname,"hint")) return "true if this gate is connected to a submodule of this module, or belongs to a \"thru\" connection inside this compound module";
            return NULL;
        case 12:
            if (!strcmp(propertyname,"group")) return "connection";
            if (!strcmp(propertyname,"hint")) return "the last gate in the \"fromGate->fromGate->fromGate...\" chain";
            return NULL;
        case 13:
            if (!strcmp(propertyname,"hint")) return "the last gate in the \"toGate->toGate->toGate...\" chain";
            if (!strcmp(propertyname,"group")) return "connection";
            return NULL;
        case 14:
            if (!strcmp(propertyname,"group")) return "connection";
            if (!strcmp(propertyname,"hint")) return "whether the gate is fully connected -- both inside and outside for a compound module gate, and outside for a simple module gate";
            return NULL;
        case 15:
            if (!strcmp(propertyname,"hint")) return "the chain of connections is OK if it starts and ends at simple modules";
            if (!strcmp(propertyname,"group")) return "connection";
            return NULL;
        default: return NULL;
    }
}

int cGateDescriptor::getArraySize(void *object, int field)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    cGate *pp _MAYBEUNUSED = (cGate *)object;
    switch (field) {
        default: return 0;
    }
}

bool cGateDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    cGate *pp _MAYBEUNUSED = (cGate *)object;
    switch (field) {
        case 0: long2string(pp->type(),resultbuf,bufsize); return true;
        case 1: long2string(pp->id(),resultbuf,bufsize); return true;
        case 2: bool2string(pp->isVector(),resultbuf,bufsize); return true;
        case 3: long2string(pp->index(),resultbuf,bufsize); return true;
        case 4: {std::stringstream out; out << pp->displayString(); opp_strprettytrunc(resultbuf,out.str().c_str(),bufsize-1); return true;}
        case 5: bool2string(pp->isBusy(),resultbuf,bufsize); return true;
        case 6: double2string(pp->transmissionFinishes(),resultbuf,bufsize); return true;
        case 7: {std::stringstream out; out << pp->channel(); opp_strprettytrunc(resultbuf,out.str().c_str(),bufsize-1); return true;}
        case 8: {std::stringstream out; out << pp->toGate(); opp_strprettytrunc(resultbuf,out.str().c_str(),bufsize-1); return true;}
        case 9: {std::stringstream out; out << pp->fromGate(); opp_strprettytrunc(resultbuf,out.str().c_str(),bufsize-1); return true;}
        case 10: bool2string(pp->isConnectedOutside(),resultbuf,bufsize); return true;
        case 11: bool2string(pp->isConnectedInside(),resultbuf,bufsize); return true;
        case 12: {std::stringstream out; out << pp->sourceGate(); opp_strprettytrunc(resultbuf,out.str().c_str(),bufsize-1); return true;}
        case 13: {std::stringstream out; out << pp->destinationGate(); opp_strprettytrunc(resultbuf,out.str().c_str(),bufsize-1); return true;}
        case 14: bool2string(pp->isConnected(),resultbuf,bufsize); return true;
        case 15: bool2string(pp->isRouteOK(),resultbuf,bufsize); return true;
        default: return false;
    }
}

bool cGateDescriptor::setFieldAsString(void *object, int field, int i, const char *value)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    cGate *pp _MAYBEUNUSED = (cGate *)object;
    switch (field) {
        default: return false;
    }
}

const char *cGateDescriptor::getFieldStructName(void *object, int field)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 4: return "cDisplayString"; break;
        case 7: return "cChannel"; break;
        case 8: return "cGate"; break;
        case 9: return "cGate"; break;
        case 12: return "cGate"; break;
        case 13: return "cGate"; break;
        default: return NULL;
    }
}

void *cGateDescriptor::getFieldStructPointer(void *object, int field, int i)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    cGate *pp _MAYBEUNUSED = (cGate *)object;
    switch (field) {
        case 4: return (void *)(&pp->displayString()); break;
        case 7: return (void *)static_cast<cPolymorphic *>(pp->channel()); break;
        case 8: return (void *)static_cast<cPolymorphic *>(pp->toGate()); break;
        case 9: return (void *)static_cast<cPolymorphic *>(pp->fromGate()); break;
        case 12: return (void *)static_cast<cPolymorphic *>(pp->sourceGate()); break;
        case 13: return (void *)static_cast<cPolymorphic *>(pp->destinationGate()); break;
        default: return NULL;
    }
}

class cDisplayStringDescriptor : public cClassDescriptor
{
  public:
    cDisplayStringDescriptor();
    virtual ~cDisplayStringDescriptor();

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

Register_ClassDescriptor(cDisplayStringDescriptor);

cDisplayStringDescriptor::cDisplayStringDescriptor() : cClassDescriptor("cDisplayString", "cPolymorphic")
{
}

cDisplayStringDescriptor::~cDisplayStringDescriptor()
{
}

bool cDisplayStringDescriptor::doesSupport(cPolymorphic *obj)
{
    return dynamic_cast<cDisplayString *>(obj)!=NULL;
}

const char *cDisplayStringDescriptor::getProperty(const char *propertyname)
{
    if (!strcmp(propertyname,"omitGetVerb")) return "true";
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int cDisplayStringDescriptor::getFieldCount(void *object)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 1+basedesc->getFieldCount(object) : 1;
}

unsigned int cDisplayStringDescriptor::getFieldTypeFlags(void *object, int field)
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

const char *cDisplayStringDescriptor::getFieldName(void *object, int field)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "value";
        default: return NULL;
    }
}

const char *cDisplayStringDescriptor::getFieldTypeString(void *object, int field)
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

const char *cDisplayStringDescriptor::getFieldProperty(void *object, int field, const char *propertyname)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0:
            if (!strcmp(propertyname,"setter")) return "parse";
            if (!strcmp(propertyname,"hint")) return "the editable display string itself";
            if (!strcmp(propertyname,"editable")) return "true";
            if (!strcmp(propertyname,"getter")) return "getString";
            return NULL;
        default: return NULL;
    }
}

int cDisplayStringDescriptor::getArraySize(void *object, int field)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    cDisplayString *pp _MAYBEUNUSED = (cDisplayString *)object;
    switch (field) {
        default: return 0;
    }
}

bool cDisplayStringDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    cDisplayString *pp _MAYBEUNUSED = (cDisplayString *)object;
    switch (field) {
        case 0: oppstring2string(pp->getString(),resultbuf,bufsize); return true;
        default: return false;
    }
}

bool cDisplayStringDescriptor::setFieldAsString(void *object, int field, int i, const char *value)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    cDisplayString *pp _MAYBEUNUSED = (cDisplayString *)object;
    switch (field) {
        case 0: pp->parse((value)); return true;
        default: return false;
    }
}

const char *cDisplayStringDescriptor::getFieldStructName(void *object, int field)
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

void *cDisplayStringDescriptor::getFieldStructPointer(void *object, int field, int i)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    cDisplayString *pp _MAYBEUNUSED = (cDisplayString *)object;
    switch (field) {
        default: return NULL;
    }
}

class cArrayDescriptor : public cClassDescriptor
{
  public:
    cArrayDescriptor();
    virtual ~cArrayDescriptor();

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

Register_ClassDescriptor(cArrayDescriptor);

cArrayDescriptor::cArrayDescriptor() : cClassDescriptor("cArray", "cObject")
{
}

cArrayDescriptor::~cArrayDescriptor()
{
}

bool cArrayDescriptor::doesSupport(cPolymorphic *obj)
{
    return dynamic_cast<cArray *>(obj)!=NULL;
}

const char *cArrayDescriptor::getProperty(const char *propertyname)
{
    if (!strcmp(propertyname,"omitGetVerb")) return "true";
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int cArrayDescriptor::getFieldCount(void *object)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 2+basedesc->getFieldCount(object) : 2;
}

unsigned int cArrayDescriptor::getFieldTypeFlags(void *object, int field)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return FD_ISEDITABLE;
        case 1: return FD_ISARRAY | FD_ISCOMPOUND | FD_ISPOINTER | FD_ISCPOLYMORPHIC | FD_ISCOBJECT;
        default: return 0;
    }
}

const char *cArrayDescriptor::getFieldName(void *object, int field)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "takeOwnership";
        case 1: return "contents";
        default: return NULL;
    }
}

const char *cArrayDescriptor::getFieldTypeString(void *object, int field)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "bool";
        case 1: return "cObject";
        default: return NULL;
    }
}

const char *cArrayDescriptor::getFieldProperty(void *object, int field, const char *propertyname)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0:
            if (!strcmp(propertyname,"editable")) return "true";
            if (!strcmp(propertyname,"setter")) return "takeOwnership";
            if (!strcmp(propertyname,"hint")) return "whether the array should own the objects inserted into it";
            if (!strcmp(propertyname,"group")) return "general";
            return NULL;
        case 1:
            if (!strcmp(propertyname,"sizeGetter")) return "items";
            if (!strcmp(propertyname,"getter")) return "get";
            if (!strcmp(propertyname,"hint")) return "objects contained in the array";
            return NULL;
        default: return NULL;
    }
}

int cArrayDescriptor::getArraySize(void *object, int field)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    cArray *pp _MAYBEUNUSED = (cArray *)object;
    switch (field) {
        case 1: return pp->items();
        default: return 0;
    }
}

bool cArrayDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    cArray *pp _MAYBEUNUSED = (cArray *)object;
    switch (field) {
        case 0: bool2string(pp->takeOwnership(),resultbuf,bufsize); return true;
        case 1: {std::stringstream out; out << pp->get(i); opp_strprettytrunc(resultbuf,out.str().c_str(),bufsize-1); return true;}
        default: return false;
    }
}

bool cArrayDescriptor::setFieldAsString(void *object, int field, int i, const char *value)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    cArray *pp _MAYBEUNUSED = (cArray *)object;
    switch (field) {
        case 0: pp->takeOwnership(string2bool(value)); return true;
        default: return false;
    }
}

const char *cArrayDescriptor::getFieldStructName(void *object, int field)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 1: return "cObject"; break;
        default: return NULL;
    }
}

void *cArrayDescriptor::getFieldStructPointer(void *object, int field, int i)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    cArray *pp _MAYBEUNUSED = (cArray *)object;
    switch (field) {
        case 1: return (void *)static_cast<cPolymorphic *>(pp->get(i)); break;
        default: return NULL;
    }
}

class cMessageDescriptor : public cClassDescriptor
{
  public:
    cMessageDescriptor();
    virtual ~cMessageDescriptor();

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

Register_ClassDescriptor(cMessageDescriptor);

cMessageDescriptor::cMessageDescriptor() : cClassDescriptor("cMessage", "cObject")
{
}

cMessageDescriptor::~cMessageDescriptor()
{
}

bool cMessageDescriptor::doesSupport(cPolymorphic *obj)
{
    return dynamic_cast<cMessage *>(obj)!=NULL;
}

const char *cMessageDescriptor::getProperty(const char *propertyname)
{
    if (!strcmp(propertyname,"omitGetVerb")) return "true";
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int cMessageDescriptor::getFieldCount(void *object)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 23+basedesc->getFieldCount(object) : 23;
}

unsigned int cMessageDescriptor::getFieldTypeFlags(void *object, int field)
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
        case 3: return FD_ISEDITABLE;
        case 4: return FD_ISEDITABLE;
        case 5: return 0;
        case 6: return FD_ISCOMPOUND | FD_ISCPOLYMORPHIC | FD_ISCOBJECT;
        case 7: return FD_ISCOMPOUND | FD_ISPOINTER | FD_ISCPOLYMORPHIC | FD_ISCOBJECT;
        case 8: return FD_ISCOMPOUND | FD_ISPOINTER | FD_ISCPOLYMORPHIC;
        case 9: return 0;
        case 10: return 0;
        case 11: return 0;
        case 12: return 0;
        case 13: return 0;
        case 14: return FD_ISEDITABLE;
        case 15: return 0;
        case 16: return 0;
        case 17: return FD_ISCOMPOUND | FD_ISPOINTER | FD_ISCPOLYMORPHIC | FD_ISCOBJECT;
        case 18: return FD_ISCOMPOUND | FD_ISPOINTER | FD_ISCPOLYMORPHIC | FD_ISCOBJECT;
        case 19: return 0;
        case 20: return 0;
        case 21: return FD_ISCOMPOUND | FD_ISPOINTER | FD_ISCPOLYMORPHIC | FD_ISCOBJECT;
        case 22: return FD_ISCOMPOUND | FD_ISPOINTER | FD_ISCPOLYMORPHIC | FD_ISCOBJECT;
        default: return 0;
    }
}

const char *cMessageDescriptor::getFieldName(void *object, int field)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "kind";
        case 1: return "priority";
        case 2: return "length";
        case 3: return "byteLength";
        case 4: return "hasBitError";
        case 5: return "displayString";
        case 6: return "parList";
        case 7: return "encapsulatedMsg";
        case 8: return "controlInfo";
        case 9: return "isScheduled";
        case 10: return "isSelfMessage";
        case 11: return "creationTime";
        case 12: return "sendingTime";
        case 13: return "arrivalTime";
        case 14: return "timestamp";
        case 15: return "senderModuleId";
        case 16: return "senderGateId";
        case 17: return "senderModule";
        case 18: return "senderGate";
        case 19: return "arrivalModuleId";
        case 20: return "arrivalGateId";
        case 21: return "arrivalModule";
        case 22: return "arrivalGate";
        default: return NULL;
    }
}

const char *cMessageDescriptor::getFieldTypeString(void *object, int field)
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
        case 2: return "long";
        case 3: return "long";
        case 4: return "bool";
        case 5: return "string";
        case 6: return "cArray";
        case 7: return "cMessage";
        case 8: return "cPolymorphic";
        case 9: return "bool";
        case 10: return "bool";
        case 11: return "simtime_t";
        case 12: return "simtime_t";
        case 13: return "simtime_t";
        case 14: return "simtime_t";
        case 15: return "int";
        case 16: return "int";
        case 17: return "cModule";
        case 18: return "cGate";
        case 19: return "int";
        case 20: return "int";
        case 21: return "cModule";
        case 22: return "cGate";
        default: return NULL;
    }
}

const char *cMessageDescriptor::getFieldProperty(void *object, int field, const char *propertyname)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0:
            if (!strcmp(propertyname,"editable")) return "true";
            if (!strcmp(propertyname,"hint")) return "generic user-settable attribute, usually carries \"type\" or \"role\" of message";
            if (!strcmp(propertyname,"group")) return "message";
            return NULL;
        case 1:
            if (!strcmp(propertyname,"editable")) return "true";
            if (!strcmp(propertyname,"group")) return "message";
            if (!strcmp(propertyname,"hint")) return "controls delivery order of messages with equal timestamps";
            return NULL;
        case 2:
            if (!strcmp(propertyname,"editable")) return "true";
            if (!strcmp(propertyname,"group")) return "message";
            if (!strcmp(propertyname,"hint")) return "simulated length of the message in bits, affects transmission time and probability of bit errors when sent through a channel";
            return NULL;
        case 3:
            if (!strcmp(propertyname,"hint")) return "length in bytes, i.e. length in bits divided by eight";
            if (!strcmp(propertyname,"group")) return "message";
            if (!strcmp(propertyname,"editable")) return "true";
            return NULL;
        case 4:
            if (!strcmp(propertyname,"editable")) return "true";
            if (!strcmp(propertyname,"group")) return "message";
            if (!strcmp(propertyname,"hint")) return "signals that a bit error occurred when the message was sent through a channel with nonzero bit error rate";
            if (!strcmp(propertyname,"setter")) return "setBitError";
            return NULL;
        case 5:
            if (!strcmp(propertyname,"hint")) return "controls appearance of the message in GUI";
            if (!strcmp(propertyname,"group")) return "message";
            return NULL;
        case 6:
            if (!strcmp(propertyname,"group")) return "obsolete";
            if (!strcmp(propertyname,"hint")) return "use of \"parList\" should be replaced with message subclassing in the few models that still use it";
            return NULL;
        case 7:
            if (!strcmp(propertyname,"hint")) return "used with protocol stacks: stores an encapsulated higher-layer packet";
            return NULL;
        case 8:
            if (!strcmp(propertyname,"hint")) return "used with protocol stacks: carries extra information when a packet is sent between protocol layers";
            return NULL;
        case 9:
            if (!strcmp(propertyname,"hint")) return "whether self-message is currently scheduled, or message currently is in transit";
            if (!strcmp(propertyname,"group")) return "sending";
            return NULL;
        case 10:
            if (!strcmp(propertyname,"group")) return "sending";
            if (!strcmp(propertyname,"hint")) return "whether message is a self-message, scheduled to be delivered back to the same module at a later time";
            return NULL;
        case 11:
            if (!strcmp(propertyname,"group")) return "sending";
            if (!strcmp(propertyname,"hint")) return "simulation time the message was created";
            return NULL;
        case 12:
            if (!strcmp(propertyname,"hint")) return "simulation time of the current or last sending/scheduling of the message";
            if (!strcmp(propertyname,"group")) return "sending";
            return NULL;
        case 13:
            if (!strcmp(propertyname,"hint")) return "simulation time the message will be/was delivered to the destination module";
            if (!strcmp(propertyname,"group")) return "sending";
            return NULL;
        case 14:
            if (!strcmp(propertyname,"editable")) return "true";
            if (!strcmp(propertyname,"group")) return "sending";
            if (!strcmp(propertyname,"hint")) return "user-settable timestamp for generic use";
            return NULL;
        case 15:
            if (!strcmp(propertyname,"group")) return "sending";
            if (!strcmp(propertyname,"hint")) return "ID of the module performing the current or last send/schedule operation";
            return NULL;
        case 16:
            if (!strcmp(propertyname,"hint")) return "module-local ID of the gate on which the message was sent out -- -1==none for self-messages and after \"sendDirect\"";
            if (!strcmp(propertyname,"group")) return "sending";
            return NULL;
        case 17:
            if (!strcmp(propertyname,"group")) return "sending";
            if (!strcmp(propertyname,"hint")) return "ID of the module performing the current or last send/schedule operation";
            return NULL;
        case 18:
            if (!strcmp(propertyname,"hint")) return "the gate on which the message was sent out -- NULL for self-messages and after \"sendDirect\"";
            if (!strcmp(propertyname,"group")) return "sending";
            return NULL;
        case 19:
            if (!strcmp(propertyname,"hint")) return "ID of the arrival module of the current or last sending/scheduling";
            if (!strcmp(propertyname,"group")) return "sending";
            return NULL;
        case 20:
            if (!strcmp(propertyname,"group")) return "sending";
            if (!strcmp(propertyname,"hint")) return "module-local ID of arrival gate for current or last sending -- -1==none for self-messages";
            return NULL;
        case 21:
            if (!strcmp(propertyname,"group")) return "sending";
            if (!strcmp(propertyname,"hint")) return "arrival module for current or last sending/scheduling";
            return NULL;
        case 22:
            if (!strcmp(propertyname,"group")) return "sending";
            if (!strcmp(propertyname,"hint")) return "arrival gate for current or last sending -- NULL for self-messages";
            return NULL;
        default: return NULL;
    }
}

int cMessageDescriptor::getArraySize(void *object, int field)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    cMessage *pp _MAYBEUNUSED = (cMessage *)object;
    switch (field) {
        default: return 0;
    }
}

bool cMessageDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    cMessage *pp _MAYBEUNUSED = (cMessage *)object;
    switch (field) {
        case 0: long2string(pp->kind(),resultbuf,bufsize); return true;
        case 1: long2string(pp->priority(),resultbuf,bufsize); return true;
        case 2: long2string(pp->length(),resultbuf,bufsize); return true;
        case 3: long2string(pp->byteLength(),resultbuf,bufsize); return true;
        case 4: bool2string(pp->hasBitError(),resultbuf,bufsize); return true;
        case 5: oppstring2string(pp->displayString(),resultbuf,bufsize); return true;
        case 6: {std::stringstream out; out << pp->parList(); opp_strprettytrunc(resultbuf,out.str().c_str(),bufsize-1); return true;}
        case 7: {std::stringstream out; out << pp->encapsulatedMsg(); opp_strprettytrunc(resultbuf,out.str().c_str(),bufsize-1); return true;}
        case 8: {std::stringstream out; out << pp->controlInfo(); opp_strprettytrunc(resultbuf,out.str().c_str(),bufsize-1); return true;}
        case 9: bool2string(pp->isScheduled(),resultbuf,bufsize); return true;
        case 10: bool2string(pp->isSelfMessage(),resultbuf,bufsize); return true;
        case 11: double2string(pp->creationTime(),resultbuf,bufsize); return true;
        case 12: double2string(pp->sendingTime(),resultbuf,bufsize); return true;
        case 13: double2string(pp->arrivalTime(),resultbuf,bufsize); return true;
        case 14: double2string(pp->timestamp(),resultbuf,bufsize); return true;
        case 15: long2string(pp->senderModuleId(),resultbuf,bufsize); return true;
        case 16: long2string(pp->senderGateId(),resultbuf,bufsize); return true;
        case 17: {std::stringstream out; out << pp->senderModule(); opp_strprettytrunc(resultbuf,out.str().c_str(),bufsize-1); return true;}
        case 18: {std::stringstream out; out << pp->senderGate(); opp_strprettytrunc(resultbuf,out.str().c_str(),bufsize-1); return true;}
        case 19: long2string(pp->arrivalModuleId(),resultbuf,bufsize); return true;
        case 20: long2string(pp->arrivalGateId(),resultbuf,bufsize); return true;
        case 21: {std::stringstream out; out << pp->arrivalModule(); opp_strprettytrunc(resultbuf,out.str().c_str(),bufsize-1); return true;}
        case 22: {std::stringstream out; out << pp->arrivalGate(); opp_strprettytrunc(resultbuf,out.str().c_str(),bufsize-1); return true;}
        default: return false;
    }
}

bool cMessageDescriptor::setFieldAsString(void *object, int field, int i, const char *value)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    cMessage *pp _MAYBEUNUSED = (cMessage *)object;
    switch (field) {
        case 0: pp->setKind(string2long(value)); return true;
        case 1: pp->setPriority(string2long(value)); return true;
        case 2: pp->setLength(string2long(value)); return true;
        case 3: pp->setByteLength(string2long(value)); return true;
        case 4: pp->setBitError(string2bool(value)); return true;
        case 14: pp->setTimestamp(string2double(value)); return true;
        default: return false;
    }
}

const char *cMessageDescriptor::getFieldStructName(void *object, int field)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 6: return "cArray"; break;
        case 7: return "cMessage"; break;
        case 8: return "cPolymorphic"; break;
        case 17: return "cModule"; break;
        case 18: return "cGate"; break;
        case 21: return "cModule"; break;
        case 22: return "cGate"; break;
        default: return NULL;
    }
}

void *cMessageDescriptor::getFieldStructPointer(void *object, int field, int i)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    cMessage *pp _MAYBEUNUSED = (cMessage *)object;
    switch (field) {
        case 6: return (void *)static_cast<cPolymorphic *>(&pp->parList()); break;
        case 7: return (void *)static_cast<cPolymorphic *>(pp->encapsulatedMsg()); break;
        case 8: return (void *)static_cast<cPolymorphic *>(pp->controlInfo()); break;
        case 17: return (void *)static_cast<cPolymorphic *>(pp->senderModule()); break;
        case 18: return (void *)static_cast<cPolymorphic *>(pp->senderGate()); break;
        case 21: return (void *)static_cast<cPolymorphic *>(pp->arrivalModule()); break;
        case 22: return (void *)static_cast<cPolymorphic *>(pp->arrivalGate()); break;
        default: return NULL;
    }
}

class cPacketDescriptor : public cClassDescriptor
{
  public:
    cPacketDescriptor();
    virtual ~cPacketDescriptor();

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

Register_ClassDescriptor(cPacketDescriptor);

cPacketDescriptor::cPacketDescriptor() : cClassDescriptor("cPacket", "cMessage")
{
}

cPacketDescriptor::~cPacketDescriptor()
{
}

bool cPacketDescriptor::doesSupport(cPolymorphic *obj)
{
    return dynamic_cast<cPacket *>(obj)!=NULL;
}

const char *cPacketDescriptor::getProperty(const char *propertyname)
{
    if (!strcmp(propertyname,"omitGetVerb")) return "true";
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int cPacketDescriptor::getFieldCount(void *object)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 2+basedesc->getFieldCount(object) : 2;
}

unsigned int cPacketDescriptor::getFieldTypeFlags(void *object, int field)
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

const char *cPacketDescriptor::getFieldName(void *object, int field)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "protocol";
        case 1: return "pdu";
        default: return NULL;
    }
}

const char *cPacketDescriptor::getFieldTypeString(void *object, int field)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "short";
        case 1: return "short";
        default: return NULL;
    }
}

const char *cPacketDescriptor::getFieldProperty(void *object, int field, const char *propertyname)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0:
            if (!strcmp(propertyname,"group")) return "packet";
            if (!strcmp(propertyname,"hint")) return "declared on cPacket, which is an obsolete class";
            if (!strcmp(propertyname,"editable")) return "true";
            return NULL;
        case 1:
            if (!strcmp(propertyname,"editable")) return "true";
            if (!strcmp(propertyname,"group")) return "packet";
            if (!strcmp(propertyname,"hint")) return "declared on cPacket, which is an obsolete class";
            return NULL;
        default: return NULL;
    }
}

int cPacketDescriptor::getArraySize(void *object, int field)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    cPacket *pp _MAYBEUNUSED = (cPacket *)object;
    switch (field) {
        default: return 0;
    }
}

bool cPacketDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    cPacket *pp _MAYBEUNUSED = (cPacket *)object;
    switch (field) {
        case 0: long2string(pp->protocol(),resultbuf,bufsize); return true;
        case 1: long2string(pp->pdu(),resultbuf,bufsize); return true;
        default: return false;
    }
}

bool cPacketDescriptor::setFieldAsString(void *object, int field, int i, const char *value)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    cPacket *pp _MAYBEUNUSED = (cPacket *)object;
    switch (field) {
        case 0: pp->setProtocol(string2long(value)); return true;
        case 1: pp->setPdu(string2long(value)); return true;
        default: return false;
    }
}

const char *cPacketDescriptor::getFieldStructName(void *object, int field)
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

void *cPacketDescriptor::getFieldStructPointer(void *object, int field, int i)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    cPacket *pp _MAYBEUNUSED = (cPacket *)object;
    switch (field) {
        default: return NULL;
    }
}

class cStatisticDescriptor : public cClassDescriptor
{
  public:
    cStatisticDescriptor();
    virtual ~cStatisticDescriptor();

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

Register_ClassDescriptor(cStatisticDescriptor);

cStatisticDescriptor::cStatisticDescriptor() : cClassDescriptor("cStatistic", "cObject")
{
}

cStatisticDescriptor::~cStatisticDescriptor()
{
}

bool cStatisticDescriptor::doesSupport(cPolymorphic *obj)
{
    return dynamic_cast<cStatistic *>(obj)!=NULL;
}

const char *cStatisticDescriptor::getProperty(const char *propertyname)
{
    if (!strcmp(propertyname,"omitGetVerb")) return "true";
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int cStatisticDescriptor::getFieldCount(void *object)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 9+basedesc->getFieldCount(object) : 9;
}

unsigned int cStatisticDescriptor::getFieldTypeFlags(void *object, int field)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return 0;
        case 1: return 0;
        case 2: return 0;
        case 3: return 0;
        case 4: return 0;
        case 5: return 0;
        case 6: return 0;
        case 7: return 0;
        case 8: return 0;
        default: return 0;
    }
}

const char *cStatisticDescriptor::getFieldName(void *object, int field)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "samples";
        case 1: return "weights";
        case 2: return "sum";
        case 3: return "sqrSum";
        case 4: return "min";
        case 5: return "max";
        case 6: return "mean";
        case 7: return "stddev";
        case 8: return "variance";
        default: return NULL;
    }
}

const char *cStatisticDescriptor::getFieldTypeString(void *object, int field)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "long";
        case 1: return "double";
        case 2: return "double";
        case 3: return "double";
        case 4: return "double";
        case 5: return "double";
        case 6: return "double";
        case 7: return "double";
        case 8: return "double";
        default: return NULL;
    }
}

const char *cStatisticDescriptor::getFieldProperty(void *object, int field, const char *propertyname)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0:
            if (!strcmp(propertyname,"hint")) return "number of observations collected so far";
            return NULL;
        case 1:
            if (!strcmp(propertyname,"hint")) return "sum of weights, which equals the number of observations in the unweighted case";
            return NULL;
        case 2:
            if (!strcmp(propertyname,"hint")) return "sum of observations";
            return NULL;
        case 3:
            if (!strcmp(propertyname,"hint")) return "sum of squares of the observations";
            return NULL;
        case 4:
            if (!strcmp(propertyname,"hint")) return "minimum of the observations";
            return NULL;
        case 5:
            if (!strcmp(propertyname,"hint")) return "maximum of the observations";
            return NULL;
        case 6:
            if (!strcmp(propertyname,"hint")) return "mean of the observations";
            return NULL;
        case 7:
            if (!strcmp(propertyname,"hint")) return "standard deviation of the observations";
            return NULL;
        case 8:
            if (!strcmp(propertyname,"hint")) return "variance of the observations";
            return NULL;
        default: return NULL;
    }
}

int cStatisticDescriptor::getArraySize(void *object, int field)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    cStatistic *pp _MAYBEUNUSED = (cStatistic *)object;
    switch (field) {
        default: return 0;
    }
}

bool cStatisticDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    cStatistic *pp _MAYBEUNUSED = (cStatistic *)object;
    switch (field) {
        case 0: long2string(pp->samples(),resultbuf,bufsize); return true;
        case 1: double2string(pp->weights(),resultbuf,bufsize); return true;
        case 2: double2string(pp->sum(),resultbuf,bufsize); return true;
        case 3: double2string(pp->sqrSum(),resultbuf,bufsize); return true;
        case 4: double2string(pp->min(),resultbuf,bufsize); return true;
        case 5: double2string(pp->max(),resultbuf,bufsize); return true;
        case 6: double2string(pp->mean(),resultbuf,bufsize); return true;
        case 7: double2string(pp->stddev(),resultbuf,bufsize); return true;
        case 8: double2string(pp->variance(),resultbuf,bufsize); return true;
        default: return false;
    }
}

bool cStatisticDescriptor::setFieldAsString(void *object, int field, int i, const char *value)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    cStatistic *pp _MAYBEUNUSED = (cStatistic *)object;
    switch (field) {
        default: return false;
    }
}

const char *cStatisticDescriptor::getFieldStructName(void *object, int field)
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

void *cStatisticDescriptor::getFieldStructPointer(void *object, int field, int i)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    cStatistic *pp _MAYBEUNUSED = (cStatistic *)object;
    switch (field) {
        default: return NULL;
    }
}

class cStdDevDescriptor : public cClassDescriptor
{
  public:
    cStdDevDescriptor();
    virtual ~cStdDevDescriptor();

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

Register_ClassDescriptor(cStdDevDescriptor);

cStdDevDescriptor::cStdDevDescriptor() : cClassDescriptor("cStdDev", "cStatistic")
{
}

cStdDevDescriptor::~cStdDevDescriptor()
{
}

bool cStdDevDescriptor::doesSupport(cPolymorphic *obj)
{
    return dynamic_cast<cStdDev *>(obj)!=NULL;
}

const char *cStdDevDescriptor::getProperty(const char *propertyname)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int cStdDevDescriptor::getFieldCount(void *object)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 0+basedesc->getFieldCount(object) : 0;
}

unsigned int cStdDevDescriptor::getFieldTypeFlags(void *object, int field)
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

const char *cStdDevDescriptor::getFieldName(void *object, int field)
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

const char *cStdDevDescriptor::getFieldTypeString(void *object, int field)
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

const char *cStdDevDescriptor::getFieldProperty(void *object, int field, const char *propertyname)
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

int cStdDevDescriptor::getArraySize(void *object, int field)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    cStdDev *pp _MAYBEUNUSED = (cStdDev *)object;
    switch (field) {
        default: return 0;
    }
}

bool cStdDevDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    cStdDev *pp _MAYBEUNUSED = (cStdDev *)object;
    switch (field) {
        default: return false;
    }
}

bool cStdDevDescriptor::setFieldAsString(void *object, int field, int i, const char *value)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    cStdDev *pp _MAYBEUNUSED = (cStdDev *)object;
    switch (field) {
        default: return false;
    }
}

const char *cStdDevDescriptor::getFieldStructName(void *object, int field)
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

void *cStdDevDescriptor::getFieldStructPointer(void *object, int field, int i)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    cStdDev *pp _MAYBEUNUSED = (cStdDev *)object;
    switch (field) {
        default: return NULL;
    }
}

class cWeightedStdDevDescriptor : public cClassDescriptor
{
  public:
    cWeightedStdDevDescriptor();
    virtual ~cWeightedStdDevDescriptor();

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

Register_ClassDescriptor(cWeightedStdDevDescriptor);

cWeightedStdDevDescriptor::cWeightedStdDevDescriptor() : cClassDescriptor("cWeightedStdDev", "cStdDev")
{
}

cWeightedStdDevDescriptor::~cWeightedStdDevDescriptor()
{
}

bool cWeightedStdDevDescriptor::doesSupport(cPolymorphic *obj)
{
    return dynamic_cast<cWeightedStdDev *>(obj)!=NULL;
}

const char *cWeightedStdDevDescriptor::getProperty(const char *propertyname)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int cWeightedStdDevDescriptor::getFieldCount(void *object)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 0+basedesc->getFieldCount(object) : 0;
}

unsigned int cWeightedStdDevDescriptor::getFieldTypeFlags(void *object, int field)
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

const char *cWeightedStdDevDescriptor::getFieldName(void *object, int field)
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

const char *cWeightedStdDevDescriptor::getFieldTypeString(void *object, int field)
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

const char *cWeightedStdDevDescriptor::getFieldProperty(void *object, int field, const char *propertyname)
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

int cWeightedStdDevDescriptor::getArraySize(void *object, int field)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    cWeightedStdDev *pp _MAYBEUNUSED = (cWeightedStdDev *)object;
    switch (field) {
        default: return 0;
    }
}

bool cWeightedStdDevDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    cWeightedStdDev *pp _MAYBEUNUSED = (cWeightedStdDev *)object;
    switch (field) {
        default: return false;
    }
}

bool cWeightedStdDevDescriptor::setFieldAsString(void *object, int field, int i, const char *value)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    cWeightedStdDev *pp _MAYBEUNUSED = (cWeightedStdDev *)object;
    switch (field) {
        default: return false;
    }
}

const char *cWeightedStdDevDescriptor::getFieldStructName(void *object, int field)
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

void *cWeightedStdDevDescriptor::getFieldStructPointer(void *object, int field, int i)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    cWeightedStdDev *pp _MAYBEUNUSED = (cWeightedStdDev *)object;
    switch (field) {
        default: return NULL;
    }
}

class cDensityEstBaseDescriptor : public cClassDescriptor
{
  public:
    cDensityEstBaseDescriptor();
    virtual ~cDensityEstBaseDescriptor();

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

Register_ClassDescriptor(cDensityEstBaseDescriptor);

cDensityEstBaseDescriptor::cDensityEstBaseDescriptor() : cClassDescriptor("cDensityEstBase", "cStdDev")
{
}

cDensityEstBaseDescriptor::~cDensityEstBaseDescriptor()
{
}

bool cDensityEstBaseDescriptor::doesSupport(cPolymorphic *obj)
{
    return dynamic_cast<cDensityEstBase *>(obj)!=NULL;
}

const char *cDensityEstBaseDescriptor::getProperty(const char *propertyname)
{
    if (!strcmp(propertyname,"omitGetVerb")) return "true";
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int cDensityEstBaseDescriptor::getFieldCount(void *object)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 5+basedesc->getFieldCount(object) : 5;
}

unsigned int cDensityEstBaseDescriptor::getFieldTypeFlags(void *object, int field)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return 0;
        case 1: return 0;
        case 2: return 0;
        case 3: return 0;
        case 4: return FD_ISARRAY | FD_ISCOMPOUND;
        default: return 0;
    }
}

const char *cDensityEstBaseDescriptor::getFieldName(void *object, int field)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "transformed";
        case 1: return "underflowCell";
        case 2: return "overflowCell";
        case 3: return "cells";
        case 4: return "cellInfo";
        default: return NULL;
    }
}

const char *cDensityEstBaseDescriptor::getFieldTypeString(void *object, int field)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "bool";
        case 1: return "unsigned long";
        case 2: return "unsigned long";
        case 3: return "int";
        case 4: return "cDensityEstBase_Cell";
        default: return NULL;
    }
}

const char *cDensityEstBaseDescriptor::getFieldProperty(void *object, int field, const char *propertyname)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0:
            if (!strcmp(propertyname,"hint")) return "if false, the object is still collecting initial observations to be used for laying out histogram cells";
            if (!strcmp(propertyname,"group")) return "histogram";
            return NULL;
        case 1:
            if (!strcmp(propertyname,"hint")) return "number of observations below the first histogram cell";
            if (!strcmp(propertyname,"group")) return "histogram";
            return NULL;
        case 2:
            if (!strcmp(propertyname,"hint")) return "number of observations above the last histogram cell";
            if (!strcmp(propertyname,"group")) return "histogram";
            return NULL;
        case 3:
            if (!strcmp(propertyname,"hint")) return "number of cells in the histogram";
            if (!strcmp(propertyname,"group")) return "histogram";
            return NULL;
        case 4:
            if (!strcmp(propertyname,"group")) return "histogram";
            if (!strcmp(propertyname,"hint")) return "histogram cell bounds, observation count in the cell, and density estimate in the cell";
            if (!strcmp(propertyname,"sizeGetter")) return "cells";
            return NULL;
        default: return NULL;
    }
}

int cDensityEstBaseDescriptor::getArraySize(void *object, int field)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    cDensityEstBase *pp _MAYBEUNUSED = (cDensityEstBase *)object;
    switch (field) {
        case 4: return pp->cells();
        default: return 0;
    }
}

bool cDensityEstBaseDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    cDensityEstBase *pp _MAYBEUNUSED = (cDensityEstBase *)object;
    switch (field) {
        case 0: bool2string(pp->transformed(),resultbuf,bufsize); return true;
        case 1: long2string(pp->underflowCell(),resultbuf,bufsize); return true;
        case 2: long2string(pp->overflowCell(),resultbuf,bufsize); return true;
        case 3: long2string(pp->cells(),resultbuf,bufsize); return true;
        case 4: {std::stringstream out; out << pp->cellInfo(i); opp_strprettytrunc(resultbuf,out.str().c_str(),bufsize-1); return true;}
        default: return false;
    }
}

bool cDensityEstBaseDescriptor::setFieldAsString(void *object, int field, int i, const char *value)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    cDensityEstBase *pp _MAYBEUNUSED = (cDensityEstBase *)object;
    switch (field) {
        default: return false;
    }
}

const char *cDensityEstBaseDescriptor::getFieldStructName(void *object, int field)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 4: return "cDensityEstBase_Cell"; break;
        default: return NULL;
    }
}

void *cDensityEstBaseDescriptor::getFieldStructPointer(void *object, int field, int i)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    cDensityEstBase *pp _MAYBEUNUSED = (cDensityEstBase *)object;
    switch (field) {
        case 4: return NULL;//(void *)(&pp->cellInfo(i)); break;
        default: return NULL;
    }
}

class cHistogramBaseDescriptor : public cClassDescriptor
{
  public:
    cHistogramBaseDescriptor();
    virtual ~cHistogramBaseDescriptor();

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

Register_ClassDescriptor(cHistogramBaseDescriptor);

cHistogramBaseDescriptor::cHistogramBaseDescriptor() : cClassDescriptor("cHistogramBase", "cDensityEstBase")
{
}

cHistogramBaseDescriptor::~cHistogramBaseDescriptor()
{
}

bool cHistogramBaseDescriptor::doesSupport(cPolymorphic *obj)
{
    return dynamic_cast<cHistogramBase *>(obj)!=NULL;
}

const char *cHistogramBaseDescriptor::getProperty(const char *propertyname)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int cHistogramBaseDescriptor::getFieldCount(void *object)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 0+basedesc->getFieldCount(object) : 0;
}

unsigned int cHistogramBaseDescriptor::getFieldTypeFlags(void *object, int field)
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

const char *cHistogramBaseDescriptor::getFieldName(void *object, int field)
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

const char *cHistogramBaseDescriptor::getFieldTypeString(void *object, int field)
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

const char *cHistogramBaseDescriptor::getFieldProperty(void *object, int field, const char *propertyname)
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

int cHistogramBaseDescriptor::getArraySize(void *object, int field)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    cHistogramBase *pp _MAYBEUNUSED = (cHistogramBase *)object;
    switch (field) {
        default: return 0;
    }
}

bool cHistogramBaseDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    cHistogramBase *pp _MAYBEUNUSED = (cHistogramBase *)object;
    switch (field) {
        default: return false;
    }
}

bool cHistogramBaseDescriptor::setFieldAsString(void *object, int field, int i, const char *value)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    cHistogramBase *pp _MAYBEUNUSED = (cHistogramBase *)object;
    switch (field) {
        default: return false;
    }
}

const char *cHistogramBaseDescriptor::getFieldStructName(void *object, int field)
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

void *cHistogramBaseDescriptor::getFieldStructPointer(void *object, int field, int i)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    cHistogramBase *pp _MAYBEUNUSED = (cHistogramBase *)object;
    switch (field) {
        default: return NULL;
    }
}

class cEqdHistogramBaseDescriptor : public cClassDescriptor
{
  public:
    cEqdHistogramBaseDescriptor();
    virtual ~cEqdHistogramBaseDescriptor();

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

Register_ClassDescriptor(cEqdHistogramBaseDescriptor);

cEqdHistogramBaseDescriptor::cEqdHistogramBaseDescriptor() : cClassDescriptor("cEqdHistogramBase", "cHistogramBase")
{
}

cEqdHistogramBaseDescriptor::~cEqdHistogramBaseDescriptor()
{
}

bool cEqdHistogramBaseDescriptor::doesSupport(cPolymorphic *obj)
{
    return dynamic_cast<cEqdHistogramBase *>(obj)!=NULL;
}

const char *cEqdHistogramBaseDescriptor::getProperty(const char *propertyname)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int cEqdHistogramBaseDescriptor::getFieldCount(void *object)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 0+basedesc->getFieldCount(object) : 0;
}

unsigned int cEqdHistogramBaseDescriptor::getFieldTypeFlags(void *object, int field)
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

const char *cEqdHistogramBaseDescriptor::getFieldName(void *object, int field)
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

const char *cEqdHistogramBaseDescriptor::getFieldTypeString(void *object, int field)
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

const char *cEqdHistogramBaseDescriptor::getFieldProperty(void *object, int field, const char *propertyname)
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

int cEqdHistogramBaseDescriptor::getArraySize(void *object, int field)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    cEqdHistogramBase *pp _MAYBEUNUSED = (cEqdHistogramBase *)object;
    switch (field) {
        default: return 0;
    }
}

bool cEqdHistogramBaseDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    cEqdHistogramBase *pp _MAYBEUNUSED = (cEqdHistogramBase *)object;
    switch (field) {
        default: return false;
    }
}

bool cEqdHistogramBaseDescriptor::setFieldAsString(void *object, int field, int i, const char *value)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    cEqdHistogramBase *pp _MAYBEUNUSED = (cEqdHistogramBase *)object;
    switch (field) {
        default: return false;
    }
}

const char *cEqdHistogramBaseDescriptor::getFieldStructName(void *object, int field)
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

void *cEqdHistogramBaseDescriptor::getFieldStructPointer(void *object, int field, int i)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    cEqdHistogramBase *pp _MAYBEUNUSED = (cEqdHistogramBase *)object;
    switch (field) {
        default: return NULL;
    }
}

class cVarHistogramDescriptor : public cClassDescriptor
{
  public:
    cVarHistogramDescriptor();
    virtual ~cVarHistogramDescriptor();

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

Register_ClassDescriptor(cVarHistogramDescriptor);

cVarHistogramDescriptor::cVarHistogramDescriptor() : cClassDescriptor("cVarHistogram", "cHistogramBase")
{
}

cVarHistogramDescriptor::~cVarHistogramDescriptor()
{
}

bool cVarHistogramDescriptor::doesSupport(cPolymorphic *obj)
{
    return dynamic_cast<cVarHistogram *>(obj)!=NULL;
}

const char *cVarHistogramDescriptor::getProperty(const char *propertyname)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int cVarHistogramDescriptor::getFieldCount(void *object)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 0+basedesc->getFieldCount(object) : 0;
}

unsigned int cVarHistogramDescriptor::getFieldTypeFlags(void *object, int field)
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

const char *cVarHistogramDescriptor::getFieldName(void *object, int field)
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

const char *cVarHistogramDescriptor::getFieldTypeString(void *object, int field)
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

const char *cVarHistogramDescriptor::getFieldProperty(void *object, int field, const char *propertyname)
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

int cVarHistogramDescriptor::getArraySize(void *object, int field)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    cVarHistogram *pp _MAYBEUNUSED = (cVarHistogram *)object;
    switch (field) {
        default: return 0;
    }
}

bool cVarHistogramDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    cVarHistogram *pp _MAYBEUNUSED = (cVarHistogram *)object;
    switch (field) {
        default: return false;
    }
}

bool cVarHistogramDescriptor::setFieldAsString(void *object, int field, int i, const char *value)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    cVarHistogram *pp _MAYBEUNUSED = (cVarHistogram *)object;
    switch (field) {
        default: return false;
    }
}

const char *cVarHistogramDescriptor::getFieldStructName(void *object, int field)
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

void *cVarHistogramDescriptor::getFieldStructPointer(void *object, int field, int i)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    cVarHistogram *pp _MAYBEUNUSED = (cVarHistogram *)object;
    switch (field) {
        default: return NULL;
    }
}

class cLongHistogramDescriptor : public cClassDescriptor
{
  public:
    cLongHistogramDescriptor();
    virtual ~cLongHistogramDescriptor();

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

Register_ClassDescriptor(cLongHistogramDescriptor);

cLongHistogramDescriptor::cLongHistogramDescriptor() : cClassDescriptor("cLongHistogram", "cEqdHistogramBase")
{
}

cLongHistogramDescriptor::~cLongHistogramDescriptor()
{
}

bool cLongHistogramDescriptor::doesSupport(cPolymorphic *obj)
{
    return dynamic_cast<cLongHistogram *>(obj)!=NULL;
}

const char *cLongHistogramDescriptor::getProperty(const char *propertyname)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int cLongHistogramDescriptor::getFieldCount(void *object)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 0+basedesc->getFieldCount(object) : 0;
}

unsigned int cLongHistogramDescriptor::getFieldTypeFlags(void *object, int field)
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

const char *cLongHistogramDescriptor::getFieldName(void *object, int field)
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

const char *cLongHistogramDescriptor::getFieldTypeString(void *object, int field)
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

const char *cLongHistogramDescriptor::getFieldProperty(void *object, int field, const char *propertyname)
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

int cLongHistogramDescriptor::getArraySize(void *object, int field)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    cLongHistogram *pp _MAYBEUNUSED = (cLongHistogram *)object;
    switch (field) {
        default: return 0;
    }
}

bool cLongHistogramDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    cLongHistogram *pp _MAYBEUNUSED = (cLongHistogram *)object;
    switch (field) {
        default: return false;
    }
}

bool cLongHistogramDescriptor::setFieldAsString(void *object, int field, int i, const char *value)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    cLongHistogram *pp _MAYBEUNUSED = (cLongHistogram *)object;
    switch (field) {
        default: return false;
    }
}

const char *cLongHistogramDescriptor::getFieldStructName(void *object, int field)
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

void *cLongHistogramDescriptor::getFieldStructPointer(void *object, int field, int i)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    cLongHistogram *pp _MAYBEUNUSED = (cLongHistogram *)object;
    switch (field) {
        default: return NULL;
    }
}

class cDoubleHistogramDescriptor : public cClassDescriptor
{
  public:
    cDoubleHistogramDescriptor();
    virtual ~cDoubleHistogramDescriptor();

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

Register_ClassDescriptor(cDoubleHistogramDescriptor);

cDoubleHistogramDescriptor::cDoubleHistogramDescriptor() : cClassDescriptor("cDoubleHistogram", "cEqdHistogramBase")
{
}

cDoubleHistogramDescriptor::~cDoubleHistogramDescriptor()
{
}

bool cDoubleHistogramDescriptor::doesSupport(cPolymorphic *obj)
{
    return dynamic_cast<cDoubleHistogram *>(obj)!=NULL;
}

const char *cDoubleHistogramDescriptor::getProperty(const char *propertyname)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int cDoubleHistogramDescriptor::getFieldCount(void *object)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 0+basedesc->getFieldCount(object) : 0;
}

unsigned int cDoubleHistogramDescriptor::getFieldTypeFlags(void *object, int field)
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

const char *cDoubleHistogramDescriptor::getFieldName(void *object, int field)
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

const char *cDoubleHistogramDescriptor::getFieldTypeString(void *object, int field)
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

const char *cDoubleHistogramDescriptor::getFieldProperty(void *object, int field, const char *propertyname)
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

int cDoubleHistogramDescriptor::getArraySize(void *object, int field)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    cDoubleHistogram *pp _MAYBEUNUSED = (cDoubleHistogram *)object;
    switch (field) {
        default: return 0;
    }
}

bool cDoubleHistogramDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    cDoubleHistogram *pp _MAYBEUNUSED = (cDoubleHistogram *)object;
    switch (field) {
        default: return false;
    }
}

bool cDoubleHistogramDescriptor::setFieldAsString(void *object, int field, int i, const char *value)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    cDoubleHistogram *pp _MAYBEUNUSED = (cDoubleHistogram *)object;
    switch (field) {
        default: return false;
    }
}

const char *cDoubleHistogramDescriptor::getFieldStructName(void *object, int field)
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

void *cDoubleHistogramDescriptor::getFieldStructPointer(void *object, int field, int i)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    cDoubleHistogram *pp _MAYBEUNUSED = (cDoubleHistogram *)object;
    switch (field) {
        default: return NULL;
    }
}

class cKSplitDescriptor : public cClassDescriptor
{
  public:
    cKSplitDescriptor();
    virtual ~cKSplitDescriptor();

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

Register_ClassDescriptor(cKSplitDescriptor);

cKSplitDescriptor::cKSplitDescriptor() : cClassDescriptor("cKSplit", "cDensityEstBase")
{
}

cKSplitDescriptor::~cKSplitDescriptor()
{
}

bool cKSplitDescriptor::doesSupport(cPolymorphic *obj)
{
    return dynamic_cast<cKSplit *>(obj)!=NULL;
}

const char *cKSplitDescriptor::getProperty(const char *propertyname)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int cKSplitDescriptor::getFieldCount(void *object)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 0+basedesc->getFieldCount(object) : 0;
}

unsigned int cKSplitDescriptor::getFieldTypeFlags(void *object, int field)
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

const char *cKSplitDescriptor::getFieldName(void *object, int field)
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

const char *cKSplitDescriptor::getFieldTypeString(void *object, int field)
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

const char *cKSplitDescriptor::getFieldProperty(void *object, int field, const char *propertyname)
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

int cKSplitDescriptor::getArraySize(void *object, int field)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    cKSplit *pp _MAYBEUNUSED = (cKSplit *)object;
    switch (field) {
        default: return 0;
    }
}

bool cKSplitDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    cKSplit *pp _MAYBEUNUSED = (cKSplit *)object;
    switch (field) {
        default: return false;
    }
}

bool cKSplitDescriptor::setFieldAsString(void *object, int field, int i, const char *value)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    cKSplit *pp _MAYBEUNUSED = (cKSplit *)object;
    switch (field) {
        default: return false;
    }
}

const char *cKSplitDescriptor::getFieldStructName(void *object, int field)
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

void *cKSplitDescriptor::getFieldStructPointer(void *object, int field, int i)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    cKSplit *pp _MAYBEUNUSED = (cKSplit *)object;
    switch (field) {
        default: return NULL;
    }
}

class cPSquareDescriptor : public cClassDescriptor
{
  public:
    cPSquareDescriptor();
    virtual ~cPSquareDescriptor();

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

Register_ClassDescriptor(cPSquareDescriptor);

cPSquareDescriptor::cPSquareDescriptor() : cClassDescriptor("cPSquare", "cDensityEstBase")
{
}

cPSquareDescriptor::~cPSquareDescriptor()
{
}

bool cPSquareDescriptor::doesSupport(cPolymorphic *obj)
{
    return dynamic_cast<cPSquare *>(obj)!=NULL;
}

const char *cPSquareDescriptor::getProperty(const char *propertyname)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int cPSquareDescriptor::getFieldCount(void *object)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 0+basedesc->getFieldCount(object) : 0;
}

unsigned int cPSquareDescriptor::getFieldTypeFlags(void *object, int field)
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

const char *cPSquareDescriptor::getFieldName(void *object, int field)
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

const char *cPSquareDescriptor::getFieldTypeString(void *object, int field)
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

const char *cPSquareDescriptor::getFieldProperty(void *object, int field, const char *propertyname)
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

int cPSquareDescriptor::getArraySize(void *object, int field)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    cPSquare *pp _MAYBEUNUSED = (cPSquare *)object;
    switch (field) {
        default: return 0;
    }
}

bool cPSquareDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    cPSquare *pp _MAYBEUNUSED = (cPSquare *)object;
    switch (field) {
        default: return false;
    }
}

bool cPSquareDescriptor::setFieldAsString(void *object, int field, int i, const char *value)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    cPSquare *pp _MAYBEUNUSED = (cPSquare *)object;
    switch (field) {
        default: return false;
    }
}

const char *cPSquareDescriptor::getFieldStructName(void *object, int field)
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

void *cPSquareDescriptor::getFieldStructPointer(void *object, int field, int i)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    cPSquare *pp _MAYBEUNUSED = (cPSquare *)object;
    switch (field) {
        default: return NULL;
    }
}

class cTransientDetectionDescriptor : public cClassDescriptor
{
  public:
    cTransientDetectionDescriptor();
    virtual ~cTransientDetectionDescriptor();

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

Register_ClassDescriptor(cTransientDetectionDescriptor);

cTransientDetectionDescriptor::cTransientDetectionDescriptor() : cClassDescriptor("cTransientDetection", "cObject")
{
}

cTransientDetectionDescriptor::~cTransientDetectionDescriptor()
{
}

bool cTransientDetectionDescriptor::doesSupport(cPolymorphic *obj)
{
    return dynamic_cast<cTransientDetection *>(obj)!=NULL;
}

const char *cTransientDetectionDescriptor::getProperty(const char *propertyname)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int cTransientDetectionDescriptor::getFieldCount(void *object)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 0+basedesc->getFieldCount(object) : 0;
}

unsigned int cTransientDetectionDescriptor::getFieldTypeFlags(void *object, int field)
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

const char *cTransientDetectionDescriptor::getFieldName(void *object, int field)
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

const char *cTransientDetectionDescriptor::getFieldTypeString(void *object, int field)
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

const char *cTransientDetectionDescriptor::getFieldProperty(void *object, int field, const char *propertyname)
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

int cTransientDetectionDescriptor::getArraySize(void *object, int field)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    cTransientDetection *pp _MAYBEUNUSED = (cTransientDetection *)object;
    switch (field) {
        default: return 0;
    }
}

bool cTransientDetectionDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    cTransientDetection *pp _MAYBEUNUSED = (cTransientDetection *)object;
    switch (field) {
        default: return false;
    }
}

bool cTransientDetectionDescriptor::setFieldAsString(void *object, int field, int i, const char *value)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    cTransientDetection *pp _MAYBEUNUSED = (cTransientDetection *)object;
    switch (field) {
        default: return false;
    }
}

const char *cTransientDetectionDescriptor::getFieldStructName(void *object, int field)
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

void *cTransientDetectionDescriptor::getFieldStructPointer(void *object, int field, int i)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    cTransientDetection *pp _MAYBEUNUSED = (cTransientDetection *)object;
    switch (field) {
        default: return NULL;
    }
}

class cAccuracyDetectionDescriptor : public cClassDescriptor
{
  public:
    cAccuracyDetectionDescriptor();
    virtual ~cAccuracyDetectionDescriptor();

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

Register_ClassDescriptor(cAccuracyDetectionDescriptor);

cAccuracyDetectionDescriptor::cAccuracyDetectionDescriptor() : cClassDescriptor("cAccuracyDetection", "cObject")
{
}

cAccuracyDetectionDescriptor::~cAccuracyDetectionDescriptor()
{
}

bool cAccuracyDetectionDescriptor::doesSupport(cPolymorphic *obj)
{
    return dynamic_cast<cAccuracyDetection *>(obj)!=NULL;
}

const char *cAccuracyDetectionDescriptor::getProperty(const char *propertyname)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int cAccuracyDetectionDescriptor::getFieldCount(void *object)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 0+basedesc->getFieldCount(object) : 0;
}

unsigned int cAccuracyDetectionDescriptor::getFieldTypeFlags(void *object, int field)
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

const char *cAccuracyDetectionDescriptor::getFieldName(void *object, int field)
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

const char *cAccuracyDetectionDescriptor::getFieldTypeString(void *object, int field)
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

const char *cAccuracyDetectionDescriptor::getFieldProperty(void *object, int field, const char *propertyname)
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

int cAccuracyDetectionDescriptor::getArraySize(void *object, int field)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    cAccuracyDetection *pp _MAYBEUNUSED = (cAccuracyDetection *)object;
    switch (field) {
        default: return 0;
    }
}

bool cAccuracyDetectionDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    cAccuracyDetection *pp _MAYBEUNUSED = (cAccuracyDetection *)object;
    switch (field) {
        default: return false;
    }
}

bool cAccuracyDetectionDescriptor::setFieldAsString(void *object, int field, int i, const char *value)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    cAccuracyDetection *pp _MAYBEUNUSED = (cAccuracyDetection *)object;
    switch (field) {
        default: return false;
    }
}

const char *cAccuracyDetectionDescriptor::getFieldStructName(void *object, int field)
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

void *cAccuracyDetectionDescriptor::getFieldStructPointer(void *object, int field, int i)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    cAccuracyDetection *pp _MAYBEUNUSED = (cAccuracyDetection *)object;
    switch (field) {
        default: return NULL;
    }
}

class cTDExpandingWindowsDescriptor : public cClassDescriptor
{
  public:
    cTDExpandingWindowsDescriptor();
    virtual ~cTDExpandingWindowsDescriptor();

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

Register_ClassDescriptor(cTDExpandingWindowsDescriptor);

cTDExpandingWindowsDescriptor::cTDExpandingWindowsDescriptor() : cClassDescriptor("cTDExpandingWindows", "cTransientDetection")
{
}

cTDExpandingWindowsDescriptor::~cTDExpandingWindowsDescriptor()
{
}

bool cTDExpandingWindowsDescriptor::doesSupport(cPolymorphic *obj)
{
    return dynamic_cast<cTDExpandingWindows *>(obj)!=NULL;
}

const char *cTDExpandingWindowsDescriptor::getProperty(const char *propertyname)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int cTDExpandingWindowsDescriptor::getFieldCount(void *object)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 0+basedesc->getFieldCount(object) : 0;
}

unsigned int cTDExpandingWindowsDescriptor::getFieldTypeFlags(void *object, int field)
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

const char *cTDExpandingWindowsDescriptor::getFieldName(void *object, int field)
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

const char *cTDExpandingWindowsDescriptor::getFieldTypeString(void *object, int field)
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

const char *cTDExpandingWindowsDescriptor::getFieldProperty(void *object, int field, const char *propertyname)
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

int cTDExpandingWindowsDescriptor::getArraySize(void *object, int field)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    cTDExpandingWindows *pp _MAYBEUNUSED = (cTDExpandingWindows *)object;
    switch (field) {
        default: return 0;
    }
}

bool cTDExpandingWindowsDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    cTDExpandingWindows *pp _MAYBEUNUSED = (cTDExpandingWindows *)object;
    switch (field) {
        default: return false;
    }
}

bool cTDExpandingWindowsDescriptor::setFieldAsString(void *object, int field, int i, const char *value)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    cTDExpandingWindows *pp _MAYBEUNUSED = (cTDExpandingWindows *)object;
    switch (field) {
        default: return false;
    }
}

const char *cTDExpandingWindowsDescriptor::getFieldStructName(void *object, int field)
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

void *cTDExpandingWindowsDescriptor::getFieldStructPointer(void *object, int field, int i)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    cTDExpandingWindows *pp _MAYBEUNUSED = (cTDExpandingWindows *)object;
    switch (field) {
        default: return NULL;
    }
}

class cADByStddevDescriptor : public cClassDescriptor
{
  public:
    cADByStddevDescriptor();
    virtual ~cADByStddevDescriptor();

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

Register_ClassDescriptor(cADByStddevDescriptor);

cADByStddevDescriptor::cADByStddevDescriptor() : cClassDescriptor("cADByStddev", "cAccuracyDetection")
{
}

cADByStddevDescriptor::~cADByStddevDescriptor()
{
}

bool cADByStddevDescriptor::doesSupport(cPolymorphic *obj)
{
    return dynamic_cast<cADByStddev *>(obj)!=NULL;
}

const char *cADByStddevDescriptor::getProperty(const char *propertyname)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int cADByStddevDescriptor::getFieldCount(void *object)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 0+basedesc->getFieldCount(object) : 0;
}

unsigned int cADByStddevDescriptor::getFieldTypeFlags(void *object, int field)
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

const char *cADByStddevDescriptor::getFieldName(void *object, int field)
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

const char *cADByStddevDescriptor::getFieldTypeString(void *object, int field)
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

const char *cADByStddevDescriptor::getFieldProperty(void *object, int field, const char *propertyname)
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

int cADByStddevDescriptor::getArraySize(void *object, int field)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    cADByStddev *pp _MAYBEUNUSED = (cADByStddev *)object;
    switch (field) {
        default: return 0;
    }
}

bool cADByStddevDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    cADByStddev *pp _MAYBEUNUSED = (cADByStddev *)object;
    switch (field) {
        default: return false;
    }
}

bool cADByStddevDescriptor::setFieldAsString(void *object, int field, int i, const char *value)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    cADByStddev *pp _MAYBEUNUSED = (cADByStddev *)object;
    switch (field) {
        default: return false;
    }
}

const char *cADByStddevDescriptor::getFieldStructName(void *object, int field)
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

void *cADByStddevDescriptor::getFieldStructPointer(void *object, int field, int i)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    cADByStddev *pp _MAYBEUNUSED = (cADByStddev *)object;
    switch (field) {
        default: return NULL;
    }
}

class cFSMDescriptor : public cClassDescriptor
{
  public:
    cFSMDescriptor();
    virtual ~cFSMDescriptor();

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

Register_ClassDescriptor(cFSMDescriptor);

cFSMDescriptor::cFSMDescriptor() : cClassDescriptor("cFSM", "cObject")
{
}

cFSMDescriptor::~cFSMDescriptor()
{
}

bool cFSMDescriptor::doesSupport(cPolymorphic *obj)
{
    return dynamic_cast<cFSM *>(obj)!=NULL;
}

const char *cFSMDescriptor::getProperty(const char *propertyname)
{
    if (!strcmp(propertyname,"omitGetVerb")) return "true";
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int cFSMDescriptor::getFieldCount(void *object)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 2+basedesc->getFieldCount(object) : 2;
}

unsigned int cFSMDescriptor::getFieldTypeFlags(void *object, int field)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return 0;
        case 1: return 0;
        default: return 0;
    }
}

const char *cFSMDescriptor::getFieldName(void *object, int field)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "state";
        case 1: return "stateName";
        default: return NULL;
    }
}

const char *cFSMDescriptor::getFieldTypeString(void *object, int field)
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

const char *cFSMDescriptor::getFieldProperty(void *object, int field, const char *propertyname)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0:
            if (!strcmp(propertyname,"hint")) return "numeric code of the state the FSM is currently in";
            return NULL;
        case 1:
            if (!strcmp(propertyname,"hint")) return "name of the current FSM state";
            return NULL;
        default: return NULL;
    }
}

int cFSMDescriptor::getArraySize(void *object, int field)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    cFSM *pp _MAYBEUNUSED = (cFSM *)object;
    switch (field) {
        default: return 0;
    }
}

bool cFSMDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    cFSM *pp _MAYBEUNUSED = (cFSM *)object;
    switch (field) {
        case 0: long2string(pp->state(),resultbuf,bufsize); return true;
        case 1: oppstring2string(pp->stateName(),resultbuf,bufsize); return true;
        default: return false;
    }
}

bool cFSMDescriptor::setFieldAsString(void *object, int field, int i, const char *value)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    cFSM *pp _MAYBEUNUSED = (cFSM *)object;
    switch (field) {
        default: return false;
    }
}

const char *cFSMDescriptor::getFieldStructName(void *object, int field)
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

void *cFSMDescriptor::getFieldStructPointer(void *object, int field, int i)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    cFSM *pp _MAYBEUNUSED = (cFSM *)object;
    switch (field) {
        default: return NULL;
    }
}

class cFunctionTypeDescriptor : public cClassDescriptor
{
  public:
    cFunctionTypeDescriptor();
    virtual ~cFunctionTypeDescriptor();

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

Register_ClassDescriptor(cFunctionTypeDescriptor);

cFunctionTypeDescriptor::cFunctionTypeDescriptor() : cClassDescriptor("cFunctionType", "cObject")
{
}

cFunctionTypeDescriptor::~cFunctionTypeDescriptor()
{
}

bool cFunctionTypeDescriptor::doesSupport(cPolymorphic *obj)
{
    return dynamic_cast<cFunctionType *>(obj)!=NULL;
}

const char *cFunctionTypeDescriptor::getProperty(const char *propertyname)
{
    if (!strcmp(propertyname,"omitGetVerb")) return "true";
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int cFunctionTypeDescriptor::getFieldCount(void *object)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 1+basedesc->getFieldCount(object) : 1;
}

unsigned int cFunctionTypeDescriptor::getFieldTypeFlags(void *object, int field)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return 0;
        default: return 0;
    }
}

const char *cFunctionTypeDescriptor::getFieldName(void *object, int field)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "argCount";
        default: return NULL;
    }
}

const char *cFunctionTypeDescriptor::getFieldTypeString(void *object, int field)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "int";
        default: return NULL;
    }
}

const char *cFunctionTypeDescriptor::getFieldProperty(void *object, int field, const char *propertyname)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0:
            if (!strcmp(propertyname,"hint")) return "number of \"double\" parameters this function takes";
            return NULL;
        default: return NULL;
    }
}

int cFunctionTypeDescriptor::getArraySize(void *object, int field)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    cFunctionType *pp _MAYBEUNUSED = (cFunctionType *)object;
    switch (field) {
        default: return 0;
    }
}

bool cFunctionTypeDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    cFunctionType *pp _MAYBEUNUSED = (cFunctionType *)object;
    switch (field) {
        case 0: long2string(pp->argCount(),resultbuf,bufsize); return true;
        default: return false;
    }
}

bool cFunctionTypeDescriptor::setFieldAsString(void *object, int field, int i, const char *value)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    cFunctionType *pp _MAYBEUNUSED = (cFunctionType *)object;
    switch (field) {
        default: return false;
    }
}

const char *cFunctionTypeDescriptor::getFieldStructName(void *object, int field)
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

void *cFunctionTypeDescriptor::getFieldStructPointer(void *object, int field, int i)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    cFunctionType *pp _MAYBEUNUSED = (cFunctionType *)object;
    switch (field) {
        default: return NULL;
    }
}

class cOutVectorDescriptor : public cClassDescriptor
{
  public:
    cOutVectorDescriptor();
    virtual ~cOutVectorDescriptor();

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

Register_ClassDescriptor(cOutVectorDescriptor);

cOutVectorDescriptor::cOutVectorDescriptor() : cClassDescriptor("cOutVector", "cObject")
{
}

cOutVectorDescriptor::~cOutVectorDescriptor()
{
}

bool cOutVectorDescriptor::doesSupport(cPolymorphic *obj)
{
    return dynamic_cast<cOutVector *>(obj)!=NULL;
}

const char *cOutVectorDescriptor::getProperty(const char *propertyname)
{
    if (!strcmp(propertyname,"omitGetVerb")) return "true";
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int cOutVectorDescriptor::getFieldCount(void *object)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 3+basedesc->getFieldCount(object) : 3;
}

unsigned int cOutVectorDescriptor::getFieldTypeFlags(void *object, int field)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return FD_ISEDITABLE;
        case 1: return 0;
        case 2: return 0;
        default: return 0;
    }
}

const char *cOutVectorDescriptor::getFieldName(void *object, int field)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "isEnabled";
        case 1: return "valuesReceived";
        case 2: return "valuesStored";
        default: return NULL;
    }
}

const char *cOutVectorDescriptor::getFieldTypeString(void *object, int field)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "bool";
        case 1: return "long";
        case 2: return "long";
        default: return NULL;
    }
}

const char *cOutVectorDescriptor::getFieldProperty(void *object, int field, const char *propertyname)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0:
            if (!strcmp(propertyname,"setter")) return "setEnabled";
            if (!strcmp(propertyname,"hint")) return "if disabled, values passed to this object to record are simply discarded";
            if (!strcmp(propertyname,"editable")) return "true";
            return NULL;
        case 1:
            if (!strcmp(propertyname,"hint")) return "number of values passed to this object to record";
            return NULL;
        case 2:
            if (!strcmp(propertyname,"hint")) return "number of values actually stored on the disk";
            return NULL;
        default: return NULL;
    }
}

int cOutVectorDescriptor::getArraySize(void *object, int field)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    cOutVector *pp _MAYBEUNUSED = (cOutVector *)object;
    switch (field) {
        default: return 0;
    }
}

bool cOutVectorDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    cOutVector *pp _MAYBEUNUSED = (cOutVector *)object;
    switch (field) {
        case 0: bool2string(pp->isEnabled(),resultbuf,bufsize); return true;
        case 1: long2string(pp->valuesReceived(),resultbuf,bufsize); return true;
        case 2: long2string(pp->valuesStored(),resultbuf,bufsize); return true;
        default: return false;
    }
}

bool cOutVectorDescriptor::setFieldAsString(void *object, int field, int i, const char *value)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    cOutVector *pp _MAYBEUNUSED = (cOutVector *)object;
    switch (field) {
        case 0: pp->setEnabled(string2bool(value)); return true;
        default: return false;
    }
}

const char *cOutVectorDescriptor::getFieldStructName(void *object, int field)
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

void *cOutVectorDescriptor::getFieldStructPointer(void *object, int field, int i)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    cOutVector *pp _MAYBEUNUSED = (cOutVector *)object;
    switch (field) {
        default: return NULL;
    }
}

class cParDescriptor : public cClassDescriptor
{
  public:
    cParDescriptor();
    virtual ~cParDescriptor();

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

Register_ClassDescriptor(cParDescriptor);

cParDescriptor::cParDescriptor() : cClassDescriptor("cPar", "cObject")
{
}

cParDescriptor::~cParDescriptor()
{
}

bool cParDescriptor::doesSupport(cPolymorphic *obj)
{
    return dynamic_cast<cPar *>(obj)!=NULL;
}

const char *cParDescriptor::getProperty(const char *propertyname)
{
    if (!strcmp(propertyname,"omitGetVerb")) return "true";
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int cParDescriptor::getFieldCount(void *object)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 7+basedesc->getFieldCount(object) : 7;
}

unsigned int cParDescriptor::getFieldTypeFlags(void *object, int field)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return FD_ISEDITABLE;
        case 1: return 0;
        case 2: return FD_ISEDITABLE;
        case 3: return 0;
        case 4: return 0;
        case 5: return FD_ISEDITABLE;
        case 6: return 0;
        default: return 0;
    }
}

const char *cParDescriptor::getFieldName(void *object, int field)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "value";
        case 1: return "type";
        case 2: return "prompt";
        case 3: return "isNumeric";
        case 4: return "isConstant";
        case 5: return "isInput";
        case 6: return "isRedirected";
        default: return NULL;
    }
}

const char *cParDescriptor::getFieldTypeString(void *object, int field)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "string";
        case 1: return "char";
        case 2: return "string";
        case 3: return "bool";
        case 4: return "bool";
        case 5: return "bool";
        case 6: return "bool";
        default: return NULL;
    }
}

const char *cParDescriptor::getFieldProperty(void *object, int field, const char *propertyname)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0:
            if (!strcmp(propertyname,"getter")) return "getAsText";
            if (!strcmp(propertyname,"editable")) return "true";
            if (!strcmp(propertyname,"setter")) return "setFromText";
            if (!strcmp(propertyname,"hint")) return "parameter value";
            return NULL;
        case 1:
            if (!strcmp(propertyname,"enum")) return "cPar_Type";
            if (!strcmp(propertyname,"hint")) return "parameter type";
            return NULL;
        case 2:
            if (!strcmp(propertyname,"hint")) return "displayed when an input parameter is to be entered by the user";
            if (!strcmp(propertyname,"editable")) return "true";
            return NULL;
        case 3:
            if (!strcmp(propertyname,"group")) return "flags";
            if (!strcmp(propertyname,"hint")) return "whether parameter is of numeric type";
            return NULL;
        case 4:
            if (!strcmp(propertyname,"group")) return "flags";
            if (!strcmp(propertyname,"hint")) return "whether the parameter was declared const";
            return NULL;
        case 5:
            if (!strcmp(propertyname,"editable")) return "true";
            if (!strcmp(propertyname,"group")) return "flags";
            if (!strcmp(propertyname,"setter")) return "setInput";
            if (!strcmp(propertyname,"hint")) return "whether parameter value is to be read from omnetpp.ini or from the user";
            return NULL;
        case 6:
            if (!strcmp(propertyname,"hint")) return "whether this parameter is a \"link\" to another cPar object";
            if (!strcmp(propertyname,"group")) return "flags";
            return NULL;
        default: return NULL;
    }
}

int cParDescriptor::getArraySize(void *object, int field)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    cPar *pp _MAYBEUNUSED = (cPar *)object;
    switch (field) {
        default: return 0;
    }
}

bool cParDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    cPar *pp _MAYBEUNUSED = (cPar *)object;
    switch (field) {
        case 0: oppstring2string(pp->getAsText(),resultbuf,bufsize); return true;
        case 1: long2string(pp->type(),resultbuf,bufsize); return true;
        case 2: oppstring2string(pp->prompt(),resultbuf,bufsize); return true;
        case 3: bool2string(pp->isNumeric(),resultbuf,bufsize); return true;
        case 4: bool2string(pp->isConstant(),resultbuf,bufsize); return true;
        case 5: bool2string(pp->isInput(),resultbuf,bufsize); return true;
        case 6: bool2string(pp->isRedirected(),resultbuf,bufsize); return true;
        default: return false;
    }
}

bool cParDescriptor::setFieldAsString(void *object, int field, int i, const char *value)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    cPar *pp _MAYBEUNUSED = (cPar *)object;
    switch (field) {
        case 0: pp->setFromText((value)); return true;
        case 2: pp->setPrompt((value)); return true;
        case 5: pp->setInput(string2bool(value)); return true;
        default: return false;
    }
}

const char *cParDescriptor::getFieldStructName(void *object, int field)
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

void *cParDescriptor::getFieldStructPointer(void *object, int field, int i)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    cPar *pp _MAYBEUNUSED = (cPar *)object;
    switch (field) {
        default: return NULL;
    }
}

class cLinkedListDescriptor : public cClassDescriptor
{
  public:
    cLinkedListDescriptor();
    virtual ~cLinkedListDescriptor();

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

Register_ClassDescriptor(cLinkedListDescriptor);

cLinkedListDescriptor::cLinkedListDescriptor() : cClassDescriptor("cLinkedList", "cObject")
{
}

cLinkedListDescriptor::~cLinkedListDescriptor()
{
}

bool cLinkedListDescriptor::doesSupport(cPolymorphic *obj)
{
    return dynamic_cast<cLinkedList *>(obj)!=NULL;
}

const char *cLinkedListDescriptor::getProperty(const char *propertyname)
{
    if (!strcmp(propertyname,"omitGetVerb")) return "true";
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int cLinkedListDescriptor::getFieldCount(void *object)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 1+basedesc->getFieldCount(object) : 1;
}

unsigned int cLinkedListDescriptor::getFieldTypeFlags(void *object, int field)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return 0;
        default: return 0;
    }
}

const char *cLinkedListDescriptor::getFieldName(void *object, int field)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "length";
        default: return NULL;
    }
}

const char *cLinkedListDescriptor::getFieldTypeString(void *object, int field)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "int";
        default: return NULL;
    }
}

const char *cLinkedListDescriptor::getFieldProperty(void *object, int field, const char *propertyname)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0:
            if (!strcmp(propertyname,"hint")) return "number of items contained";
            return NULL;
        default: return NULL;
    }
}

int cLinkedListDescriptor::getArraySize(void *object, int field)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    cLinkedList *pp _MAYBEUNUSED = (cLinkedList *)object;
    switch (field) {
        default: return 0;
    }
}

bool cLinkedListDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    cLinkedList *pp _MAYBEUNUSED = (cLinkedList *)object;
    switch (field) {
        case 0: long2string(pp->length(),resultbuf,bufsize); return true;
        default: return false;
    }
}

bool cLinkedListDescriptor::setFieldAsString(void *object, int field, int i, const char *value)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    cLinkedList *pp _MAYBEUNUSED = (cLinkedList *)object;
    switch (field) {
        default: return false;
    }
}

const char *cLinkedListDescriptor::getFieldStructName(void *object, int field)
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

void *cLinkedListDescriptor::getFieldStructPointer(void *object, int field, int i)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    cLinkedList *pp _MAYBEUNUSED = (cLinkedList *)object;
    switch (field) {
        default: return NULL;
    }
}

class cMessageHeapDescriptor : public cClassDescriptor
{
  public:
    cMessageHeapDescriptor();
    virtual ~cMessageHeapDescriptor();

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

Register_ClassDescriptor(cMessageHeapDescriptor);

cMessageHeapDescriptor::cMessageHeapDescriptor() : cClassDescriptor("cMessageHeap", "cObject")
{
}

cMessageHeapDescriptor::~cMessageHeapDescriptor()
{
}

bool cMessageHeapDescriptor::doesSupport(cPolymorphic *obj)
{
    return dynamic_cast<cMessageHeap *>(obj)!=NULL;
}

const char *cMessageHeapDescriptor::getProperty(const char *propertyname)
{
    if (!strcmp(propertyname,"omitGetVerb")) return "true";
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int cMessageHeapDescriptor::getFieldCount(void *object)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 2+basedesc->getFieldCount(object) : 2;
}

unsigned int cMessageHeapDescriptor::getFieldTypeFlags(void *object, int field)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return 0;
        case 1: return FD_ISARRAY | FD_ISCOMPOUND | FD_ISPOINTER | FD_ISCPOLYMORPHIC | FD_ISCOBJECT;
        default: return 0;
    }
}

const char *cMessageHeapDescriptor::getFieldName(void *object, int field)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "length";
        case 1: return "messages";
        default: return NULL;
    }
}

const char *cMessageHeapDescriptor::getFieldTypeString(void *object, int field)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "int";
        case 1: return "cMessage";
        default: return NULL;
    }
}

const char *cMessageHeapDescriptor::getFieldProperty(void *object, int field, const char *propertyname)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0:
            if (!strcmp(propertyname,"hint")) return "number of items contained";
            return NULL;
        case 1:
            if (!strcmp(propertyname,"hint")) return "self-messages currently scheduled and messages currently in transit";
            if (!strcmp(propertyname,"getter")) return "peek";
            if (!strcmp(propertyname,"sizeGetter")) return "length";
            return NULL;
        default: return NULL;
    }
}

int cMessageHeapDescriptor::getArraySize(void *object, int field)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    cMessageHeap *pp _MAYBEUNUSED = (cMessageHeap *)object;
    switch (field) {
        case 1: return pp->length();
        default: return 0;
    }
}

bool cMessageHeapDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    cMessageHeap *pp _MAYBEUNUSED = (cMessageHeap *)object;
    switch (field) {
        case 0: long2string(pp->length(),resultbuf,bufsize); return true;
        case 1: {std::stringstream out; out << pp->peek(i); opp_strprettytrunc(resultbuf,out.str().c_str(),bufsize-1); return true;}
        default: return false;
    }
}

bool cMessageHeapDescriptor::setFieldAsString(void *object, int field, int i, const char *value)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    cMessageHeap *pp _MAYBEUNUSED = (cMessageHeap *)object;
    switch (field) {
        default: return false;
    }
}

const char *cMessageHeapDescriptor::getFieldStructName(void *object, int field)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 1: return "cMessage"; break;
        default: return NULL;
    }
}

void *cMessageHeapDescriptor::getFieldStructPointer(void *object, int field, int i)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    cMessageHeap *pp _MAYBEUNUSED = (cMessageHeap *)object;
    switch (field) {
        case 1: return (void *)static_cast<cPolymorphic *>(pp->peek(i)); break;
        default: return NULL;
    }
}

class cQueueDescriptor : public cClassDescriptor
{
  public:
    cQueueDescriptor();
    virtual ~cQueueDescriptor();

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

Register_ClassDescriptor(cQueueDescriptor);

cQueueDescriptor::cQueueDescriptor() : cClassDescriptor("cQueue", "cObject")
{
}

cQueueDescriptor::~cQueueDescriptor()
{
}

bool cQueueDescriptor::doesSupport(cPolymorphic *obj)
{
    return dynamic_cast<cQueue *>(obj)!=NULL;
}

const char *cQueueDescriptor::getProperty(const char *propertyname)
{
    if (!strcmp(propertyname,"omitGetVerb")) return "true";
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int cQueueDescriptor::getFieldCount(void *object)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 3+basedesc->getFieldCount(object) : 3;
}

unsigned int cQueueDescriptor::getFieldTypeFlags(void *object, int field)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return FD_ISEDITABLE;
        case 1: return 0;
        case 2: return FD_ISARRAY | FD_ISCOMPOUND | FD_ISPOINTER | FD_ISCPOLYMORPHIC | FD_ISCOBJECT;
        default: return 0;
    }
}

const char *cQueueDescriptor::getFieldName(void *object, int field)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "takeOwnership";
        case 1: return "length";
        case 2: return "contents";
        default: return NULL;
    }
}

const char *cQueueDescriptor::getFieldTypeString(void *object, int field)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "bool";
        case 1: return "int";
        case 2: return "cObject";
        default: return NULL;
    }
}

const char *cQueueDescriptor::getFieldProperty(void *object, int field, const char *propertyname)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0:
            if (!strcmp(propertyname,"hint")) return "whether the queue should own the objects inserted into it";
            if (!strcmp(propertyname,"setter")) return "takeOwnership";
            if (!strcmp(propertyname,"group")) return "general";
            if (!strcmp(propertyname,"editable")) return "true";
            return NULL;
        case 1:
            if (!strcmp(propertyname,"hint")) return "number of items in the queue";
            return NULL;
        case 2:
            if (!strcmp(propertyname,"hint")) return "queue contents";
            if (!strcmp(propertyname,"sizeGetter")) return "length";
            if (!strcmp(propertyname,"getter")) return "get";
            return NULL;
        default: return NULL;
    }
}

int cQueueDescriptor::getArraySize(void *object, int field)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    cQueue *pp _MAYBEUNUSED = (cQueue *)object;
    switch (field) {
        case 2: return pp->length();
        default: return 0;
    }
}

bool cQueueDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    cQueue *pp _MAYBEUNUSED = (cQueue *)object;
    switch (field) {
        case 0: bool2string(pp->takeOwnership(),resultbuf,bufsize); return true;
        case 1: long2string(pp->length(),resultbuf,bufsize); return true;
        case 2: {std::stringstream out; out << pp->get(i); opp_strprettytrunc(resultbuf,out.str().c_str(),bufsize-1); return true;}
        default: return false;
    }
}

bool cQueueDescriptor::setFieldAsString(void *object, int field, int i, const char *value)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    cQueue *pp _MAYBEUNUSED = (cQueue *)object;
    switch (field) {
        case 0: pp->takeOwnership(string2bool(value)); return true;
        default: return false;
    }
}

const char *cQueueDescriptor::getFieldStructName(void *object, int field)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 2: return "cObject"; break;
        default: return NULL;
    }
}

void *cQueueDescriptor::getFieldStructPointer(void *object, int field, int i)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    cQueue *pp _MAYBEUNUSED = (cQueue *)object;
    switch (field) {
        case 2: return (void *)static_cast<cPolymorphic *>(pp->get(i)); break;
        default: return NULL;
    }
}

class cSimulationDescriptor : public cClassDescriptor
{
  public:
    cSimulationDescriptor();
    virtual ~cSimulationDescriptor();

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

Register_ClassDescriptor(cSimulationDescriptor);

cSimulationDescriptor::cSimulationDescriptor() : cClassDescriptor("cSimulation", "cObject")
{
}

cSimulationDescriptor::~cSimulationDescriptor()
{
}

bool cSimulationDescriptor::doesSupport(cPolymorphic *obj)
{
    return dynamic_cast<cSimulation *>(obj)!=NULL;
}

const char *cSimulationDescriptor::getProperty(const char *propertyname)
{
    if (!strcmp(propertyname,"omitGetVerb")) return "true";
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int cSimulationDescriptor::getFieldCount(void *object)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 7+basedesc->getFieldCount(object) : 7;
}

unsigned int cSimulationDescriptor::getFieldTypeFlags(void *object, int field)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return 0;
        case 1: return 0;
        case 2: return 0;
        case 3: return FD_ISCOMPOUND | FD_ISCPOLYMORPHIC | FD_ISCOBJECT;
        case 4: return 0;
        case 5: return FD_ISCOMPOUND | FD_ISPOINTER | FD_ISCPOLYMORPHIC | FD_ISCOBJECT;
        case 6: return FD_ISARRAY | FD_ISCOMPOUND | FD_ISPOINTER | FD_ISCPOLYMORPHIC | FD_ISCOBJECT;
        default: return 0;
    }
}

const char *cSimulationDescriptor::getFieldName(void *object, int field)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "runNumber";
        case 1: return "simTime";
        case 2: return "eventNumber";
        case 3: return "messageQueue";
        case 4: return "lastModuleId";
        case 5: return "systemModule";
        case 6: return "module";
        default: return NULL;
    }
}

const char *cSimulationDescriptor::getFieldTypeString(void *object, int field)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "int";
        case 1: return "simtime_t";
        case 2: return "long";
        case 3: return "cMessageHeap";
        case 4: return "int";
        case 5: return "cModule";
        case 6: return "cModule";
        default: return NULL;
    }
}

const char *cSimulationDescriptor::getFieldProperty(void *object, int field, const char *propertyname)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0:
            if (!strcmp(propertyname,"hint")) return "identifies the [Run X] section selected in omnetpp.ini";
            return NULL;
        case 1:
            if (!strcmp(propertyname,"hint")) return "the current simulation time in seconds";
            return NULL;
        case 2:
            if (!strcmp(propertyname,"hint")) return "the current event number -- counts from 0 up";
            return NULL;
        case 3:
            if (!strcmp(propertyname,"hint")) return "self-messages scheduled, and messages in transit";
            if (!strcmp(propertyname,"label")) return "futureEvents";
            return NULL;
        case 4:
            if (!strcmp(propertyname,"hint")) return "the largest module ID issued so far";
            if (!strcmp(propertyname,"group")) return "modules";
            return NULL;
        case 5:
            if (!strcmp(propertyname,"hint")) return "the top-level module";
            if (!strcmp(propertyname,"group")) return "modules";
            return NULL;
        case 6:
            if (!strcmp(propertyname,"label")) return "modules";
            if (!strcmp(propertyname,"group")) return "modules";
            if (!strcmp(propertyname,"hint")) return "list of modules, indexed with module ID";
            if (!strcmp(propertyname,"sizeGetter")) return "lastModuleId";
            return NULL;
        default: return NULL;
    }
}

int cSimulationDescriptor::getArraySize(void *object, int field)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    cSimulation *pp _MAYBEUNUSED = (cSimulation *)object;
    switch (field) {
        case 6: return pp->lastModuleId();
        default: return 0;
    }
}

bool cSimulationDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    cSimulation *pp _MAYBEUNUSED = (cSimulation *)object;
    switch (field) {
        case 0: long2string(pp->runNumber(),resultbuf,bufsize); return true;
        case 1: double2string(pp->simTime(),resultbuf,bufsize); return true;
        case 2: long2string(pp->eventNumber(),resultbuf,bufsize); return true;
        case 3: {std::stringstream out; out << pp->messageQueue(); opp_strprettytrunc(resultbuf,out.str().c_str(),bufsize-1); return true;}
        case 4: long2string(pp->lastModuleId(),resultbuf,bufsize); return true;
        case 5: {std::stringstream out; out << pp->systemModule(); opp_strprettytrunc(resultbuf,out.str().c_str(),bufsize-1); return true;}
        case 6: {std::stringstream out; out << pp->module(i); opp_strprettytrunc(resultbuf,out.str().c_str(),bufsize-1); return true;}
        default: return false;
    }
}

bool cSimulationDescriptor::setFieldAsString(void *object, int field, int i, const char *value)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    cSimulation *pp _MAYBEUNUSED = (cSimulation *)object;
    switch (field) {
        default: return false;
    }
}

const char *cSimulationDescriptor::getFieldStructName(void *object, int field)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 3: return "cMessageHeap"; break;
        case 5: return "cModule"; break;
        case 6: return "cModule"; break;
        default: return NULL;
    }
}

void *cSimulationDescriptor::getFieldStructPointer(void *object, int field, int i)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    cSimulation *pp _MAYBEUNUSED = (cSimulation *)object;
    switch (field) {
        case 3: return (void *)static_cast<cPolymorphic *>(&pp->messageQueue()); break;
        case 5: return (void *)static_cast<cPolymorphic *>(pp->systemModule()); break;
        case 6: return (void *)static_cast<cPolymorphic *>(pp->module(i)); break;
        default: return NULL;
    }
}

class cSchedulerDescriptor : public cClassDescriptor
{
  public:
    cSchedulerDescriptor();
    virtual ~cSchedulerDescriptor();

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

Register_ClassDescriptor(cSchedulerDescriptor);

cSchedulerDescriptor::cSchedulerDescriptor() : cClassDescriptor("cScheduler", "cPolymorphic")
{
}

cSchedulerDescriptor::~cSchedulerDescriptor()
{
}

bool cSchedulerDescriptor::doesSupport(cPolymorphic *obj)
{
    return dynamic_cast<cScheduler *>(obj)!=NULL;
}

const char *cSchedulerDescriptor::getProperty(const char *propertyname)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int cSchedulerDescriptor::getFieldCount(void *object)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 0+basedesc->getFieldCount(object) : 0;
}

unsigned int cSchedulerDescriptor::getFieldTypeFlags(void *object, int field)
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

const char *cSchedulerDescriptor::getFieldName(void *object, int field)
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

const char *cSchedulerDescriptor::getFieldTypeString(void *object, int field)
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

const char *cSchedulerDescriptor::getFieldProperty(void *object, int field, const char *propertyname)
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

int cSchedulerDescriptor::getArraySize(void *object, int field)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    cScheduler *pp _MAYBEUNUSED = (cScheduler *)object;
    switch (field) {
        default: return 0;
    }
}

bool cSchedulerDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    cScheduler *pp _MAYBEUNUSED = (cScheduler *)object;
    switch (field) {
        default: return false;
    }
}

bool cSchedulerDescriptor::setFieldAsString(void *object, int field, int i, const char *value)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    cScheduler *pp _MAYBEUNUSED = (cScheduler *)object;
    switch (field) {
        default: return false;
    }
}

const char *cSchedulerDescriptor::getFieldStructName(void *object, int field)
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

void *cSchedulerDescriptor::getFieldStructPointer(void *object, int field, int i)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    cScheduler *pp _MAYBEUNUSED = (cScheduler *)object;
    switch (field) {
        default: return NULL;
    }
}

class cSequentialSchedulerDescriptor : public cClassDescriptor
{
  public:
    cSequentialSchedulerDescriptor();
    virtual ~cSequentialSchedulerDescriptor();

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

Register_ClassDescriptor(cSequentialSchedulerDescriptor);

cSequentialSchedulerDescriptor::cSequentialSchedulerDescriptor() : cClassDescriptor("cSequentialScheduler", "cScheduler")
{
}

cSequentialSchedulerDescriptor::~cSequentialSchedulerDescriptor()
{
}

bool cSequentialSchedulerDescriptor::doesSupport(cPolymorphic *obj)
{
    return dynamic_cast<cSequentialScheduler *>(obj)!=NULL;
}

const char *cSequentialSchedulerDescriptor::getProperty(const char *propertyname)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int cSequentialSchedulerDescriptor::getFieldCount(void *object)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 0+basedesc->getFieldCount(object) : 0;
}

unsigned int cSequentialSchedulerDescriptor::getFieldTypeFlags(void *object, int field)
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

const char *cSequentialSchedulerDescriptor::getFieldName(void *object, int field)
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

const char *cSequentialSchedulerDescriptor::getFieldTypeString(void *object, int field)
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

const char *cSequentialSchedulerDescriptor::getFieldProperty(void *object, int field, const char *propertyname)
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

int cSequentialSchedulerDescriptor::getArraySize(void *object, int field)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    cSequentialScheduler *pp _MAYBEUNUSED = (cSequentialScheduler *)object;
    switch (field) {
        default: return 0;
    }
}

bool cSequentialSchedulerDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    cSequentialScheduler *pp _MAYBEUNUSED = (cSequentialScheduler *)object;
    switch (field) {
        default: return false;
    }
}

bool cSequentialSchedulerDescriptor::setFieldAsString(void *object, int field, int i, const char *value)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    cSequentialScheduler *pp _MAYBEUNUSED = (cSequentialScheduler *)object;
    switch (field) {
        default: return false;
    }
}

const char *cSequentialSchedulerDescriptor::getFieldStructName(void *object, int field)
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

void *cSequentialSchedulerDescriptor::getFieldStructPointer(void *object, int field, int i)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    cSequentialScheduler *pp _MAYBEUNUSED = (cSequentialScheduler *)object;
    switch (field) {
        default: return NULL;
    }
}

class cRealTimeSchedulerDescriptor : public cClassDescriptor
{
  public:
    cRealTimeSchedulerDescriptor();
    virtual ~cRealTimeSchedulerDescriptor();

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

Register_ClassDescriptor(cRealTimeSchedulerDescriptor);

cRealTimeSchedulerDescriptor::cRealTimeSchedulerDescriptor() : cClassDescriptor("cRealTimeScheduler", "cScheduler")
{
}

cRealTimeSchedulerDescriptor::~cRealTimeSchedulerDescriptor()
{
}

bool cRealTimeSchedulerDescriptor::doesSupport(cPolymorphic *obj)
{
    return dynamic_cast<cRealTimeScheduler *>(obj)!=NULL;
}

const char *cRealTimeSchedulerDescriptor::getProperty(const char *propertyname)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int cRealTimeSchedulerDescriptor::getFieldCount(void *object)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 0+basedesc->getFieldCount(object) : 0;
}

unsigned int cRealTimeSchedulerDescriptor::getFieldTypeFlags(void *object, int field)
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

const char *cRealTimeSchedulerDescriptor::getFieldName(void *object, int field)
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

const char *cRealTimeSchedulerDescriptor::getFieldTypeString(void *object, int field)
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

const char *cRealTimeSchedulerDescriptor::getFieldProperty(void *object, int field, const char *propertyname)
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

int cRealTimeSchedulerDescriptor::getArraySize(void *object, int field)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    cRealTimeScheduler *pp _MAYBEUNUSED = (cRealTimeScheduler *)object;
    switch (field) {
        default: return 0;
    }
}

bool cRealTimeSchedulerDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    cRealTimeScheduler *pp _MAYBEUNUSED = (cRealTimeScheduler *)object;
    switch (field) {
        default: return false;
    }
}

bool cRealTimeSchedulerDescriptor::setFieldAsString(void *object, int field, int i, const char *value)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    cRealTimeScheduler *pp _MAYBEUNUSED = (cRealTimeScheduler *)object;
    switch (field) {
        default: return false;
    }
}

const char *cRealTimeSchedulerDescriptor::getFieldStructName(void *object, int field)
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

void *cRealTimeSchedulerDescriptor::getFieldStructPointer(void *object, int field, int i)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    cRealTimeScheduler *pp _MAYBEUNUSED = (cRealTimeScheduler *)object;
    switch (field) {
        default: return NULL;
    }
}

class cTopology_NodeDescriptor : public cClassDescriptor
{
  public:
    cTopology_NodeDescriptor();
    virtual ~cTopology_NodeDescriptor();

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

Register_ClassDescriptor(cTopology_NodeDescriptor);

cTopology_NodeDescriptor::cTopology_NodeDescriptor() : cClassDescriptor("cTopology_Node", "cPolymorphic")
{
}

cTopology_NodeDescriptor::~cTopology_NodeDescriptor()
{
}

bool cTopology_NodeDescriptor::doesSupport(cPolymorphic *obj)
{
    return dynamic_cast<cTopology_Node *>(obj)!=NULL;
}

const char *cTopology_NodeDescriptor::getProperty(const char *propertyname)
{
    if (!strcmp(propertyname,"omitGetVerb")) return "true";
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int cTopology_NodeDescriptor::getFieldCount(void *object)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 8+basedesc->getFieldCount(object) : 8;
}

unsigned int cTopology_NodeDescriptor::getFieldTypeFlags(void *object, int field)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return 0;
        case 1: return FD_ISCOMPOUND | FD_ISPOINTER | FD_ISCPOLYMORPHIC | FD_ISCOBJECT;
        case 2: return 0;
        case 3: return 0;
        case 4: return FD_ISARRAY | FD_ISCOMPOUND | FD_ISPOINTER;
        case 5: return FD_ISARRAY | FD_ISCOMPOUND | FD_ISPOINTER;
        case 6: return 0;
        case 7: return FD_ISARRAY | FD_ISCOMPOUND | FD_ISPOINTER;
        default: return 0;
    }
}

const char *cTopology_NodeDescriptor::getFieldName(void *object, int field)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "moduleId";
        case 1: return "module";
        case 2: return "weight";
        case 3: return "enabled";
        case 4: return "inLink";
        case 5: return "outLink";
        case 6: return "distanceToTarget";
        case 7: return "path";
        default: return NULL;
    }
}

const char *cTopology_NodeDescriptor::getFieldTypeString(void *object, int field)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "int";
        case 1: return "cModule";
        case 2: return "double";
        case 3: return "bool";
        case 4: return "cTopology_LinkIn";
        case 5: return "cTopology_LinkIn";
        case 6: return "double";
        case 7: return "cTopology_LinkOut";
        default: return NULL;
    }
}

const char *cTopology_NodeDescriptor::getFieldProperty(void *object, int field, const char *propertyname)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0:
            if (!strcmp(propertyname,"hint")) return "ID of the module this node corresponds to";
            return NULL;
        case 1:
            if (!strcmp(propertyname,"hint")) return "the module this node corresponds to";
            return NULL;
        case 2:
            if (!strcmp(propertyname,"hint")) return "node weight -- affects graph algorithms such as shortest path";
            return NULL;
        case 3:
            if (!strcmp(propertyname,"hint")) return "node state -- affects graph algorithms such as shortest path";
            return NULL;
        case 4:
            if (!strcmp(propertyname,"getter")) return "in";
            if (!strcmp(propertyname,"sizeGetter")) return "inLinks";
            if (!strcmp(propertyname,"hint")) return "incoming links of this graph node";
            return NULL;
        case 5:
            if (!strcmp(propertyname,"hint")) return "outgoing links of this graph node";
            if (!strcmp(propertyname,"getter")) return "out";
            if (!strcmp(propertyname,"sizeGetter")) return "outLinks";
            return NULL;
        case 6:
            if (!strcmp(propertyname,"hint")) return "after running a shortest path algorithm: distance to the target node";
            if (!strcmp(propertyname,"group")) return "shortest path";
            return NULL;
        case 7:
            if (!strcmp(propertyname,"hint")) return "the next link of the shortest path or paths towards the target node";
            if (!strcmp(propertyname,"group")) return "shortest path";
            if (!strcmp(propertyname,"sizeGetter")) return "paths";
            if (!strcmp(propertyname,"getter")) return "path";
            return NULL;
        default: return NULL;
    }
}

int cTopology_NodeDescriptor::getArraySize(void *object, int field)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    cTopology_Node *pp _MAYBEUNUSED = (cTopology_Node *)object;
    switch (field) {
        case 4: return pp->inLinks();
        case 5: return pp->outLinks();
        case 7: return pp->paths();
        default: return 0;
    }
}

bool cTopology_NodeDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    cTopology_Node *pp _MAYBEUNUSED = (cTopology_Node *)object;
    switch (field) {
        case 0: long2string(pp->moduleId(),resultbuf,bufsize); return true;
        case 1: {std::stringstream out; out << pp->module(); opp_strprettytrunc(resultbuf,out.str().c_str(),bufsize-1); return true;}
        case 2: double2string(pp->weight(),resultbuf,bufsize); return true;
        case 3: bool2string(pp->enabled(),resultbuf,bufsize); return true;
        case 4: {std::stringstream out; out << pp->in(i); opp_strprettytrunc(resultbuf,out.str().c_str(),bufsize-1); return true;}
        case 5: {std::stringstream out; out << pp->out(i); opp_strprettytrunc(resultbuf,out.str().c_str(),bufsize-1); return true;}
        case 6: double2string(pp->distanceToTarget(),resultbuf,bufsize); return true;
        case 7: {std::stringstream out; out << pp->path(i); opp_strprettytrunc(resultbuf,out.str().c_str(),bufsize-1); return true;}
        default: return false;
    }
}

bool cTopology_NodeDescriptor::setFieldAsString(void *object, int field, int i, const char *value)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    cTopology_Node *pp _MAYBEUNUSED = (cTopology_Node *)object;
    switch (field) {
        default: return false;
    }
}

const char *cTopology_NodeDescriptor::getFieldStructName(void *object, int field)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 1: return "cModule"; break;
        case 4: return "cTopology_LinkIn"; break;
        case 5: return "cTopology_LinkIn"; break;
        case 7: return "cTopology_LinkOut"; break;
        default: return NULL;
    }
}

void *cTopology_NodeDescriptor::getFieldStructPointer(void *object, int field, int i)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    cTopology_Node *pp _MAYBEUNUSED = (cTopology_Node *)object;
    switch (field) {
        case 1: return (void *)static_cast<cPolymorphic *>(pp->module()); break;
        case 4: return (void *)(pp->in(i)); break;
        case 5: return (void *)(pp->out(i)); break;
        case 7: return (void *)(pp->path(i)); break;
        default: return NULL;
    }
}

class cTopology_LinkDescriptor : public cClassDescriptor
{
  public:
    cTopology_LinkDescriptor();
    virtual ~cTopology_LinkDescriptor();

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

Register_ClassDescriptor(cTopology_LinkDescriptor);

cTopology_LinkDescriptor::cTopology_LinkDescriptor() : cClassDescriptor("cTopology_Link", "cPolymorphic")
{
}

cTopology_LinkDescriptor::~cTopology_LinkDescriptor()
{
}

bool cTopology_LinkDescriptor::doesSupport(cPolymorphic *obj)
{
    return dynamic_cast<cTopology_Link *>(obj)!=NULL;
}

const char *cTopology_LinkDescriptor::getProperty(const char *propertyname)
{
    if (!strcmp(propertyname,"omitGetVerb")) return "true";
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int cTopology_LinkDescriptor::getFieldCount(void *object)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 2+basedesc->getFieldCount(object) : 2;
}

unsigned int cTopology_LinkDescriptor::getFieldTypeFlags(void *object, int field)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return 0;
        case 1: return 0;
        default: return 0;
    }
}

const char *cTopology_LinkDescriptor::getFieldName(void *object, int field)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "weight";
        case 1: return "enabled";
        default: return NULL;
    }
}

const char *cTopology_LinkDescriptor::getFieldTypeString(void *object, int field)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "double";
        case 1: return "bool";
        default: return NULL;
    }
}

const char *cTopology_LinkDescriptor::getFieldProperty(void *object, int field, const char *propertyname)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0:
            if (!strcmp(propertyname,"hint")) return "link weight -- affects graph algorithms such as shortest path";
            return NULL;
        case 1:
            if (!strcmp(propertyname,"hint")) return "link state -- affects graph algorithms such as shortest path";
            return NULL;
        default: return NULL;
    }
}

int cTopology_LinkDescriptor::getArraySize(void *object, int field)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    cTopology_Link *pp _MAYBEUNUSED = (cTopology_Link *)object;
    switch (field) {
        default: return 0;
    }
}

bool cTopology_LinkDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    cTopology_Link *pp _MAYBEUNUSED = (cTopology_Link *)object;
    switch (field) {
        case 0: double2string(pp->weight(),resultbuf,bufsize); return true;
        case 1: bool2string(pp->enabled(),resultbuf,bufsize); return true;
        default: return false;
    }
}

bool cTopology_LinkDescriptor::setFieldAsString(void *object, int field, int i, const char *value)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    cTopology_Link *pp _MAYBEUNUSED = (cTopology_Link *)object;
    switch (field) {
        default: return false;
    }
}

const char *cTopology_LinkDescriptor::getFieldStructName(void *object, int field)
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

void *cTopology_LinkDescriptor::getFieldStructPointer(void *object, int field, int i)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    cTopology_Link *pp _MAYBEUNUSED = (cTopology_Link *)object;
    switch (field) {
        default: return NULL;
    }
}

class cTopology_LinkInDescriptor : public cClassDescriptor
{
  public:
    cTopology_LinkInDescriptor();
    virtual ~cTopology_LinkInDescriptor();

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

Register_ClassDescriptor(cTopology_LinkInDescriptor);

cTopology_LinkInDescriptor::cTopology_LinkInDescriptor() : cClassDescriptor("cTopology_LinkIn", "cTopology_Link")
{
}

cTopology_LinkInDescriptor::~cTopology_LinkInDescriptor()
{
}

bool cTopology_LinkInDescriptor::doesSupport(cPolymorphic *obj)
{
    return dynamic_cast<cTopology_LinkIn *>(obj)!=NULL;
}

const char *cTopology_LinkInDescriptor::getProperty(const char *propertyname)
{
    if (!strcmp(propertyname,"omitGetVerb")) return "true";
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int cTopology_LinkInDescriptor::getFieldCount(void *object)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 3+basedesc->getFieldCount(object) : 3;
}

unsigned int cTopology_LinkInDescriptor::getFieldTypeFlags(void *object, int field)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return FD_ISCOMPOUND | FD_ISPOINTER;
        case 1: return FD_ISCOMPOUND | FD_ISPOINTER | FD_ISCPOLYMORPHIC | FD_ISCOBJECT;
        case 2: return FD_ISCOMPOUND | FD_ISPOINTER | FD_ISCPOLYMORPHIC | FD_ISCOBJECT;
        default: return 0;
    }
}

const char *cTopology_LinkInDescriptor::getFieldName(void *object, int field)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "remoteNode";
        case 1: return "remoteGate";
        case 2: return "localGate";
        default: return NULL;
    }
}

const char *cTopology_LinkInDescriptor::getFieldTypeString(void *object, int field)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "cTopology_Node";
        case 1: return "cGate";
        case 2: return "cGate";
        default: return NULL;
    }
}

const char *cTopology_LinkInDescriptor::getFieldProperty(void *object, int field, const char *propertyname)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0:
            if (!strcmp(propertyname,"hint")) return "the node at the remote end of this connection";
            return NULL;
        case 1:
            if (!strcmp(propertyname,"hint")) return "the gate at the remote end of this connection";
            return NULL;
        case 2:
            if (!strcmp(propertyname,"hint")) return "the gate at the local end of this connection";
            return NULL;
        default: return NULL;
    }
}

int cTopology_LinkInDescriptor::getArraySize(void *object, int field)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    cTopology_LinkIn *pp _MAYBEUNUSED = (cTopology_LinkIn *)object;
    switch (field) {
        default: return 0;
    }
}

bool cTopology_LinkInDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    cTopology_LinkIn *pp _MAYBEUNUSED = (cTopology_LinkIn *)object;
    switch (field) {
        case 0: {std::stringstream out; out << pp->remoteNode(); opp_strprettytrunc(resultbuf,out.str().c_str(),bufsize-1); return true;}
        case 1: {std::stringstream out; out << pp->remoteGate(); opp_strprettytrunc(resultbuf,out.str().c_str(),bufsize-1); return true;}
        case 2: {std::stringstream out; out << pp->localGate(); opp_strprettytrunc(resultbuf,out.str().c_str(),bufsize-1); return true;}
        default: return false;
    }
}

bool cTopology_LinkInDescriptor::setFieldAsString(void *object, int field, int i, const char *value)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    cTopology_LinkIn *pp _MAYBEUNUSED = (cTopology_LinkIn *)object;
    switch (field) {
        default: return false;
    }
}

const char *cTopology_LinkInDescriptor::getFieldStructName(void *object, int field)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "cTopology_Node"; break;
        case 1: return "cGate"; break;
        case 2: return "cGate"; break;
        default: return NULL;
    }
}

void *cTopology_LinkInDescriptor::getFieldStructPointer(void *object, int field, int i)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    cTopology_LinkIn *pp _MAYBEUNUSED = (cTopology_LinkIn *)object;
    switch (field) {
        case 0: return (void *)(pp->remoteNode()); break;
        case 1: return (void *)static_cast<cPolymorphic *>(pp->remoteGate()); break;
        case 2: return (void *)static_cast<cPolymorphic *>(pp->localGate()); break;
        default: return NULL;
    }
}

class cTopology_LinkOutDescriptor : public cClassDescriptor
{
  public:
    cTopology_LinkOutDescriptor();
    virtual ~cTopology_LinkOutDescriptor();

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

Register_ClassDescriptor(cTopology_LinkOutDescriptor);

cTopology_LinkOutDescriptor::cTopology_LinkOutDescriptor() : cClassDescriptor("cTopology_LinkOut", "cTopology_Link")
{
}

cTopology_LinkOutDescriptor::~cTopology_LinkOutDescriptor()
{
}

bool cTopology_LinkOutDescriptor::doesSupport(cPolymorphic *obj)
{
    return dynamic_cast<cTopology_LinkOut *>(obj)!=NULL;
}

const char *cTopology_LinkOutDescriptor::getProperty(const char *propertyname)
{
    if (!strcmp(propertyname,"omitGetVerb")) return "true";
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int cTopology_LinkOutDescriptor::getFieldCount(void *object)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 3+basedesc->getFieldCount(object) : 3;
}

unsigned int cTopology_LinkOutDescriptor::getFieldTypeFlags(void *object, int field)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return FD_ISCOMPOUND | FD_ISPOINTER;
        case 1: return FD_ISCOMPOUND | FD_ISPOINTER | FD_ISCPOLYMORPHIC | FD_ISCOBJECT;
        case 2: return FD_ISCOMPOUND | FD_ISPOINTER | FD_ISCPOLYMORPHIC | FD_ISCOBJECT;
        default: return 0;
    }
}

const char *cTopology_LinkOutDescriptor::getFieldName(void *object, int field)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "remoteNode";
        case 1: return "remoteGate";
        case 2: return "localGate";
        default: return NULL;
    }
}

const char *cTopology_LinkOutDescriptor::getFieldTypeString(void *object, int field)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "cTopology_Node";
        case 1: return "cGate";
        case 2: return "cGate";
        default: return NULL;
    }
}

const char *cTopology_LinkOutDescriptor::getFieldProperty(void *object, int field, const char *propertyname)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0:
            if (!strcmp(propertyname,"hint")) return "the node at the remote end of this connection";
            return NULL;
        case 1:
            if (!strcmp(propertyname,"hint")) return "the gate at the remote end of this connection";
            return NULL;
        case 2:
            if (!strcmp(propertyname,"hint")) return "the gate at the local end of this connection";
            return NULL;
        default: return NULL;
    }
}

int cTopology_LinkOutDescriptor::getArraySize(void *object, int field)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    cTopology_LinkOut *pp _MAYBEUNUSED = (cTopology_LinkOut *)object;
    switch (field) {
        default: return 0;
    }
}

bool cTopology_LinkOutDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    cTopology_LinkOut *pp _MAYBEUNUSED = (cTopology_LinkOut *)object;
    switch (field) {
        case 0: {std::stringstream out; out << pp->remoteNode(); opp_strprettytrunc(resultbuf,out.str().c_str(),bufsize-1); return true;}
        case 1: {std::stringstream out; out << pp->remoteGate(); opp_strprettytrunc(resultbuf,out.str().c_str(),bufsize-1); return true;}
        case 2: {std::stringstream out; out << pp->localGate(); opp_strprettytrunc(resultbuf,out.str().c_str(),bufsize-1); return true;}
        default: return false;
    }
}

bool cTopology_LinkOutDescriptor::setFieldAsString(void *object, int field, int i, const char *value)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    cTopology_LinkOut *pp _MAYBEUNUSED = (cTopology_LinkOut *)object;
    switch (field) {
        default: return false;
    }
}

const char *cTopology_LinkOutDescriptor::getFieldStructName(void *object, int field)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "cTopology_Node"; break;
        case 1: return "cGate"; break;
        case 2: return "cGate"; break;
        default: return NULL;
    }
}

void *cTopology_LinkOutDescriptor::getFieldStructPointer(void *object, int field, int i)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    cTopology_LinkOut *pp _MAYBEUNUSED = (cTopology_LinkOut *)object;
    switch (field) {
        case 0: return (void *)(pp->remoteNode()); break;
        case 1: return (void *)static_cast<cPolymorphic *>(pp->remoteGate()); break;
        case 2: return (void *)static_cast<cPolymorphic *>(pp->localGate()); break;
        default: return NULL;
    }
}

class cTopologyDescriptor : public cClassDescriptor
{
  public:
    cTopologyDescriptor();
    virtual ~cTopologyDescriptor();

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

Register_ClassDescriptor(cTopologyDescriptor);

cTopologyDescriptor::cTopologyDescriptor() : cClassDescriptor("cTopology", "cObject")
{
}

cTopologyDescriptor::~cTopologyDescriptor()
{
}

bool cTopologyDescriptor::doesSupport(cPolymorphic *obj)
{
    return dynamic_cast<cTopology *>(obj)!=NULL;
}

const char *cTopologyDescriptor::getProperty(const char *propertyname)
{
    if (!strcmp(propertyname,"omitGetVerb")) return "true";
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int cTopologyDescriptor::getFieldCount(void *object)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 2+basedesc->getFieldCount(object) : 2;
}

unsigned int cTopologyDescriptor::getFieldTypeFlags(void *object, int field)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return 0;
        case 1: return FD_ISARRAY | FD_ISCOMPOUND | FD_ISPOINTER;
        default: return 0;
    }
}

const char *cTopologyDescriptor::getFieldName(void *object, int field)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "nodes";
        case 1: return "node";
        default: return NULL;
    }
}

const char *cTopologyDescriptor::getFieldTypeString(void *object, int field)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "int";
        case 1: return "cTopology_Node";
        default: return NULL;
    }
}

const char *cTopologyDescriptor::getFieldProperty(void *object, int field, const char *propertyname)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0:
            if (!strcmp(propertyname,"hint")) return "number of nodes in this topology object";
            if (!strcmp(propertyname,"group")) return "general";
            return NULL;
        case 1:
            if (!strcmp(propertyname,"sizeGetter")) return "nodes";
            if (!strcmp(propertyname,"hint")) return "list of nodes in this topology object";
            return NULL;
        default: return NULL;
    }
}

int cTopologyDescriptor::getArraySize(void *object, int field)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    cTopology *pp _MAYBEUNUSED = (cTopology *)object;
    switch (field) {
        case 1: return pp->nodes();
        default: return 0;
    }
}

bool cTopologyDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    cTopology *pp _MAYBEUNUSED = (cTopology *)object;
    switch (field) {
        case 0: long2string(pp->nodes(),resultbuf,bufsize); return true;
        case 1: {std::stringstream out; out << pp->node(i); opp_strprettytrunc(resultbuf,out.str().c_str(),bufsize-1); return true;}
        default: return false;
    }
}

bool cTopologyDescriptor::setFieldAsString(void *object, int field, int i, const char *value)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    cTopology *pp _MAYBEUNUSED = (cTopology *)object;
    switch (field) {
        default: return false;
    }
}

const char *cTopologyDescriptor::getFieldStructName(void *object, int field)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 1: return "cTopology_Node"; break;
        default: return NULL;
    }
}

void *cTopologyDescriptor::getFieldStructPointer(void *object, int field, int i)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    cTopology *pp _MAYBEUNUSED = (cTopology *)object;
    switch (field) {
        case 1: return (void *)(pp->node(i)); break;
        default: return NULL;
    }
}

class cXMLElementDescriptor : public cClassDescriptor
{
  public:
    cXMLElementDescriptor();
    virtual ~cXMLElementDescriptor();

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

Register_ClassDescriptor(cXMLElementDescriptor);

cXMLElementDescriptor::cXMLElementDescriptor() : cClassDescriptor("cXMLElement", "cPolymorphic")
{
}

cXMLElementDescriptor::~cXMLElementDescriptor()
{
}

bool cXMLElementDescriptor::doesSupport(cPolymorphic *obj)
{
    return dynamic_cast<cXMLElement *>(obj)!=NULL;
}

const char *cXMLElementDescriptor::getProperty(const char *propertyname)
{
    if (!strcmp(propertyname,"omitGetVerb")) return "true";
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int cXMLElementDescriptor::getFieldCount(void *object)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 6+basedesc->getFieldCount(object) : 6;
}

unsigned int cXMLElementDescriptor::getFieldTypeFlags(void *object, int field)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return 0;
        case 1: return 0;
        case 2: return 0;
        case 3: return 0;
        case 4: return 0;
        case 5: return 0;
        default: return 0;
    }
}

const char *cXMLElementDescriptor::getFieldName(void *object, int field)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "getTagName";
        case 1: return "getNodeValue";
        case 2: return "getSourceLocation";
        case 3: return "hasAttributes";
        case 4: return "hasChildren";
        case 5: return "detailedInfo";
        default: return NULL;
    }
}

const char *cXMLElementDescriptor::getFieldTypeString(void *object, int field)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "string";
        case 1: return "string";
        case 2: return "string";
        case 3: return "bool";
        case 4: return "bool";
        case 5: return "string";
        default: return NULL;
    }
}

const char *cXMLElementDescriptor::getFieldProperty(void *object, int field, const char *propertyname)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0:
            if (!strcmp(propertyname,"label")) return "tagName";
            if (!strcmp(propertyname,"hint")) return "XML element tag";
            return NULL;
        case 1:
            if (!strcmp(propertyname,"hint")) return "contents of text node inside this XML element";
            if (!strcmp(propertyname,"label")) return "nodeValue";
            return NULL;
        case 2:
            if (!strcmp(propertyname,"label")) return "sourceLocation";
            if (!strcmp(propertyname,"hint")) return "location this XML element was parsed from";
            return NULL;
        case 3:
            if (!strcmp(propertyname,"hint")) return "whether this XML element has attributes";
            return NULL;
        case 4:
            if (!strcmp(propertyname,"hint")) return "whether this XML element has child elements";
            return NULL;
        case 5:
            if (!strcmp(propertyname,"label")) return "contents";
            return NULL;
        default: return NULL;
    }
}

int cXMLElementDescriptor::getArraySize(void *object, int field)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    cXMLElement *pp _MAYBEUNUSED = (cXMLElement *)object;
    switch (field) {
        default: return 0;
    }
}

bool cXMLElementDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    cXMLElement *pp _MAYBEUNUSED = (cXMLElement *)object;
    switch (field) {
        case 0: oppstring2string(pp->getTagName(),resultbuf,bufsize); return true;
        case 1: oppstring2string(pp->getNodeValue(),resultbuf,bufsize); return true;
        case 2: oppstring2string(pp->getSourceLocation(),resultbuf,bufsize); return true;
        case 3: bool2string(pp->hasAttributes(),resultbuf,bufsize); return true;
        case 4: bool2string(pp->hasChildren(),resultbuf,bufsize); return true;
        case 5: oppstring2string(pp->detailedInfo(),resultbuf,bufsize); return true;
        default: return false;
    }
}

bool cXMLElementDescriptor::setFieldAsString(void *object, int field, int i, const char *value)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    cXMLElement *pp _MAYBEUNUSED = (cXMLElement *)object;
    switch (field) {
        default: return false;
    }
}

const char *cXMLElementDescriptor::getFieldStructName(void *object, int field)
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

void *cXMLElementDescriptor::getFieldStructPointer(void *object, int field, int i)
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    cXMLElement *pp _MAYBEUNUSED = (cXMLElement *)object;
    switch (field) {
        default: return NULL;
    }
}

