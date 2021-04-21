#include <iostream>
#include <string>
using namespace std;

int main(){
    int n;
    cout << "Enter N" << endl;
    cin >> n;
    int count =1;
    for (int i=1;i<=n;i++){
        for (int j=i;j>=1;j--){
            cout << count++ << " ";
        }
        cout << endl;
    }

    return 0;
}