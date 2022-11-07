// ascii.cpp
// lecture 11
// Topics: Review of Data Representation

#include <iostream>
using namespace std;

int main(){
    char a = 97; 
    char b = 'a';
    int  c = 0b1010;
    int  d = 0xa1; //int d = 10*16 + 1*1 = 161
    char digit = '1';
    string dig = "1";
    char e = -1; // 0b11111111
    // 0x10a5 to binary:         0b0001 0000 1010 0101
    // 0b10 0100 1001  to hex:       0x249
    // What is the output?
    cout << a << endl;  // 'a'  // 97 or something else
    cout << b << endl; // 'a'
    cout << c << endl; // 10
    cout << d << endl; // 161
    cout << hex << int(e) << endl; // 0xffffffff           
    cout << "int(digit): " << int(digit) <<endl; //A. 1  B. something else
    cout << "stoi(digit): " << stoi(dig) << endl;

	return 0;
}
