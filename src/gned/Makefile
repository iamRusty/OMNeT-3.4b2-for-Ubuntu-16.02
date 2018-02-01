#
# Definitions to be customized by 'configure'
#
CXX=g++
CC=gcc
YACC=bison -y
LEX=flex
MAKEDEPEND=opp_makedep -Y --objdirtree

CFLAGS=-O2 -DNDEBUG=1 -fPIC  -DWITH_PARSIM -DWITH_NETBUILDER
LDFLAGS=
EXE_SUFFIX=

OMNETPP_BITMAP_PATH=./bitmaps;/home/rusty/Desktop/omnetpp-3.4b2/bitmaps
OMNETPP_BIN_DIR=/home/rusty/Desktop/omnetpp-3.4b2/bin

OMNETPP_VERSION=3.4b2
OMNETPP_EDITION=Academic Public License

TK_CFLAGS=-I/usr/include/tcl8.5
TK_LIBS= -ltk8.5 -ltcl8.5
SYS_LIBS=-ldl -lstdc++ 

# The following is either '-e' (embedded Tcl code) or '' (no embedding)
GNED_EMBED_SUFFIX=-e

#
# Local definitions
#
COPTS=$(CFLAGS) $(TK_CFLAGS)

OMNETPP_GNED_DIR=/home/rusty/Desktop/omnetpp-3.4b2/src/gned

OBJS = gned$(GNED_EMBED_SUFFIX).o tklib.o tkcmd.o arrow.o \
       ebnf.tab.o lex.yy.o parsened.o nedfile.o

#
# Automatic rules
#
.SUFFIXES : .cc

.cc.o:
	$(CXX) -c $(COPTS) -o $@ $<

#
# Targets
#
default: gned

gned : $(OBJS)
	$(CXX) $(LDFLAGS) $(OBJS) $(TK_LIBS) $(SYS_LIBS) -o gned
	../utils/install-prog gned $(OMNETPP_BIN_DIR)

gned.o : gned.cc
	$(CXX) -c $(COPTS) -DOMNETPP_GNED_DIR="\"$(OMNETPP_GNED_DIR)\"" -DOMNETPP_BITMAP_PATH="\"$(OMNETPP_BITMAP_PATH)\"" gned.cc

gned-e.o : gned.cc tclcode.cc
	$(CXX) -c $(COPTS) -DOMNETPP_BITMAP_PATH="\"$(OMNETPP_BITMAP_PATH)\"" gned.cc -o gned-e.o

ebnf.tab.cc ebnf.tab.h : ebnf.y
	$(YACC) -b ebnf -d ebnf.y
	mv ebnf.tab.c ebnf.tab.cc

lex.yy.cc : ebnf.lex
	$(LEX) ebnf.lex
	mv lex.yy.c lex.yy.cc

tclcode.cc: *.tcl
	../utils/tcl2c tclcode.cc *.tcl

missing-library:
	@ echo '  *** No Tk installation found -- skipping GNED'

depend:
	$(MAKEDEPEND) -I. -- *.cc
	$(MAKEDEPEND) -I. -fMakefile.in -- *.cc

clean:
	rm -f tclcode.cc *.o lex.yy.cc ebnf.tab.cc ebnf.tab.h gned$(EXE_SUFFIX)

# DO NOT DELETE THIS LINE -- make depend depends on it.
arrow.o: arrow.cc \
  arrow.h
ebnf.tab.o: ebnf.tab.cc \
  ebnf.h \
  ebnfcfg.h \
  parsened.h \
  nedfile.h
gned.o: gned.cc \
  ../utils/ver.h \
  tklib.h \
  arrow.h
lex.yy.o: lex.yy.cc \
  ebnf.h \
  ebnf.tab.h \
  ebnfcfg.h \
  parsened.h \
  ./unistd.h
nedfile.o: nedfile.cc \
  nedfile.h \
  parsened.h \
  ebnf.h
parsened.o: parsened.cc \
  parsened.h \
  nedfile.h \
  tklib.h \
  ebnf.h
tkcmd.o: tkcmd.cc \
  tklib.h \
  arrow.h \
  parsened.h \
  ebnf.h
tklib.o: tklib.cc \
  tklib.h
