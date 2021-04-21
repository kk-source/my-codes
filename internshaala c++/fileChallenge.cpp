#include <iostream>
#include <fstream>
using namespace std;

int main(){
    ofstream ofile;
    ofile.open("Challenge.txt");
    ofile << "My name is Rahul." << endl << "I am 20 years old." << endl;
    ofile.close();

    ifstream ifile;
    ifile.open("Challenge.txt");
        string str;
    while (!ifile.eof()){
        getline(ifile,str);
        cout << str << endl;
    }
    ifile.close();
    return 0;
}