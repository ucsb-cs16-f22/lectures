// prog.cpp
// command to compile C++11 programs
// g++ -std=c++11 prog_main.cpp -o prog


#include<iostream>
using namespace std;

#define SIZE_NUMS 5 
int main(int argc, char* argv[])
{

    char sb[] = "Santa Barbara"; // C string
    char la[] = "Los Angeles";
    char* cities[] = {sb, la};
    string places[] = {sb, la};
    //string places[] = {"India", "US", "UCSB"};
 
    cout << "Printing the input params to main "<< endl;
    for (int i = 0; i < argc; i++){
        cout << argv[i] <<endl;
    }

    cout << " Agent ID is "<<atoi(argv[2]) + 1 << endl;




    return 0;
}
