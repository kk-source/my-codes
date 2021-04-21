#include <iostream>
#include <string>
using namespace std;

int main(){
    int n;
    cout << "Enter N" << endl;
    cin >> n;
    int fib=0,a=0,b=1;

    for (int i=1;i<=n;i++){
    if (i==1){
        cout << a << " ";
    }
    else if (i==2){
        cout << b << " ";
    }
    else {
        fib =a+b;
        cout << fib << " ";
        a=b;
        b=fib;
        
    }
    }
    
    return 0;
}

