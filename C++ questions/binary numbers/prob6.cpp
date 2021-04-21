#include <iostream>
#include <string>
using namespace std;

int main(){
    int n,num=0;
    cout << "Enter N" << endl;
    cin >> n;
    while (n!=0){
        int rem=n%10;
        num=num*10+rem;
        n=n/10;
    }
    cout << num;

    return 0;
}