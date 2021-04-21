#include <iostream>
#include <string>
using namespace std;

int main(){
    int n;
    cout << "Enter N" << endl;
    cin >> n;
    for (int i=1;i<=n;i++){
        int count =i ;
        for (int j=1;j<=n+i-1;j++){
            if (j<=n-i){
                cout << "  ";
            }
            else if (j<n){
                cout << count-- << " ";
            }
            else {
                cout << count++ << " ";
            }
    }
    cout << endl;
    }

    return 0;
}