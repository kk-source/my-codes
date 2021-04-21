#include <iostream>
using namespace std;

int binaryToDecimal(int n){
    int i=1;
    int ans=0;
    while (n!=0){
        ans+=i*(n%10);
        n=n/10;
        i*=2;
    }
    return ans;
}
int main(){
    int n;
    cout << "Enter N" << endl;
    cin >> n;
    cout << binaryToDecimal(n);
    return 0;
}