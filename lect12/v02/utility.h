//utility.h
#include <iostream>
#include <time.h>
#include <sstream>
#include <fstream>
#include <vector>
#include "superhero.h"
using namespace std;

// line: 3-D Man,good,50,31,43,32,25,52,233
// returns vector parts = {"3-D Man","good","50",...};
vector<string> split(string line, char delim){
    stringstream ss(line);
    vector<string> result;
    string tmp;
    while(getline(ss, tmp , delim)){
        result.push_back(tmp);
    }
    return result;
}

//ifs is a valid ifstream object that was used to open a file for reading.
void read_data(ifstream& ifs, vector<superhero>& heros){
    string line;
    getline(ifs, line);
    //cout << line << endl;
    
    while(getline(ifs, line)){
        vector<string> parts = split(line, ',');
        string name = parts[0];
        int intelligence = stoi(parts[2]);
        int strength = stoi(parts[3]); ;
        int speed = stoi(parts[4]); 
        heros.push_back(superhero {name, intelligence, strength, speed});
    }
    
}