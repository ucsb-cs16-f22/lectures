//legion.h

#include <iostream>
#include <time.h>
#include <sstream>
#include <fstream>
#include <vector>
#include "superhero.h"


using namespace std;

 void pick_teams(vector<superhero>& heros, vector<superhero>& legion1, vector<superhero>& legion2){   
    for(int round = 1 ; round < 6; round++){
       
        int i = rand()% heros.size()/2;
        int j = heros.size()/2 + rand()% heros.size()/2;
        cout << heros[i].name << " vs. " << heros[j].name << endl;
        legion1.push_back(heros[i]);
        legion2.push_back(heros[j]);
    }
 }