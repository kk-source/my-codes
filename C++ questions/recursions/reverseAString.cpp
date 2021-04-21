#include <iostream>
#include <string>
using namespace std;
void reversemine(string name,int n,int i){
    if (i==n){
        return;
    }
    reversemine(name,5,i+1);
    cout << name[i];
}
void reverse (string s){
    if (s.length()==0){
        return;
    }
    string ros=s.substr(1);
    reverse(ros);
    cout << s[0];
}
int main(){
    string name="binod";
    reversemine(name,5,0);
    cout << endl;
    reverse(name);
    return 0;
}