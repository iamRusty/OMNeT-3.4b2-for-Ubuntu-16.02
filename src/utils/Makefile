#
# variables set by `configure':
#
CXX=g++
CC=gcc
MAKEDEPEND=opp_makedep -Y --objdirtree
WISH=wish

CFLAGS=-O2 -DNDEBUG=1 -fPIC  -DWITH_PARSIM -DWITH_NETBUILDER
LDFLAGS=
EXE_SUFFIX=

COPTS=$(CFLAGS)

OMNETPP_BIN_DIR=/home/rusty/Desktop/omnetpp-3.4b2/bin

OMNETPP_VERSION=3.4b2
OMNETPP_EDITION=Academic Public License

all: seedtool tcl2c
	chmod +x opp_makemake opp_test opp_makedep opp_neddoc splitvec
	cp opp_makemake $(OMNETPP_BIN_DIR)
	cp opp_test $(OMNETPP_BIN_DIR)
	cp opp_makedep $(OMNETPP_BIN_DIR)
	cp opp_neddoc $(OMNETPP_BIN_DIR)
	cp splitvec $(OMNETPP_BIN_DIR)
	cp neddoc.xsl $(OMNETPP_BIN_DIR)
	cp neddocproc.pl $(OMNETPP_BIN_DIR)
	../utils/install-prog seedtool $(OMNETPP_BIN_DIR)
	# next line is for samples/rundemo
	echo $(WISH) >$(HOME)/.wishname

seedtool : seedtool.cc
	$(CXX) seedtool.cc -o seedtool

tcl2c: tcl2c.c
	$(CC) tcl2c.c -o tcl2c

depend:
	$(MAKEDEPEND) -I. -- *.cc
	$(MAKEDEPEND) -I. -fMakefile.in -- *.cc

clean:
	rm -f *.o seedtool$(EXE_SUFFIX) tcl2c$(EXE_SUFFIX)

# DO NOT DELETE THIS LINE -- make depend depends on it.
seedtool.o: seedtool.cc
