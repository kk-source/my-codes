#include <iostream>
#include <string>
using namespace std;

int main(){
    int n,m;
    cout << "Enter the number of rows" << endl;
    cin >> n;
    cout << "Enter the number of rows" << endl;
    cin >> m;
    for (int i=1;i<=n;i++){
        for (int j=1;j<=m;j++){
            if (i==1 || i==n){
                cout << "*";
            }
            else {
                if (j==1 || j==m){
                    cout << "*" ;
                }
                else {
                    cout << " ";
                }
            }
        }
        cout << endl;
    }

    return 0;
}