//
// Generated file, do not edit! Created by opp_msgc 3.4 from packet.msg.
//

#ifndef _PACKET_M_H_
#define _PACKET_M_H_

#include <omnetpp.h>

// opp_msgc version check
#define MSGC_VERSION 0x0304
#if (MSGC_VERSION!=OMNETPP_VERSION)
#    error Version mismatch! Probably this file was generated by an earlier version of opp_msgc: 'make clean' should help.
#endif


/**
 * Class generated from <tt>packet.msg</tt> by opp_msgc.
 * <pre>
 * message Packet
 * {
 *   fields:
 *     int srcAddr;
 *     int destAddr;
 *     int hopCount;
 * }
 * </pre>
 */
class Packet : public cMessage
{
  protected:
    int srcAddr_var;
    int destAddr_var;
    int hopCount_var;

    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const Packet&);

  public:
    Packet(const char *name=NULL, int kind=0);
    Packet(const Packet& other);
    virtual ~Packet();
    Packet& operator=(const Packet& other);
    virtual cPolymorphic *dup() const {return new Packet(*this);}
    virtual void netPack(cCommBuffer *b);
    virtual void netUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual int getSrcAddr() const;
    virtual void setSrcAddr(int srcAddr_var);
    virtual int getDestAddr() const;
    virtual void setDestAddr(int destAddr_var);
    virtual int getHopCount() const;
    virtual void setHopCount(int hopCount_var);
};

inline void doPacking(cCommBuffer *b, Packet& obj) {obj.netPack(b);}
inline void doUnpacking(cCommBuffer *b, Packet& obj) {obj.netUnpack(b);}

#endif // _PACKET_M_H_
