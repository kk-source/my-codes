#include <bits/stdc++.h>
using namespace std;

string decimalToHexa(int n){
    string ans;
    while (n!=0){
        int i=n%16;
        if (n<=9){
            ans +=to_string(i);
            n=n/16;
    }
    else {
        char c='A' + i -10;
        ans.push_back(c);
        // ans = ans + to_string(c); // not possible because c will be evaluated as integer. 
        n=n/16;
    }
    }
    // to reverse the ans string.
    int s=ans.size();
    for (int i=0;i<s/2;i++){
        int temp=ans[i];
        ans[i]=ans[s-i-1];
        ans[s-i-1]=temp;
    }
    return ans;
}
int main(){
    int n;
    cout << "Enter N" << endl;
    cin >> n;
    cout << decimalToHexa(n);

    return 0;
}