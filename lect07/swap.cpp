//swap.cpp
#include <iostream>
using namespace std;

void swap(int x, int y){
    int tmp = x;
    x = y;
    y = tmp;
}

int main(int argc, char const *argv[])
{
    int a = 30, b = 40;      
    swap(a,  b);
    cout << a << "  " << b << endl;
    return 0;
}
