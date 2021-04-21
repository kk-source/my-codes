#include <iostream>
#include <string>
using namespace std;

int main(){
    int n;
    int num=0;
    cout << "Enter N" << endl;
    cin >> n;
    for (int i=1;i<=n;i++){
        for (int j=1;j<=i;j++){
            cout << ++num << " ";
        }
        cout << endl;
    }

    return 0;
}