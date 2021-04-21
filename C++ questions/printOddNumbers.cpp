#include <iostream>
#include <string>
using namespace std;

int main(){
    int n;
    cout << "Enter N" << endl;
    cin >> n;
    for(int i=1;i<=n;i++){
        if (i%2==1){
            cout << i << endl;
        }
        else {
            continue;
        }
    }

    return 0;
}