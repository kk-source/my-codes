#include <iostream>
#include <string>
using namespace std;

void display(int a, float b, string name="singh"){
    cout << a << endl << b << endl << name << endl << endl;
}

int main(){
    display (12,3.34,"kartik");
    display (12, 14.33);

    return 0;
}   