//recarrays.cpp
#include <iostream>
using namespace std;




bool linear_search(int arr[], int len, int value){
   // Base case(s): simplest case(s)
   if(len == 0){
      return false;
   }
   // To find if an element exists in an array
   //  check if it matches the first element
   //  if not, find the element in the rest of the array
   if(arr[0] == value){
      return true;
   } else{
      return linear_search(arr + 1, len - 1, value);
   }
}

// given an array and a value, return the index of
// the element with that value  (if the value exists
// in the array), otherwise, return -1
// arr: 1 5 6 7 10, value 6, return  2
// arr: 1 5 6 7 10, value 60, return  -1

int linear_search(int arr[], int value, int start, int end ){
   if(end < start){ //empty array
      return -1;
   }
   if(arr[start] == value){
      return start;
   }
   return linear_search(arr, value, start + 1, end);

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
   if(hi < lo){
      return -1;
   }
   int mid = ( lo + hi )/2;
   if( value == arr[mid]){
      return mid;
   }
   if(value < arr[mid]){
      // search in the left half of the array
      //  hi = mid - 1;
      return binary_search(arr, value, lo, mid - 1);
   }else{
      //search in the right half of the array
      //lo = mid + 1;
      return binary_search(arr, value, mid + 1, hi);
   }
   //return binary_search(arr, value, lo, hi);
  
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