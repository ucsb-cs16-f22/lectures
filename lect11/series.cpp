// series.cpp
// 1 - 1/2 + 1/3 - 1/4  + ....
#include<iostream>
using namespace std;
double series(int n){
    double result = 0;
    for(int i = 1; i <=n; i++ ){
        if(i%2 == 1){
            result+= (1/double(i));
        }else{
            result-= (1/double(i));
        }
    }
    return result;
}


int main(int argc, char const *argv[])
{
    /* code */
    cout<<series(1) << endl;
    cout<<series(2) << endl;
    cout<<series(3) << endl;
    cout<<series(4) << endl;
    return 0;
}
