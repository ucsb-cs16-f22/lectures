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
    vector <superhero> legion1;
    vector <superhero> legion2;
    string legion1_name = "Angels" ;
    string legion2_name = "Demons";
    // take turns picking members of each legion
    pick_teams(heros, legion1, legion2);    
   
    // Get combined powers for each legion
    vector<int> legion1_powers = combine_powers(legion1);
    vector<int> legion2_powers = combine_powers(legion2);

    print_stats(legion1_name, legion1, legion1_powers);
    print_stats(legion2_name, legion2, legion2_powers);

    declare_winner(legion1_name, legion1_powers,  legion2_name, legion2_powers);

    return 0;
}


