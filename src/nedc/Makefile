#
# Definitions to be customized by configure
#
CXX=g++
MAKEDEPEND=opp_makedep -Y --objdirtree

CFLAGS=-O2 -DNDEBUG=1 -fPIC  -DWITH_PARSIM -DWITH_NETBUILDER
LDFLAGS=
EXE_SUFFIX=
XML_LIBS=-lxml2

OMNETPP_BIN_DIR=/home/rusty/Desktop/omnetpp-3.4b2/bin
OMNETPP_LIB_DIR=/home/rusty/Desktop/omnetpp-3.4b2/lib
OMNETPP_INCL_DIR=/home/rusty/Desktop/omnetpp-3.4b2/include

OMNETPP_VERSION=3.4b2
OMNETPP_EDITION=Academic Public License

#
# Local definitions (OMNETPP_INCL_DIR is used for platdep/*)
#
COPTS=$(CFLAGS) -I$(OMNETPP_INCL_DIR)

#
# Targets
#
all: nedtool
	chmod +x opp_msgc nedc
	cp opp_msgc $(OMNETPP_BIN_DIR)
	cp nedc $(OMNETPP_BIN_DIR)

nedtool: nedtool.o
	$(CXX) $(LDFLAGS) -o nedtool nedtool.o -L$(OMNETPP_LIB_DIR) -lnedxml $(XML_LIBS)
	../utils/install-prog nedtool $(OMNETPP_BIN_DIR)

nedtool.o: nedtool.cc
	$(CXX) -c $(COPTS) -I../nedxml nedtool.cc

depend:
	$(MAKEDEPEND) -I. -- *.cc
	$(MAKEDEPEND) -I. -fMakefile.in -- *.cc

clean:
	rm -f *.o nedtool *_n.cc

# DO NOT DELETE THIS LINE -- make depend depends on it.
nedtool.o: nedtool.cc \
  ../utils/ver.h
