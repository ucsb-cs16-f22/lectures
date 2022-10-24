//swap.cpp
#include <iostream>
using namespace std;

// Precondition: x and y are references to integers
// Postcondition: The values pointed to by x and y are swapped
void swap(int& x, int& y){
    cout << "x: " << x << " y: " << y << endl;   
    int tmp = x;
    x = y;
    y = tmp;
}

int main(int argc, char const *argv[])
{
    int a = 30, b = 40;  
    swap (a, b);
    //swap(q,  w);
    cout << a << "  " << b << endl;
    // int* q = nullptr;  
    // int* p = &a;
    // cout << "p = " << p << endl;
    // cout << "&p = " << &p << endl;
    // cout << "*p = " << *p << endl;
    // *p = 70;
    return 0;
}
