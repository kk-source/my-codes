#include <iostream>
#include <string>
using namespace std;

int main(){
    int n;
    cout << "Enter N" << endl;
    cin >> n;
    for (int i=1;i<=n;i++){
        for (int j=1;j<=2*n;j++){
            if (j>=i+1 && j<=2*n-i){
                cout << " ";
            }
            else {
                cout << "*";
            }
        }
        cout << endl;
    }
    for (int i=n;i>=1;i--){
        for (int j=1;j<=2*n;j++){
            if (j>=i+1 && j<=2*n-i){
                cout << " ";
            }
            else {
                cout << "*";
            }
        }
        cout << endl;
    }

    return 0;
}