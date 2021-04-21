#include <iostream>
#include <string>
using namespace std;

int main(){
    int n;
    cout << "Enter N" << endl;
    cin >> n;
    for (int i=1;i<=n;i++){
        for (int j=1;j<=n-i;j++){
            cout << " ";
        }
        for (int j=1;j<=n;j++){
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}