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

class legion
{
    private: // private data members can only be accessed by member functions of the class
        string name;
        vector<superhero> team;
        vector<int> powers; // combined {smarts, strength, speed} of all team members
        void combine_powers();

    public: // public data may be accessed by any code (but also the user of the class)   
       //constructor
       legion();
       legion(string team_name){
          name = team_name;
          powers= vector<int>(3,0);
       }
       
       //getter: don't modify any of the member data
       string get_name()const  { 
        //name = "Diba";
        return name; 
        }
       vector<superhero> get_team()const  { return team;}
       vector<int> get_powers()const {return powers;}

       //setter 
        void add_hero(superhero h);        
        void print_stats();
};

void legion::add_hero(superhero h) { 
    team.push_back(h); 
    powers[0]+= h.intelligence;
    powers[1]+= h.strength;
    powers[2]+= h.speed;

} 

 void pick_teams(vector<superhero>& heros,  legion& legion1,  legion& legion2){   
    for(int round = 1 ; round < 6; round++){  
        int i = rand()% heros.size()/2;
        int j = heros.size()/2 + rand()% heros.size()/2;
        legion1.add_hero(heros[i]);
        legion2.add_hero(heros[j]);
    }
 }

void legion::combine_powers(){
    int x = 0; // x is a local variable
    this->powers = vector<int>(3, 0);
    for(auto elem : team){
        powers[0]+=elem.intelligence;
        powers[1]+=elem.strength;
        powers[2]+=elem.speed;
    }
}

void  legion::print_stats(){
    cout << name << " (name, smarts, strength, speed)" << endl;
    for(auto elem : team){
        cout << to_string(elem);
    }
    cout <<  "--------------------------------------\n";
    cout << setw(23) << "Combined powers: " 
         << setw(3) << powers[0] << ", "
         << setw(3) << powers[1] << ", "
         << setw(3) << powers[2]
         << endl << endl;
}

void declare_winner(legion& legion1, legion& legion2){
    string dashes = "-------------------------";
    cout << dashes << endl;
    cout << legion1.get_name() << " vs. " << legion2.get_name() << endl;
    vector <string> output = { "Who is smarter ? ",
                               "Who is stronger ? ",
                               "Who is faster ? "};

    cout << dashes <<endl;
    for (int i = 0 ; i < legion1.get_powers().size(); i++){
        string winner;
        winner = legion1.get_powers()[i] > legion2.get_powers()[i] ? legion1.get_name() :  legion2.get_name();
        cout << left << setw(20) << output[i] << winner << endl;
    }
}
#endif