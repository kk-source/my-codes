#include <iostream>
#include <string>
using namespace std;

void check (int a,int b,int c){
    int i;
    for (i=1;i<=3;i++){
        if (a*a==b*b+c*c){
            cout << "pythagorean triplet." << endl;
            break;
        }
        int temp=a;
        a=c;
        c=b;
        b=temp;
    }
    if (i==4){
        cout << "non-pythagorean triplet" << endl;
    }
}

int main(){
    int a,b,c;
    cout << "Enter a,b,c" << endl;
    cin >> a >> b >> c;
    check(a,b,c);
    return 0;
}