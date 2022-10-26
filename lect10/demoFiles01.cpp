// demoFiles01.cpp
// Basic file processing
// Source for Marvel Superheros dataset: https://www.kaggle.com/datasets/dannielr/marvel-superheroes
#include<iostream>
#include<fstream>

using namespace std;
int main(int argc, char const *argv[])
{

    if(argc != 2){
        cerr << "Usage is "<< argv[0] << " filename" << endl;
        return 1;
    }
    ifstream ifs(argv[1]); // If we want to read from file
                                       // open the file 
    //ofstream ofs; // If you want to write to file

    if(!ifs){ //if(ifs.fail())
        cerr << "Open failed "<<endl;
        return 1;
    }
    string line;
    getline(ifs, line);
    cout << line << endl;
    int count = 0;
    while(getline(ifs, line)){
        cout << line << endl;
        count++;
    }

    cout << "No. of superheros is "<< count << endl;

    ifs.close();
    // ifs.open("small_dataset.csv");
    // getline(ifs, line);
    // cout << line << endl;


    return 0;
}


