#include <iostream>
#include <string>
using namespace std;
int decimalToBinary(int n){
    int ans=0;
    int j=1;
    while (n!=0){
        int i=n%2;
        ans+=j*i;
        n=n/2;
        j*=10;
    }
    return ans;
}

int main(){
    int n;
    cout << "Enter N" << endl;
    cin >> n;
    cout << decimalToBinary(n);

    return 0;
}