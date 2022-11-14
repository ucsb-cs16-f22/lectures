//dynamic_memory.cpp
#include <iostream>
using namespace std;
int getInt(){
	int x = 5;
	return x;
}
int* getAddressOfInt(){
	int x = 10;
	return &x;
}
int main(){
     int y = 0, *p = nullptr, z = 0;
     y = getInt();
     p = getAddressOfInt();
     z = *p;
    cout << y << ", " << z << ", " << *p << endl;
}