#include <iostream>
#include <string>
using namespace std;

int main(){
    int n;
    cout << "Enter N" << endl;
    cin >> n;
    int fac=1;
    for (int i=1;i<=n;i++){
        fac*=i;
    }
    cout << fac << endl;

    return 0;
}