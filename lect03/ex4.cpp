// ex4.cpp
// 10-3-22
#include <iostream>
using namespace std;

int main(){
	// Which code prints 2 4 6 8 ? 
	// Choose E for "None of them"
 
	// Code A
	int j = 0;
	for(; j < 5; j++){
		cout << j << " ";
	}
	cout << endl;

	// Code B
	for(int i = 1 ; i < 5 ; i++){
		cout << j*2 << " ";
	}
	cout << endl;

	// Code C
	for(int i = 0; i < 5; i++){
		cout << (i + 1) * 2 << " ";
	}
	cout << endl;

	// Code D
	for(int i = 5; i > 0; i--){
		cout << i*2 << " ";
	}
	cout << endl;

	return 0;
}
