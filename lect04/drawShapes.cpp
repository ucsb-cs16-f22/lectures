// drawShapes.cpp
// 10.5.22
#include <iostream>
using namespace std;
string returnNstars(int n){
	// Accumulator pattern
	string result = "";
	for(int i = 0; i < n; i++){
		result+="*";
	}
	result += "\n";
	return result;

}

string drawRectOfStars(int rows, int cols){
	result = "";
	for(int i = 0; i < rows; i++){
		result += returnNstars(cols);
	}
	return result;
}

int main(){
	cout << " Draw a rectangle" << endl;
 	cout << drawRectOfStars(4, 5);

	return 0;
}
