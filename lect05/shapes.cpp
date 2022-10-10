// shapes.cpp
// lecture 5: 10.10.22

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

string drawRect(int rows, int cols){
	string result = "";
	for(int i = 0; i < rows; i++){
		result += returnNstars(cols);
	}
	return result;
}

int main(){
	cout << " Draw a rectangle" << endl;
 	cout << drawRect(4, 5);

	return 0;
}
