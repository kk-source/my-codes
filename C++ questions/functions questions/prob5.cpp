#include <bits/stdc++.h>
using namespace std;

int hexaToDecimal(string n){
    int s=n.size();
    int ans=0;
    int j=1;
    for (int i=s-1;i>=0;i--){
        if (n[i]>='0' && n[i]<='9'){
            ans+=j*(n[i]-'0'); // -'0' because '0' is actually 48.
            j*=16;
        }
        else if (n[i]>='A' && n[i]<='F'){
            ans+=j*(n[i]-'A'+10); // +10 because A is 10
            j*=16;
        }
    }
    return ans;
}

int main(){
    string n;
    cout << "Enter N" << endl;
    cin >> n;
    cout << hexaToDecimal(n) << endl;
    return 0;
}