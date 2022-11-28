//recarrays.cpp
#include <iostream>
using namespace std;

// given an array and a value, return the index of
// the element with that value  (if the value exists
// in the array), otherwise, return -1
int linear_search(int arr[], int value, int lo, int hi ){
   return -1;
}



void test_linear_search(){
   int arr[]={10, 20, 30, 40, 50, 60, 88, 100};
   int len = sizeof(arr)/sizeof(int);
   cout << "linear_search(arr, 40, 0, 7 ) " << endl;
   cout << "\tExpected: -1 , Actual: ";
   cout << boolalpha << linear_search(arr, 40, 0, len - 1 )<<endl;
   
   cout << "linear_search(arr, 101, 0, 7 ): " << endl;
   cout << "\tExpected: -1 , Actual: ";
   cout<< linear_search(arr, 101, 0, len - 1 )<<endl;


   cout << "linear_search(arr, 44, 0, 7 ): " << endl;
   cout << "\tExpected: -1 , Actual: ";
   cout<< linear_search(arr, 44, 0, len - 1 )<<endl;
   
   cout << "linear_search(arr, 88, 0, 7 ): " << endl;
   cout << "\tExpected: -1 , Actual: ";
   cout<< linear_search(arr, 88, 0, len - 1 )<<endl;

}



// given an array and a value, return the index of
// the element with that value  (if the value exists
// in the array), otherwise, return -1
int binary_search(int arr[], int value, int lo, int hi ){
   return -1;
}


void test_binary_search(){
   int arr[]={10, 20, 30, 40, 50, 60, 88, 100};
   int len = sizeof(arr)/sizeof(int);
   cout << "binary_search(arr, 40, 0, 7 ) " << endl;
   cout << "\tExpected: -1 , Actual: ";
   cout << boolalpha << binary_search(arr, 40, 0, len - 1 )<<endl;
   
   cout << "binary_search(arr, 101, 0, 7 ): " << endl;
   cout << "\tExpected: -1 , Actual: ";
   cout<< binary_search(arr, 101, 0, len - 1 )<<endl;


   cout << "binary_search(arr, 44, 0, 7 ): " << endl;
   cout << "\tExpected: -1 , Actual: ";
   cout<< binary_search(arr, 44, 0, len - 1 )<<endl;
   
   cout << "binary_search(arr, 88, 0, 7 ): " << endl;
   cout << "\tExpected: -1 , Actual: ";
   cout<< binary_search(arr, 88, 0, len - 1 )<<endl;

}



int main(){
  
   
   return 0;
}