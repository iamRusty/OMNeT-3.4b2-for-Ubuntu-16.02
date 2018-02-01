//
// Generated file, do not edit! Created by opp_msgc 3.4 from tictoc12.msg.
//

#ifndef _TICTOC12_M_H_
#define _TICTOC12_M_H_

#include <omnetpp.h>

// opp_msgc version check
#define MSGC_VERSION 0x0304
#if (MSGC_VERSION!=OMNETPP_VERSION)
#    error Version mismatch! Probably this file was generated by an earlier version of opp_msgc: 'make clean' should help.
#endif


/**
 * Class generated from <tt>tictoc12.msg</tt> by opp_msgc.
 * <pre>
 * message TicTocMsg12
 * {
 *     fields:
 *         int source;
 *         int destination;
 *         int hopCount = 0;
 * }
 * </pre>
 */
class TicTocMsg12 : public cMessage
{
  protected:
    int source_var;
    int destination_var;
    int hopCount_var;

    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const TicTocMsg12&);

  public:
    TicTocMsg12(const char *name=NULL, int kind=0);
    TicTocMsg12(const TicTocMsg12& other);
    virtual ~TicTocMsg12();
    TicTocMsg12& operator=(const TicTocMsg12& other);
    virtual cPolymorphic *dup() const {return new TicTocMsg12(*this);}
    virtual void netPack(cCommBuffer *b);
    virtual void netUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual int getSource() const;
    virtual void setSource(int source_var);
    virtual int getDestination() const;
    virtual void setDestination(int destination_var);
    virtual int getHopCount() const;
    virtual void setHopCount(int hopCount_var);
};

inline void doPacking(cCommBuffer *b, TicTocMsg12& obj) {obj.netPack(b);}
inline void doUnpacking(cCommBuffer *b, TicTocMsg12& obj) {obj.netUnpack(b);}

#endif // _TICTOC12_M_H_
