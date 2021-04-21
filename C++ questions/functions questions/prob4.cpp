#include <iostream>
#include <string>
using namespace std;

int octalToDecimal(int n){
    int ans=0;
    int i=1;
    while(n!=0){
        ans+=i*(n%10);
        i*=8;
        n=n/10;
    }
    return ans;
}

int main(){
    int n;
    cout << "Enter N" << endl;
    cin >> n;
    cout << octalToDecimal(n);
    return 0;
}