// shapes.cpp
// lecture 5: 10.10.22
// Topics: Automating compilation - Makefiles
// Practice more with loops

#include <iostream>
#include <cassert>
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

string drawRect_1(int rows, int cols){
	string result = "";
	for(int i = 0; i < rows; i++){
		result += returnNstars(cols);
	}
	return result;
}


string drawRect(int rows, int cols){
	string result = "";
	for(int i = 0; i < rows; i++){
		for(int j = 0; j < cols; j++){
			result+="*";
		}
		result+="\n";
	}
	return result;
}

string drawArrow_0(int n){

	//top:  first n rows
	string result = "";
	for(int i = 0; i < n; i++){
		result += returnNstars(i+1);
	}
	//bottom: rest of the n-1 rows
	for(int i = 0; i < (n - 1); i++){
		result += returnNstars(n - 1 - i);
		// A. n-i
		// B. n - i - 1

	}

	return result;
}


string drawArrow_1(int n){

	//top:  first n rows
	string result = "";
	for(int i = 0; i < n; i++){
		result += returnNstars(i+1);
	}
	//bottom: rest of the n-1 rows
	for(int i = (n-1); i > 0; i--){
		result += returnNstars(i);
	}
	return result;
}

//Precondition: @param n is a positive integer
//Postcondition: return a string that looks like an arrow of size n
string drawArrow(int n){
	assert(n>0); 
	//top:  first n rows
	string result = "";
	for(int i = 0; i < n; i++){
		for(int j = 0; j<=i; j++){
			result+="*";
		}
		result+="\n";
	}
	//bottom: rest of the n-1 rows
	for(int i = 0; i < n - 1; i++){
		for(int j = 0; j < (n-1 - i) ; j++){
			result+="*";
		}
		result+="\n";
	}

	return result;
}



string drawArrow_3(int n){
	//iterate over the indices of a (2n-1 x n) matrix using a nested for loop
	//print the appropriate character (either a space or *) based on the row and column values
	
	return "42";
}


string drawmirroredC(int rows, int cols){
	string result = "";
	for(int i = 0; i < rows; i++){
		for(int j = 0; j < cols; j++){
			//if( i == 0 || i == (rows-1) || j == (cols - 1)){
			if( i%2 == 0 ){
				result+="*";
			}else{
				result+=" ";
			}
		}
		result+="\n";
	}
	return result;
}

int main(){
	cout << "drawRect(4, 5)" << endl;
 	cout << drawRect(4, 5);

	for(int i = 1; i < 10; i++){
		cout << "drawArrow(" << i << ")" << endl;
 		cout << drawArrow(i);
	}


	cout << "drawmirroredC(4, 5)" << endl;
 	cout << drawmirroredC(4, 5);

	return 0;
}
