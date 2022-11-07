//superhero.h
#include <iostream>
#include <time.h>
#include <sstream>
#include <fstream>
#include <vector>
using namespace std;

#ifndef SUPERHERO_H
#define SUPERHERO_H 
struct superhero{
    string name;
    int intelligence;
    int strength;
    int speed;
};

bool isSmarter(const superhero& a, const superhero& b){ 

    return a.intelligence > b.intelligence;
}

bool isSmarter(int a, int b){
    return a > b;
}

bool isStronger(const superhero& a, const superhero& b){ 
    return a.strength < b.strength;
}

bool isFaster(const superhero& a, const superhero& b){ 
   return a.speed > b.speed;
}

string toString(superhero s){
    stringstream ss;
    ss << setw(20) <<s.name << ": [" << setw(3)<< s.intelligence 
       << ", " << setw(3)<< s.strength <<", " << setw(3)<< s.speed << "]" <<endl;
    return ss.str();
}

#endif