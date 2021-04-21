#include <iostream>
#include <string>
using namespace std;
int decimalToOctal(int n){
    int ans=0;
    int j=1;
    while (n!=0){
        int i=n%8;
        ans+=j*i;
        n=n/8;
        j*=10;
    }
    return ans;
}

int main(){
    int n;
    cout << "Enter N" << endl;
    cin >> n;
    cout << decimalToOctal(n);

    return 0;
}