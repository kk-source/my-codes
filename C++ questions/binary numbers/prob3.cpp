#include <iostream>
#include <string>
using namespace std;

int main(){
    int n;
    cout << "Enter N" << endl;
    cin >> n;
    int num=0,orig_num=n;
    while (n>0){
        int digit = n%10;
        cout << digit << endl;
        n=n/10;
        num+=digit*digit*digit;
    }
    if (orig_num==num){
        cout << "armstrong number" << endl;
    }
    else {
        cout << "not a armstrong number" << endl;
    }

    return 0;
}