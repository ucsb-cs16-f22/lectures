// //shapes.h
#ifndef SHAPES_H
#define SHAPES_H

#include <iostream>
#include <cassert>
using namespace std;
string returnNstars(int n); //declaration
string drawRect_1(int rows, int cols);
string drawRect(int rows, int cols);
string drawArrow_0(int n);
string drawArrow_1(int n);
//Precondition: @param n is a positive integer
//Postcondition: return a string that looks like an arrow of size n
string drawArrow(int n);
string drawArrow_3(int n);
string drawmirroredC(int rows, int cols);
int x = 10;
#endif