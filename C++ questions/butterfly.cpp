#include <iostream>
#include <string>
using namespace std;

int main(){
    int n;
    cout << "Enter N" << endl;
    cin >> n;
//     for (int i=1;i<=2*n;i++){
//         if (i<=n){
//             for (int j=1;j<=2*n;j++){
//             if (j<=i || j>2*n-i){
//             cout << "*";
//             }
//             else {
//                 cout << " ";
//             }
//         }
//         cout << endl;
//         }
//         else { // replace i by 2*n-i+1 in above if condition.
//             for (int j=1;j<=2*n;j++){
//             if (j<=2*n-i+1 || j>i-1){
//             cout << "*";
//             }
//             else {
//                 cout << " ";
//             }
//         }
//         cout << endl;
//         }
// }
// better way to printf butterfly structure.
for (int i=1;i<=n;i++){
    for (int j=1;j<=i;j++){
        cout << "*";
    }
    int space = 2*n-2*i;
    for (int j=1;j<=space;j++){
        cout << " ";
    }
    for (int j=1;j<=i;j++){
        cout << "*";
    }
    cout << endl;
}
for (int i=n;i>=1;i-- ){
    for (int j=1;j<=i;j++){
        cout << "*";
    }
    int space = 2*n-2*i;
    for (int j=1;j<=space;j++){
        cout << " ";
    }
    for (int j=1;j<=i;j++){
        cout << "*";
    }
    cout << endl;
}
return 0;
}
