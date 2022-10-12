# Makefile is given as an input to the make program
# Think of the Makefile as a configuration file that you can use to automate the compilation process

CXXFLAGS= -std=c++11 -Wall 

# Rules
# target/output: dependency /input
#	cmd to execute


mountain : shapes.cpp drawMountain.cpp
	g++  $(CXXFLAGS)   drawMountain.cpp shapes.cpp   -o mountain


testshapes : shapes.cpp testshapes.cpp
	g++  $(CXXFLAGS)   testshapes.cpp shapes.cpp   -o testshapes
	./testshapes

clean:
	rm testshapes mountain
