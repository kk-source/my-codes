#include <iostream>
#include <string>
using namespace std;

int main(){
    int n;
    cout << "Enter N" << endl;
    cin >> n;
    while(n!=0){
        int digit=n%10;
        cout << digit << endl;
        n=n/10;
    }

    return 0;
}