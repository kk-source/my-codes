#include <iostream>
// #include <string>
using namespace std;
int main(){

    int year;
    float gdp;
    char dollar;
    string name;

    cout << "Enter the year.\n";
    cin >> year;

    cout << "Enter the GDP value.\n";
    cin >> gdp;

    cout << "Enter the symbol.\n";
    cin >> dollar;

    cout << "Enter the country name.\n";
    cin >> name;

    cout << "As economic reforms picked up the pace, " << name << "'s GDP grew five-fold to reach"
    " US" << dollar << gdp << "trillion in " << year << " (as per IMF estimaes).";

    return 0;
}