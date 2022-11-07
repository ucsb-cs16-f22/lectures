// demo.cpp
#include <iostream>
#include <time.h>
#include <sstream>
#include <fstream>
#include <vector>
#include "utility.h"
#include "superhero.h"
#include "legion.h"

using namespace std;

int main(int argc, char const *argv[])
{

    if(argc != 2){
        cerr << "Usage is "<< argv[0] << " filename" << endl;
        return 1;
    }
    ifstream ifs(argv[1]); // If we want to read from file
                                       // open the file 
    //ofstream ofs; // If you want to write to file

    if(!ifs){ //or if(ifs.fail())
        cerr << "Open failed "<<endl;
        return 1;
    }
    
    vector<superhero> heros;

    read_data(ifs, heros);

    cout << "No. of superheros is "<< heros.size() << endl << endl;;

    ifs.close();

    srand(time(NULL));
    vector <superhero> legion1;
    vector <superhero> legion2;
    string legion1_name = "Angels" ;
    string legion2_name = "Demons";
    string dashes = "----------------------------------";
    // take turns picking members of each legion
    cout << dashes <<endl;
    cout << legion1_name << " vs. " << legion2_name << endl;
    cout << dashes << endl;

    pick_teams(heros, legion1, legion2);    
   
     // Get combined powers for each legion
    int legion1_smarts = 0;
    int legion1_strength = 0;
    int legion1_speed = 0;

    for(auto elem : legion1){
        legion1_smarts+=elem.intelligence;
        legion1_strength+=elem.strength;
        legion1_speed+=elem.speed;
    }

    int legion2_smarts = 0;
    int legion2_strength = 0;
    int legion2_speed = 0;

    for(auto elem : legion2){
        legion2_smarts+=elem.intelligence;
        legion2_strength+=elem.strength;
        legion2_speed+=elem.speed;
    }

    cout << legion1_name << " (name, smarts, strength, speed)" << endl;

    for(auto elem: legion1){
        cout << toString(elem);
    }
     cout << setw(23) << "Combined powers: " 
          << setw(3) << legion1_smarts << ", "
          << setw(3) << legion1_strength << ", "
          << setw(3) << legion1_speed
          << endl;
     
 
    cout << legion2_name  << endl;

    for(auto elem: legion2){
        cout << toString(elem);
    }

    cout << setw(23) << "Combined powers: " 
         << setw(3) << legion2_smarts << ", "
         << setw(3) << legion2_strength << ", "
         << setw(3) << legion2_speed
         << endl;

    cout << dashes << endl;
    cout << legion1_name << " vs. " << legion2_name << endl;
    string smarter;
    string stronger;
    string faster; 
    smarter = legion1_smarts > legion2_smarts ? legion1_name :  legion2_name;
    stronger = legion1_strength > legion2_strength ? legion1_name :  legion2_name;
    faster =  legion1_speed > legion2_speed ? legion1_name :  legion2_name;
    
    cout << dashes <<endl;
    cout << left << setw(20) << "Who is smarter ? " << smarter << endl;
    cout << left << setw(20) << "Who is stronger ? " << stronger << endl;
    cout << left << setw(20) << "Who is faster ? " << faster << endl;
    return 0;
}


