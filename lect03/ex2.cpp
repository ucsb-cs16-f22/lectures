// ex2.cpp
// 10-3-22
#include <iostream>
using namespace std;

int main(){
	// Which code has a compile-time error? 
	// Choose E for "all of them"	

	// Code A
	for(; i < 5; i++){
		cout << "Hello ";
	}
	cout << endl;

	// Code B
	for(int i = 0 ; ; i++){
		cout << "Hello ";
	}
	cout << endl;

	// Code C
	for(int i = 0; i < 5;){
		cout << "Hello ";
		i++;
	}
	cout << endl;

	// Code D
	for(int i = 5; i > 0; i++){
		cout << "Hello ";
	}
	cout << endl;

	return 0;
}
