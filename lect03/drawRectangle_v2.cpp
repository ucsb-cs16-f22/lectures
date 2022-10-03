// drawRectangle_v2.cpp
// 10-3-22
#include <iostream>
using namespace std;
string returnNstars(int n){
	string result = "";
	for(int i = 0; i < n; i++){
		result+="*";
	}
	result += "\n";
	return result;

}
// We have hard coded the value 4
string return4stars(){
	//return  "****\n";
	// Accumulator pattern
	string result = "";
	for(int i = 0; i < 4; i++){
		result += "*";
	}
	result += "\n";
	return result;

}

int main(){
	// print one row of 4 stars : Repeat 3 times
	cout << return4stars();
	cout << return4stars();
	cout << return4stars();
	
//	cout<<" Another version" << endl;
//	int rows = 4;
//	int cols = 5;
//	for(int i = 0; i < rows; i++){
//		printNstars(cols);
//	}

	return 0;
}
