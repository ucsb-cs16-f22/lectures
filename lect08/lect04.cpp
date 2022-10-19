//prog.cpp
#include<iostream>
using namespace std;

void printArray(int evens[]){
    cout << "Print evens using cool c++11 notation" << endl;
    for (auto elem : evens){
        cout << elem << endl;
    }
}

#define SIZE_NUMS 5 
int main()
{
    int nums[SIZE_NUMS]; // uninitialized
                 // lead to undefined behavior
  
    int fivezeros[SIZE_NUMS] ={0}; 
    int evens[] = {2, 6, 8, 10}; // 4 elements
    char sb[] = "Santa Barbara"; // C string
    char la[] = "Los Angeles";
    char* cities[] = {sb, la};
    string places[] = {sb, la};
    //string places[] = {"India", "US", "UCSB"};

    cout << nums << endl; // Wrong way of printing an array
    cout << "Print nums " << endl;
    for (int i = 0; i < SIZE_NUMS; i++){
        cout << "nums[" << i << "]" << " = " 
             << nums[i] << endl;
    }

    // cout << "Print evens " << endl;
    // for (int i = 0; i < 5000; i++){ // out of bound access - undefined behavior
    //     cout << "evens[" << i << "]" << " = " 
    //          << evens[i] << endl;
    // }

   printArray(evens);

    cout << "Print cities" << endl;
    for (auto elem : cities){
        cout << elem << endl;
    }
    cout<<endl <<endl;

    cout << "Print places" << endl;
    for (auto elem : places){
        cout << elem << endl;
    }
    // char s1[] = "Mark";
    // char s2[] = "Jill";
    // for (int i = 0; i <= 4; i++)
    // s2[i] = s1[i];
    // if (s1 == s2) cout << "Art";
    // cout<<s1<<" "<<s2<<endl;

    return 0;
}
