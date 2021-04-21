#include <iostream>
#include <string>
using namespace std;

int main(){
    cout << "Enter the character\n";
    char ch;
    cin >> ch;
    if (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u'){
        cout << "The entered alphabet is vowel" << endl;
    }
    else {
        cout << "The entered alphabet is consonant" << endl;
    }

    return 0;
}