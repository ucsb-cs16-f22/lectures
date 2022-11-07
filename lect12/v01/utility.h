//utility.h
#include <iostream>
#include <time.h>
#include <sstream>
#include <fstream>
#include <vector>
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