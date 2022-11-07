// demo.cpp
#include <iostream>
#include <time.h>
#include <sstream>
#include <fstream>
#include <vector>
using namespace std;

struct superhero{
    string name;
    int intelligence;
    int strength;
    int speed;
};

bool isSmarter(const superhero& a, const superhero& b){ 
    return a.intelligence > b.intelligence;
}

bool isSmarter(int a, int b){
    return a > b;
}

bool isStronger(const superhero& a, const superhero& b){ 
    return a.strength > b.strength;
}

bool isFaster(const superhero& a, const superhero& b){ 
   return a.speed > b.speed;
}

string toString(superhero s){
    stringstream ss;
    ss << setw(20) <<s.name << ": [" << setw(3)<< s.intelligence 
       << ", " << setw(3)<< s.strength <<", " << setw(3)<< s.speed << "]" <<endl;
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
    //cout << line << endl;
    int count = 0;
    vector<superhero> heros;
    while(getline(ifs, line)){
        vector<string> parts = split(line, ',');
        string name = parts[0];
        int intelligence = stoi(parts[2]);
        int strength = stoi(parts[3]); ;
        int speed = stoi(parts[4]); 
        heros.push_back(superhero {name, intelligence, strength, speed});
    }

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
    for(int round = 1 ; round < 6; round++){
       
        int i = rand()% heros.size()/2;
        int j = heros.size()/2 + rand()% heros.size()/2;
        cout << heros[i].name << " vs. " << heros[j].name << endl;
        legion1.push_back(heros[i]);
        legion2.push_back(heros[j]);
    }
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


