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

    ifstream ifs(argv[1]); // open file for reading

    if(!ifs){ //or if(ifs.fail())
        cerr << "Open failed "<<endl;
        return 1;
    }
    
    vector<superhero> heros;
    read_data(ifs, heros);
    //cout << "No. of superheros is "<< heros.size() << endl << endl;;
    ifs.close();

    srand(time(NULL));
    legion legion1 = {"Angels", {}, vector<int>(3,0)}; //direct initialization
    legion legion2 = {"Demons", {}, vector<int>(3,0)};

    // take turns picking members of each legion
    pick_teams(heros, legion1, legion2);    
   
    // Get combined powers for each legion
    legion1.combine_powers();
    legion2.combine_powers();

    legion1.print_stats();
    legion2.print_stats();

    declare_winner(legion1, legion2);

    return 0;
}


