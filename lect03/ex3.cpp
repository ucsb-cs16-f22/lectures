// ex3.cpp
// 10-3-22
#include <iostream>
using namespace std;

int main(){
	// Which code results in an infinite loop? 
	// Choose E for "all of them"	

	// Code A
	int j = 0
	for(; j < 5; j++){
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
