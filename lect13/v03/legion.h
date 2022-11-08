//legion.h
#ifndef LEGION_H
#define LEGION_H

#include <iostream>
#include <time.h>
#include <sstream>
#include <fstream>
#include <vector>
#include "superhero.h"

using namespace std;

struct legion
{
    string name;
    vector<superhero> heros;
    vector<int> powers; // {smarts, strength, speed}
    void add_hero(superhero h) { heros.push_back(h); }
};

 void pick_teams(vector<superhero>& heros,  legion& legion1,  legion& legion2){   
    for(int round = 1 ; round < 6; round++){  
        int i = rand()% heros.size()/2;
        int j = heros.size()/2 + rand()% heros.size()/2;
        legion1.add_hero(heros[i]);
        legion2.add_hero(heros[j]);
    }
 }

vector<int> combine_powers(vector<superhero>& legion){
    vector<int> result = {0, 0, 0};
    for(auto elem : legion){
        result[0]+=elem.intelligence;
        result[1]+=elem.strength;
        result[2]+=elem.speed;
    }
    return result;
}

void  print_stats(string legion_name, vector<superhero> legion, vector<int> legion_powers){
    cout << legion_name << " (name, smarts, strength, speed)" << endl;
    for(auto elem: legion){
        cout << to_string(elem);
    }
    cout <<  "--------------------------------------\n";
    cout << setw(23) << "Combined powers: " 
         << setw(3) << legion_powers[0] << ", "
         << setw(3) << legion_powers[1] << ", "
         << setw(3) << legion_powers[2]
         << endl << endl;
}

void declare_winner(string legion1_name, vector<int>& legion1_powers, string legion2_name, vector<int>& legion2_powers){
    string dashes = "-------------------------";
    cout << dashes << endl;
    cout << legion1_name << " vs. " << legion2_name << endl;
    vector <string> output = { "Who is smarter ? ",
                               "Who is stronger ? ",
                               "Who is faster ? "};

    cout << dashes <<endl;
    for (int i = 0 ; i < legion1_powers.size(); i++){
        string winner;
        winner = legion1_powers[i] > legion2_powers[i] ? legion1_name :  legion2_name;
        cout << left << setw(20) << output[i] << winner << endl;
    }
}
#endif