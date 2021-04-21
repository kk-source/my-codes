#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){ 
    // Using constructors
    // ofstream kk("sample60.txt");
    // int a=2;
    // kk << "my name is kartik " << a; // writes this into the file.
    // kk.close();
    // ifstream kkk("sample60.txt");
    // string output;
    // getline(kkk, output); // takes one complete line from file.
    // kkk >> output; // takes only a word from file.
    // cout << output ;
    // kkk.close();
    // Using open() class
    ofstream kk;
    int a=2;
    kk.open("sample60.txt");
    kk << "my name is kartik " << a; // writes this into the file.
    kk.close();
    ifstream kkk("sample60.txt");
    string output;
    getline(kkk, output); // takes one complete line from file.
    kkk >> output; // takes only a word from file.
    cout << output ;
    kkk.close();
}