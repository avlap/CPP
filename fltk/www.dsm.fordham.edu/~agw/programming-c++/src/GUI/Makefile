#
# This is a Makefile for the GUI that is used in Chapters 12-17 of
# "Programming -- Principles and Practice Using C++" by Bjarne Stroustrup
#

#
# Usage:
#     make           - Build the library.
#     make clean     - Delete object files and the library.
#     make veryclean - Delete object files and the library.
#                      Also gets rid of emacs backup files, core files,
#                      and other such cruft.
#

# Modifications courtesy of Art Werschulz (agw@dsm.fordham.edu)
# Tested using
# (*) g++ 7.3.1 on Fedora Linux 27 
# (*) clang++ 5.0.2 on Fedora Linux 27
# (*) clang++ Apple LLVM version 9.1.0 (clang-902.0.39.2) on Mac OS X 10.13.5

########################################################################
# Things you might want to change start here

# Location of FLTK header files
#FLTK_INCLUDES = /usr/local/include
FLTK_INCLUDES = /usr/include
#FLTK_INCLUDES = ../FLTK

# Location of std_lib_facilities.h
#STD_LIB_INCLUDES = /usr/local/include/bjarne
STD_LIB_INCLUDES = .

# Where the headers will eventually wind up
HEADER_DEST = /usr/local/include/bjarne/GUI
#HEADER_DEST = .

# Where the archived GUI library will eventually wind up.
LIB_DEST = /usr/local/lib
#LIB_DEST = .

# Choose whichever you prefer in the following
#SOURCE_EXT=.cc
SOURCE_EXT=.cpp

# Which language standard to use
#STD = c++11
STD = c++14
#STD = c++17

# Various compiler flags you might like.
#
# I like to be warned.
# OTOH, I don't care that Graph_lib::Window::resize() hides the
# overloaded virtual function Fl_Window::resize(), since client code
# never directly uses the latter
OPT_CXXFLAGS = -Wall -Wno-overloaded-virtual -O3 -DNDEBUG

########################################################################
# You shouldn't need to change anything after this line

INCLUDES = -I$(FLTK_INCLUDES) -I$(STD_LIB_INCLUDES) 
CXXFLAGS = $(INCLUDES) $(OPT_CXXFLAGS) -std=$(STD)
AR       = ar

.SUFFIXES: .cpp .o

# Create a list of source files and header files
SOURCES  = $(shell ls *.cpp)
HEADERS  = $(shell ls *.h)
# Create a list of object files from the source file lists.
OBJECTS = ${SOURCES:.cpp=.o}     
# Create a list of targets.
TARGETS = libbookgui.a

# Build all targets by default
all: 	$(TARGETS)

%.a: $(OBJECTS) $(HEADERS)
	$(AR) rcs $@ $(OBJECTS)

# A rule to build .o file out of a .cpp file
%.o: %.cpp 
	$(CXX) $(CXXFLAGS) -o $@ -c $<

# A rule to install everything
# If using default values, run as root
install: $(TARGETS)
	cp $(HEADERS) $(HEADER_DEST)
	cp $(TARGETS) $(LIB_DEST)

# A rule to clean all the intermediates and targets
clean:	
	rm -rf $(TARGETS) $(OBJECTS) *.out *.stackdump

# A rule to clean all intermediates, targets, emacs backup files, core
# files, etc. 
veryclean:
	rm -rf $(TARGETS) $(OBJECTS) *.out *.stackdump *~ core* \#*\#
