//test_shapes.cpp
//#include "shapes.cpp"
#include "shapes.h"
#include "shapes.h"
#include <iostream>
#include <cassert>
using namespace std;

int main(int argc, char* argv[]){

    if(argc !=2){
        cerr << "Usage: "<< argv[0] << "number"<<endl;
        return 0;
    }

 	cout << drawArrow(stoi(argv[1]));

	return 0;
}