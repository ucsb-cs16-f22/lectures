// shapes.cpp
// lecture 7: 10.17.22
// Topics: Data Representation

#include <iostream>
using namespace std;

int main(){
    char a = 97;
    char b = 'a';
    int  c = 0b1010;
    int  d = 0xa1;
    char digit = '1';
    string dig = "1";
    // What is the output?
    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
    cout << d << endl;
    cout << "int(digit): " << int(digit) <<endl;
    cout << "stoi(digit): " << stoi(dig) << endl;

	return 0;
}
