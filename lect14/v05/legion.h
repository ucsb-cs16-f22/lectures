// legion.h
#ifndef LEGION_H
#define LEGION_H

#include <iostream>
#include <time.h>
#include <sstream>
#include <fstream>
#include <vector>
#include "superhero.h"

using namespace std;

class legion
{
// private data and functions can only be accessed by 
// member functions of the class
private:
    string name;
    vector<superhero> team;
    vector<int> powers; // combined {smarts, strength, speed} of all team members
    void combine_powers();
// public data and functions may be accessed by 
// any code (member functions and the user of the class)
public:
    // constructor 
    // legion() {}
    legion(string name);
    // getter functions end with the keyword const: don't modify any of the member data
    string get_name() const
    {
        return name;
    }
    vector<superhero> get_team() const { return team; }
    vector<int> get_powers() const { return powers; }
    void print_stats() const;

    // setter functions don't have a const at the end:  modify one or more data members
    void add_hero(superhero h);
};
void pick_teams(vector<superhero> &heros, legion &legion1, legion &legion2);
void declare_winner(legion &legion1, legion &legion2);

#endif