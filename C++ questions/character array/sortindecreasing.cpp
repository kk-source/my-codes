#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    string s1="530214";
    sort(s1.begin(),s1.end(),greater<int>()); // to arrange into decreasing order
    
    cout << s1;

    return 0;
}