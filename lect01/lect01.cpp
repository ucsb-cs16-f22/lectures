#include <iostream> //for input and output- keyboard and terminal
using namespace std; // accept this!

int main() {//Program execution starts here
  cout << "We are leaving the safe shores of Python" << endl; // stream insertion operator
  // In C++ we need to declare variables before using them
 
  string first, last; 
  cout<<"What's your name? ";
  cin >> first; // use the stream extraction operator (>>) to get an input from the user
  
  // Use getline to read an entire line
  // string name;
  // cout<<"Enter your full name: ";
  // getline(cin, name);  //Reads a line

  cout << "Welcome " << first << "!" << endl;
  // cout << "Welcome " << first << " " << last << "!" << endl;
  
  int num, anothernum;
  cout << "Enter a number: ";
  cin >> num;
 
  // if the user inputs a string when a numeric type is expected cin will fail but the program won't crash!
  
  // For example if we were to enter "fortytwo" instead of  42 as the input value for num, cin would fail

  // Check if cin failed
  if(cin.fail()){
    cerr << "That's not a valid input" << endl;
    return 0;
  }

  // However, if the user inputs a floating point value (like 42.5) then 
  // cin won't fail, instead only the integer part is read into the variable num
  // and the fractional part (0.5) remains in the input buffer undigested!
  // cin won't take any new input unless you tell it to ignore what's in its buffer. 
  
  // To clear the buffer use cin.ignore

  cin.ignore(1000, '\n'); //throws away upto 1000 characters or everything until the new line character

  cout << "The answer to life is " << num * 2 << endl;
  
  cout << "Enter another number: ";
  cin >> anothernum;
  cout << "Well done!" << endl;

  return 0;
}
