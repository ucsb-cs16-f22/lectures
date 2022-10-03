// drawRectangle_v1.cpp
// 10-3-22
#include <iostream>
using namespace std;
void printNstars(int n){
	for(int i = 0; i < n; i++){
		cout << "*";
	}
	cout << endl;

}
// We have hard coded the value 4
void print4stars(){
	for(int i = 0; i < 4; i++){
		cout << "*";
	}
	cout << endl;

}

int main(){
	// print one row of 4 stars : Repeat 3 times
	print4stars();
	print4stars();
	print4stars();
	
	cout<<" Another version" << endl;
	int rows = 4;
	int cols = 5;
	for(int i = 0; i < rows; i++){
		printNstars(cols);
	}

	return 0;
}
