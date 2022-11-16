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


bool is_smarter(const superhero& a, const superhero& b);

bool is_smarter(int a, int b);

bool is_stronger(const superhero& a, const superhero& b);

bool is_faster(const superhero& a, const superhero& b);

string to_string(superhero s);

#endif