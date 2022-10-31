// demoFiles02.cpp
// Structs to declare custom type
#include<iostream>
#include<time.h>
#include<sstream>
#include<fstream>
#include <vector>
using namespace std;

struct superhero{
    string name;
    int intelligence;
    int strength;
    int speed;
};

bool isSmarter(superhero a, superhero b){ 
    return a.intelligence > b.intelligence;
}

bool isSmarter(int a, int b){
    return a > b;
}

bool isStronger(const superhero& a, const superhero& b){ 
    //a.intelligence = 0;
    return a.strength > b.strength;
}

bool isFaster(superhero*  p, superhero* q){ 
    //a.intelligence = 0;
   // return p->speed > (*q).speed;
   return p->speed > q->speed;
}

string toString(superhero s){
    stringstream ss;
    ss << "[ Name: " << s.name << ", Intelligence:  " << s.intelligence 
       << ", Strength:  "<< s.strength <<", Speed:  " << s.speed << "]" <<endl;
    return ss.str();
}
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
    string line;
    getline(ifs, line);
    cout << line << endl;
    int count = 0;
    vector<superhero> heros;
    while(getline(ifs, line)){
        vector<string> parts = split(line, ',');
        string name = parts[0];
        int intelligence = stoi(parts[2]);
        int strength = stoi(parts[3]); ;
        int speed = stoi(parts[4]); 
        heros.push_back(superhero {name, intelligence, strength, speed});
       // cout << line << endl;
        // count++;
    }

    cout << "No. of superheros is "<< heros.size() << endl;

    ifs.close();

    for(auto elem: heros){
        cout << toString(elem)<<endl;
    }
 

    return 0;
}


