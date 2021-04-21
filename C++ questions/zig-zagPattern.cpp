#include <iostream>
#include <string>
using namespace std;

int main(){
    int n;
    cout << "Enter N" << endl;
    cin >> n;
    // for (int i=1;i<=3;i++){
    //     for (int j=1;j<=n;j++){
    //         if (i%3==1){
    //             if (j%4==3){
    //                 cout << "*";
    //             }
    //             else {
    //             cout << " ";
    //             }
    //         }
    //         else if (i%3==2){
    //             if (j%2==0){
    //                 cout << "*";
    //             }
    //             else {
    //                 cout << " ";
    //             }
    //         }
    //         else {
    //             if (j%4==1){
    //                 cout << "*";
    //             }
    //             else {
    //             cout << " ";
    //             }
    //         }
    //     }
    //     cout << endl;
    // }
    // better way of doing this is as below:

    for (int i=1;i<=3;i++){
        for (int j=1;j<=n;j++){
            if (((i+j)%4==0) || (i==2 && j%4==0 )){
                cout << "* " ;
            }
            else {
                cout << "  ";
            }
        }
        cout << endl;
    }

    return 0;
}