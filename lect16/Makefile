#Makefile

all : linkedlist reclist 

linkedlist: linkedlist.cpp linkedlist.h
	g++ -std=c++11 linkedlist.cpp -o linkedlist


reclist: reclinkedlist.cpp linkedlist.h
	g++ -std=c++11 reclinkedlist.cpp -o reclist

clean:
	rm linkedlist reclist