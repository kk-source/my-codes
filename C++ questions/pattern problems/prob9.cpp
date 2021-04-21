#include <iostream>
#include <string>
using namespace std;

int main(){
    int n;
    cout << "Enter N" << endl;
    cin >> n;
    for (int i=1;i<=n;i++){
        for (int j=n-i+1;j>=1;j--){
            cout << i << " ";
        }
        cout << endl;
    }

    return 0;
}