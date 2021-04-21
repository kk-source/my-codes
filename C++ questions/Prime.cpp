#include <iostream>
#include <string>
using namespace std;

int main(){
    int a,b;
    cout << "Enter a and b" << endl;
    cin>>a>>b;

    for (int i=a; i<=b; i++){
        int j=2;
        for (;j<i;j++){
            if (i%j==0){
                break;
        }
        }
        if (j==i){
        cout << i << endl;
        }
    }

    return 0;
}