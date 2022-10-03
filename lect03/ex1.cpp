// ex1.cpp
// 10-3-22
#include <iostream>
using namespace std;

int main(){
	// Which code snippet prints Hello 4 times? 
	// Choose E if code has a compile time error i
	// because variable i is declared multiple times
	
	// Code A
	for(int i = 0; i < 5; i++){
		cout << "Hello ";
	}
	cout << endl;

	// Code B
	for(int i = 1; i < 5; i++){
		cout << "Hello ";
	}
	cout << endl;
    
	// Code C
	for(int i = 2; i < 9; i++){
		cout << "Hello ";
	}
	cout << endl;
	
	// Code D
	for(int i = 6; i > 0; i--){
		cout << "Hello ";
	}
	cout << endl;

	return 0;
}
