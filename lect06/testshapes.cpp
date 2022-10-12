//test_shapes.cpp
//#include "shapes.cpp"
#include "shapes.h"
#include <iostream>
#include <cassert>
using namespace std;
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