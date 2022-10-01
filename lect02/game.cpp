// game.cpp
// Diba Mirza
#include <iostream>
#include <time.h>
using namespace std;


int generate_num(); // function declaration
string check_match(int, int);

int main(){
 	int guess, actual;	
	string result;
	// Read a number as input
	cout << "Guess a number from 1 to 10: ";
	cin >> guess;
	// Seed the pseudorandom number generator
	// - this ensures that calls to rand() don't return the same sequence of numbers each time
	srand(time(NULL));
	
	// Generate a random number
	actual = generate_num(); // function call
	
	while(true){
		// Check if the two numbers match and store the result 
		result = check_match(guess, actual);
		// Print the result
		cout << result;
		if( result ==  "Yay! You won!\n"){
			break;
		}
		cin >> guess ;
	}
	
	cout << "Computer picked " << actual << endl;
	return 0;
}

int generate_num(){
	// function definition
	return rand() % 10 + 1;
}
string check_match(int guess, int actual){
	if (guess == actual){
		return "Yay! You won!\n";
	} else if(guess < actual){
		return "Go higher\n";
	} else {
		return "Go lower\n";
	}

}
