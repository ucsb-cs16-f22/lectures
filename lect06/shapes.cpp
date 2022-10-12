// shapes.cpp
// lecture 6: 10.12.22
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


// This is a linker error that shows up because shape.cpp does not  contain a main()
// dibamirza@panther lect06 % g++ shapes.cpp
// Undefined symbols for architecture arm64:
//   "_main", referenced from:
//      implicit entry/start for main executable
// ld: symbol(s) not found for architecture arm64
// clang: error: linker command failed with exit code 1 (use -v to see invocation)

//g++ -c shapes.cpp
// dibamirza@panther lect06 % ls
// Makefile        shapes.cpp      shapes.o        testshapes.cpp
// >>shapes.o is a object file
