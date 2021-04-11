#
# This is a common Makefile for code examples from the book
# "Programming -- Principles and Practice Using C++" by Bjarne Stroustrup
#

#
# Usage:
#     make           - Build all examples
#     make clean     - Clean all examples
#     make veryclean - Clean all examples.
#                      Also gets rid of emacs backup files, core files,
#                      and other such cruft.
#     make test      - Run the test suite
#

# Modifications courtesy of Art Werschulz (agw@dsm.fordham.edu)
# Tested using
# (*) g++ 7.3.1 on Fedora Linux 27 
# (*) clang++ 5.0.2 on Fedora Linux 27
# (*) clang++ Apple LLVM version 9.1.0 (clang-902.0.39.2) on Mac OS X 10.13.5

########################################################################
# Things you might want to change start here

# Location of std_lib_facilities.h
# Globally available
STD_LIB_INCLUDES = /usr/local/include/bjarne 
# Current working directory
# STD_LIB_INCLUDES = .
# Parent directory
# STD_LIB_INCLUDES = ..

# Choose whichever you prefer in the following
#SOURCE_EXT=.cc
SOURCE_EXT=.cpp

# Commented out for Linux.  Uncomment for Windows.
# EXE_EXT=.exe

# Which language standard to use?
#STD	= c++11
STD	= c++14
#STD	= c++17

# If you want a noisy report that compilation is complete
#ECHO	= echo
ECHO	= true

# Are we getting timing info?
# This works for g++, but not any version of clang++ I tested
#TIMING = -time
TIMING =

# How much warning do we want compiler to give?
WARNINGS = -Wall -Wno-sign-compare 

########################################################################
# You probably shouldn't need to change anything beyond this line

# Set the compiler flags 
INCLUDES = -I$(STD_LIB_INCLUDES) 
CXXFLAGS = -std=$(STD) $(WARNINGS) $(TIMING) $(INCLUDES)

.SUFFIXES: $(SOURCE_EXT) .o

# Create a list of source files.
SOURCES  = $(shell ls *$(SOURCE_EXT))
SOURCES_NOLINK  = $(shell ls *no-link$(SOURCE_EXT) 2> /dev/null)
SOURCES_LINK = $(shell ls *$(SOURCE_EXT) | grep -v no-link)
# Create a list of object files from the source file lists.
OBJECTS = ${SOURCES:$(SOURCE_EXT)=.o}     
# Create a list of targets.
TARGETS = ${SOURCES_LINK:$(SOURCE_EXT)=$(EXE_EXT)}     
TARGETS_NOLINK = ${SOURCES_NOLINK:$(SOURCE_EXT)=$(EXE_EXT)}     

# Build all targets by default
all: 	$(TARGETS)

# A rule to build executable file out of an .o file
$(TARGETS): %$(EXE_EXT): %.o 
	$(CXX) -o $@ $< 
	@$(ECHO) ===============================================================================
	@$(ECHO) Done building $@
	@$(ECHO)
	@$(ECHO) ===============================================================================
	@$(ECHO)
	@$(ECHO)

# Files with extension .no-link$(SOURCE_EXT) are not intended for linking
$(TARGETS_NOLINK): %.no-link$(EXE_EXT): %.no-link.o
	@$(ECHO) Linking skipped for $@
	@$(ECHO) ================================================================================
	@$(ECHO) Done building $@
	@$(ECHO) ================================================================================
	@$(ECHO)
	@$(ECHO)

# A rule to build .o file out of a $(SOURCE_EXT) file
%.o: %$(SOURCE_EXT) 
	$(CXX) $(CXXFLAGS) -o $@ -c $<

# A rule to clean all the intermediates and targets
clean:	
	rm -rf $(TARGETS) $(OBJECTS) *.out *.stackdump

# A rule to clean all intermediates, targets, emacs backup files, core
# files, etc. 
veryclean:
	rm -rf $(TARGETS) $(OBJECTS) *.out *.stackdump *~ core* \#*\#

# A rule to run set of tests
test: $(TARGETS)
	@for file in $(TARGETS); do \
	    name=`basename $$file $(EXE_EXT)` ; \
	    name=`basename $$name .crash` ; \
	    if (ls $$name.crash.exe >/dev/null 2>&1) ; then \
	        continue ; \
	    fi ; \
	    echo ======================================== [ $$file ] ; \
	    if (ls $$name.*in >/dev/null 2>&1) ; then \
	        for f in $$name.*in; do \
	            echo ; \
	            echo ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ { "$$f" } ; \
	            cat "$$f" ; \
	            echo ; \
	            echo ---------------------------------------- ; \
	            ./$$file < "$$f" ; \
	        done ; \
	    else \
	      ./$$file ; \
	    fi \
	done ; \
	echo -n 
