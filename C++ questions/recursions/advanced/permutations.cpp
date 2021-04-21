#include <iostream>
#include <string>
using namespace std;

void perm(string s, string p){
    if (s.length()==0){
        cout << p << endl;
        return;
    }
    for (int i=0;i<s.size();i++){
        string ros=s; // or use ros=s.substr(0,i)+s.substr(i+1);
        perm(ros.erase(i,1), p+s[i]);
    }
}
int main(){
    perm("AB", "");

    return 0;
}