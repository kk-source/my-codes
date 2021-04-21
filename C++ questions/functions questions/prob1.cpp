#include <iostream>
#include <string>
using namespace std;

void sum (int n){
    cout << n*(n+1)/2;
}
int main(){
    int n;
    cout << "Enter N" << endl;
    cin >> n;
    sum (n);
    return 0;
}