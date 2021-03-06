# NOTE: remove .txt at the end of the filename! I couldn't upload this file without it.

# Lines starting with # are comments.

# This is a Makefile. 
# if you just type "make", this file will be called.
# If you have more than 1 Makefile, you can specify the wanted file by "make -f MakefileName".

# Makefile is an essential tool for building your program
# in a large project (lots of source files). The Makefile contains a set
# of rules. Each rule says that a certain file (called a target) depends
# on one or more other files (called prerequisites). When building a
# program, make goes through each target and checks if it is older than 
# any of its prerequisites. If it is, that target has to be rebuilt 
# (because the code it depends on has changed). Whenever this happens, 
# a certain command is invoked. This command can either be provided by 
# the rule (called an explicit rule) or omitted (implicit rule). When a
# rule is implicit, a default command is used. We will not go through
# what the default commands look like.

# In addition to the rules, the Makefile contains a set of variables
# that contain text strings. The text can be the name of a compiler,
# some compiler options, etc. We will use these text strings to define
# the commands that are used in the rules.

# This is what a variable definition looks like.
# CXX is the compiler, CC is the linker (used by implicit rules).
CXX = g++
CC = g++

# Preprocessor options (used by implicit rules). We have no special
# options to pass to the preprocessor, so this can be commented out.
# CPPFLAGS  = 

# Compiler options. You'll always want to set this one.
CXXFLAGS = -pipe -O2 -Wall -W -ansi -pedantic-errors 
CXXFLAGS += -Wmissing-braces -Wparentheses -Wold-style-cast -ggdb
# How do you find out what these options mean?
# What does for example -O2 do?

# Linker options (used by implicit rules).
LDFLAGS = -ggdb

# If our program depended on external libraries, we would list them here
#LIBS = 

# Here we will put the names of the source and object files in to a single varibale
#MYSRC = file1.cpp file2.cpp file3.cpp ...
# Implement our Person case!

MYOBJ = $(Student.cpp Teacher.cpp Person.cpp Student.h Teacher.h Person.h:.cpp=.o) # Do you understand what happens here?

# The names of the executables
PROGS = student teacher person
#you could give many names here

# This is a rule stating that the target "all" depends on whatever is 
# in the variable PROGS. Typing "make all" builds all of the PROGS. 
# It is customary to include this target in any Makefile. As you have 
# deduced by now, not every target has to be the name of a file.
all: $(PROGS)

# You will soon see scary things...
# Little glossary on automatic variables:

# $@ the target filename
# $* the target filename without the file extension
# $< the first prerequisite filename
# $^ the filenames of all the prerequisites, separated by spaces, discard duplicates.
# $+ similar to $^, but include duplicates
# $? names of all prerequisites that are newer than the target, separated by spaces.

# The executable myProgram depends on program.o as well as all
# the MYOBJ object files. The second line is the command that should be
# executed in order to build myProgram. The variables expand to 
# whatever text strings we put in them earlier. 
# So the slightly cryptic symbol $@ expands to the name of the target
# and $^ expands to the list of prerequisites. 

myProgram: program.o $(MYOBJ)
	$(CXX) -o $@ $^ $(CXXFLAGS) $(CPPFLAGS) $(LIBS)
# Write out (to a comment) what this latter line actually does!


# This is a rule for cleaning up the file created when building the
# program. Type "make clean" to invoke it. All the .o files are removed.
clean:
	rm -f *.o


# Implement "make realclean" to remove all executables and .d files.
realclean: 
	rm -f *.d
	rm PROGS
