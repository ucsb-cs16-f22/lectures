//vectors.cpp
#include<iostream>
#include<iomanip>
#include<vector>
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

int main(int argc, char const *argv[])
{
    vector<double> scores = {95, 50, 100, 75};
    vector<vector<double>> mat2D={ {10, 20}, {30, 40} , {50, 60} };
  

    cout << "In main:" << endl; 
    int len = scores.size();
    cout << "Max score is: " << maxScore(scores)<<endl;
    cout << "In main: " << endl;
    for (int i = 0; i < len; i++){
        cout << "scores["<< i <<"] " << setw(3)<< scores[i] << " is at location: " << &(scores[i]) << endl;
    }
    cout << "In main, mat2D:" << endl; 
    for (int i = 0; i < mat2D.size(); i++){
        for(int j = 0; j < mat2D[0].size(); j++){
            cout << "mat2D["<< i <<"]["<< j <<"]" << setw(3)<< mat2D[i][j] << " is at location: " << &(mat2D[i][j]) << endl;
        }
    }
    print2D(mat2D);

    char sb[] = "Santa Barbara"; // C string
    char la[] = "Los Angeles";
    char* cities[] = {sb, la};
    cout << cities[0][4] <<endl;

    return 0;
}

