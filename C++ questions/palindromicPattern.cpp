#include <iostream>
#include <string>
using namespace std;

int main(){
    int n;
    cout << "Enter N" << endl;
    cin >> n;
    for (int i=1;i<=n;i++){
        for (int k=1;k<=n-i;k++){
            cout << " ";
        }
        for (int j=1;j<=n-i;j++){
            cout << " ";
        }
        for (int j=i;j>=1;j--){
            cout << j  << " ";
        }
        for (int j=2;j<=i;j++){
            cout << j << " ";
        }
        cout << endl ;
    }
    return 0;
}