//vectors.cpp
#include<iostream>
#include<iomanip>
#include<vector>
#include<cstring>
using namespace std;

double maxScore(vector <double>& sc){
    cout << "In maxScore: "<<endl;
    // cout << "Size of sc: " << sizeof(sc) <<endl;
    // cout << "Size of double "<< sizeof(double) << endl;
    double maxscore = sc[0];
    for (int i = 0; i < sc.size(); i++){
        if ( sc[i] > maxscore){ //pointer arithmetic
            maxscore = sc[i];
        }
    }
    cout << "In maxScore: " << endl;
    for (double& elem : sc){
        cout << "Element " << setw(3) << elem << " is at location: " << &elem << endl;
    }
    return maxscore;
}

void print2D(vector<vector<double>>& mat2D){
cout <<" In print2D"<<endl;
    for (auto& row : mat2D){
        for(auto& elem : row){
            cout << "Element: " << setw(3)<< elem << " is at location: " << &(elem) << endl;
        }
    }
}

int main(int argc, char const **argv)
{
    char somearray[]= {'U', 'C', 'S', 'B', '\0'}; //char crray
    cout << (int*)(argv[1]) <<endl;
    char sb[] = "UCSB"; // C string
    string s = "UCSB";
    char la[] = "Los Angeles";
    char* cities[] = {sb, la};
    cout << cities[0][4] <<endl;
    cout << strlen(sb) << endl;

    return 0;
}

