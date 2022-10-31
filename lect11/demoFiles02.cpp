// demoFiles02.cpp
// Structs to declare custom type
#include<iostream>
#include<time.h>
#include<sstream>
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


// int main(int argc, char const *argv[])
// {
//     srand(time(NULL));
//     superhero s1 = {"Spiderman", 88, 50, 100};
//     superhero s2 = {"Catwoman", rand() % 100 + 1, rand() % 100 + 1, rand() % 100 + 1};

//     cout << "Spiderman vs Catwoman " << endl;
//     cout << "Is smarter ? "  << std::boolalpha << isSmarter(s1, s2 ) << endl; // pass by value
//     cout << "Is stronger ? " << std::boolalpha << isStronger(s1, s2) << endl; // pass by reference
//     cout << "Is smarter ? "  << std::boolalpha << isSmarter(s1, s2 ) << endl; // pass by value
//     cout << "Is faster ? "   << std::boolalpha << isFaster(&s1, &s2 ) << endl; // pass by address

//     cout << toString(s1) << endl;
//     cout << toString(s2) << endl;


//     return 0;
// }


