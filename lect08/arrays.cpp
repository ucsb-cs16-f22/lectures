//arrays.cpp
#include<iostream>
#include<iomanip>
using namespace std;

double maxScore(double* sc, int len){
    cout << "In maxScore: "<<endl;
    cout << "Size of sc: " << sizeof(sc) <<endl;
    cout << "Size of double "<< sizeof(double) << endl;
    double maxscore = sc[0];
    for (int i = 0; i < len; i++){
        if ( *(sc + i) > maxscore){ //pointer arithmetic
            maxscore = *(sc + i);
        }
    }
    cout << "In maxScore: " << endl;
    for (int i = 0; i < len; i++){
        cout << "sc["<< i <<"] " << setw(3) << sc[i] << " is at location: " << &(sc[i]) << endl;
    }
    return maxscore;
}

void print2D(double (* mat2D)[2], int row, int col){
cout <<" In print2D"<<endl;
    for (int i = 0; i < 3; i++){
        for(int j = 0; j < 2; j++){
            cout << "mat2D["<< i <<"]["<< j <<"]" << setw(3)<< mat2D[i][j] << " is at location: " << &(mat2D[i][j]) << endl;
        }
    }

}

int main(int argc, char const *argv[])
{
    double scores[]={95, 50, 100, 75};
    double mat2D[3][2]={ {10, 20}, {30, 40} , {50, 60} };
    double(* p)[2] = mat2D;

    cout << "In main:" << endl;
    cout << "Base address of scores: "<< scores << endl;
    cout << "Size of scores: " << sizeof(scores) <<endl;
    int len = sizeof(scores)/sizeof(double);
    cout << "Max score is: " << maxScore(scores, len)<<endl;
    cout << "In main: " << endl;
    for (int i = 0; i < len; i++){
        cout << "scores["<< i <<"] " << setw(3)<< scores[i] << " is at location: " << &(scores[i]) << endl;
    }
    for (int i = 0; i < 3; i++){
        for(int j = 0; j < 2; j++){
            cout << "mat2D["<< i <<"]["<< j <<"]" << setw(3)<< mat2D[i][j] << " is at location: " << &(mat2D[i][j]) << endl;
        }
    }
    print2D(mat2D, 3, 2);

    return 0;
}

