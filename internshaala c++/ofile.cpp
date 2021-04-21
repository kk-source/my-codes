#include <iostream>
#include<fstream>
using namespace std;

int main(){
ofstream oFile;
oFile.open("my-note.txt");
oFile << "Hi! " << endl;
oFile << "I love to travel.\n";
oFile << "I am " << 25 << " years old."; // similarly other data types can also be printed.
oFile.close();
    return 0;
}