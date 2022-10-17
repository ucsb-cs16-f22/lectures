//swap.cpp
#include <iostream>
using namespace std;

// Precondition: x and y point to two integers
// Postcondition: The values pointed to by x and y are swapped
void swap(int* x, int* y){
    cout << "x: " << x << " y: " << y << endl;   
    int tmp = *x;
    *x = *y;
    *y = tmp;
}

int main(int argc, char const *argv[])
{
    int a = 30, b = 40;  
    cout << "&a: " << &a << " &b: " << &b << endl; 
    cout << "a = " << a << endl;  //A. 30 B. 70
    int *q = nullptr, *w = nullptr;

    //int* q = nullptr;
    //int* w = nullptr

    q = &a;
    w = &b;
    swap (&a, &b);
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
