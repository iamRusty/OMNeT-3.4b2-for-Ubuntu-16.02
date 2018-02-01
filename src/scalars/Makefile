#
# Definitions to be customized by 'configure'
#
CXX=g++
CC=gcc
YACC=bison -y
LEX=flex
WISH=wish
MAKEDEPEND=opp_makedep -Y --objdirtree

CFLAGS=-O2 -DNDEBUG=1 -fPIC  -DWITH_PARSIM -DWITH_NETBUILDER
LDFLAGS=
EXE_SUFFIX=

OMNETPP_BIN_DIR=/home/rusty/Desktop/omnetpp-3.4b2/bin

OMNETPP_VERSION=3.4b2
OMNETPP_EDITION=Academic Public License

TK_CFLAGS=-I/usr/include/tcl8.5
TK_LIBS= -ltk8.5 -ltcl8.5
SYS_LIBS=-ldl -lstdc++ 

OMNETPP_SCALARS_DIR=/home/rusty/Desktop/omnetpp-3.4b2/src/scalars

# The following is either '-e' (embedded Tcl code) or '' (no embedding)
SCALARS_EMBED_SUFFIX=-e

#
# Local definitions
#
COPTS=$(CFLAGS) $(TK_CFLAGS)

SCALARS_OBJS = scalars$(SCALARS_EMBED_SUFFIX).o \
               tklib.o \
               tkcmd.o \
               tkutil.o
ENGINE_OBJS =  engine/scalarmanager.o \
               engine/filetokenizer.o \
               engine/datasorter.o \
               engine/patmatch.o \
               engine/texception.o \
               engine/util.o

OBJS = $(SCALARS_OBJS) $(ENGINE_OBJS)

#
# Automatic rules
#
.SUFFIXES : .cc

.cc.o:
	$(CXX) -c $(COPTS) -o $@ $<

#
# Targets
#
default: scalars

scalars: $(OBJS)
	$(CXX) $(LDFLAGS) $(OBJS) $(TK_LIBS) $(SYS_LIBS) -o scalars
	../utils/install-prog scalars $(OMNETPP_BIN_DIR)

scalars.o : scalars.cc
	$(CXX) -c $(COPTS) -DOMNETPP_SCALARS_DIR="\"$(OMNETPP_SCALARS_DIR)\"" -DOMNETPP_BITMAP_PATH="\"$(OMNETPP_BITMAP_PATH)\"" scalars.cc

scalars-e.o : scalars.cc tclcode.cc
	$(CXX) -c $(COPTS) -DOMNETPP_BITMAP_PATH="\"$(OMNETPP_BITMAP_PATH)\"" scalars.cc -o scalars-e.o

tclcode.cc: *.tcl
	../utils/tcl2c tclcode.cc *.tcl

missing-library:
	@ echo '*** No Tk installation found -- skipping Scalars'

depend:
	$(MAKEDEPEND) -I. -- *.cc engine/*.cc
	$(MAKEDEPEND) -I. -fMakefile.in -- *.cc engine/*.cc

clean:
	rm -f tclcode.cc *.o scalars$(EXE_SUFFIX)
	rm -f engine/*.o

# DO NOT DELETE THIS LINE -- make depend depends on it.
scalars.o: scalars.cc \
  tklib.h \
  ../utils/ver.h
tkcmd.o: tkcmd.cc \
  tklib.h \
  tkutil.h \
  engine/scalarmanager.h \
  engine/util.h \
  engine/datasorter.h \
  engine/texception.h
tklib.o: tklib.cc \
  tklib.h \
  tkutil.h
tkutil.o: tkutil.cc \
  tkutil.h
engine/datasorter.o: engine/datasorter.cc \
  engine/scalarmanager.h \
  engine/util.h \
  engine/datasorter.h \
  engine/patmatch.h \
  engine/texception.h
engine/filetokenizer.o: engine/filetokenizer.cc \
  engine/filetokenizer.h
engine/patmatch.o: engine/patmatch.cc \
  engine/patmatch.h
engine/scalarmanager.o: engine/scalarmanager.cc \
  engine/patmatch.h \
  engine/scalarmanager.h \
  engine/filetokenizer.h \
  engine/texception.h
engine/texception.o: engine/texception.cc \
  engine/texception.h
engine/util.o: engine/util.cc \
  engine/util.h
