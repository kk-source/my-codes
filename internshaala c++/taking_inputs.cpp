#include <iostream>
#include<string>
using namespace std;
int main(){

    int a;
    char b;
    float c;
    string name;
    string name1;

    cout << "enter first name \n";
    cin >> name;


    cout << "enter your full name \n";
    getline(cin,name1);

    
    cout << "entered first name is " << name << "." << " entered full name is " << name1;


    cout << "enter character b\n";
    cin >> b;

    cout << "enter the value of a\n";
    cin >> a;
    
    
    cout << "enter any decimal value \n";
    cin >> c;

    cout << "entered value is " << a << " entered character is " << b << " entered decimal number is " << c;

    return 0;
}