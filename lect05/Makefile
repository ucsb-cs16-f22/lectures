# Makefile is given as an input to the make program
# Think of the Makefile as a configuration file that you can use to automate the compilation process

CXXFLAGS= -std=c++11 -Wall 

# Rules
# target/output: dependency /input
#	cmd to execute

shapes : shapes.cpp
	g++  $(CXXFLAGS)   shapes.cpp   -o shapes
	./shapes

clean:
	rm shapes
