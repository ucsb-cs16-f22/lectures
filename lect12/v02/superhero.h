//superhero.h
#ifndef SUPERHERO_H
#define SUPERHERO_H 

#include <iostream>
#include <time.h>
#include <sstream>
#include <fstream>
#include <vector>
using namespace std;

struct superhero{
    string name;
    int intelligence;
    int strength;
    int speed;
};

bool is_smarter(const superhero& a, const superhero& b){ 

    return a.intelligence > b.intelligence;
}

bool is_smarter(int a, int b){
    return a > b;
}

bool is_stronger(const superhero& a, const superhero& b){ 
    return a.strength < b.strength;
}

bool is_faster(const superhero& a, const superhero& b){ 
   return a.speed > b.speed;
}

string to_string(superhero s){
    stringstream ss;
    ss << setw(20) <<s.name << ": [" << setw(3)<< s.intelligence 
       << ", " << setw(3)<< s.strength <<", " << setw(3)<< s.speed << "]" <<endl;
    return ss.str();
}

#endif