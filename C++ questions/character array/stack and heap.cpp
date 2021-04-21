#include <iostream>
#include <string>
using namespace std;

int main(){
    int *p=new int();
    *p=2;
    cout << p << endl;
    cout << *p << endl;
    delete[]p;
    // p=NULL;
    cout << p << endl;
    cout << *p << endl;
    p=new int[2];
    p[0]=0;
    p[1]=1;
    p[2]=2;
    p[3]=3;
    p[4]=4;
    for (int i=0;i<5;i++){
        cout << p[i] << endl;
    }
    return 0;
}