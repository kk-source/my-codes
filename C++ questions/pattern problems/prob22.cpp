#include <iostream>
#include <string>
using namespace std;

int main(){
    int n;
    cout << "Enter N" << endl;
    cin >> n;
    int count=1;
    for (int i=0;i<n;i++){
        for (int space=1;space<=n-i;space++){
            cout << "  ";
        }
        for (int j=0;j<=i;j++){
            if (j==0 || i==0){
                count=1;
            }
            else {
                count = count * (i-j+1)/j;
            }
            cout << count << "   ";
        }
        cout << endl;
    }
    return 0;
}