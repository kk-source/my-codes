#include <iostream>
#include <string>
using namespace std;
void removeDuplictes(string s){
    if (s.length()==0){
        return;
    }
    if (s[0]==s[1]){
        s.erase(0,1);
    }
    else{
        cout << s[0];
        s.erase(0,1);
    }
    removeDuplictes(s);
}
int main(){
    string s="aaaaabbbeeecdddd";
    removeDuplictes(s);

    return 0;
}