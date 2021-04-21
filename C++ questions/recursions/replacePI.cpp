#include <iostream>
#include <string>
using namespace std;
void replace(string s){
    if (s.length()==0){
        return;
    }
    string temp;
    if (s[0]=='p' && s[1]=='i'){
        cout << "3.14";
        temp=s.erase(0,2);
    }
    else {
        cout << s[0];
        temp=s.erase(0,1);
    }
    replace(temp);
}
int main(){
    string arr="pippxxppiixipi";
    replace(arr);
    return 0;
}