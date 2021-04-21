#include <iostream>
#include <string>
using namespace std;

int main(){
    int n;
    cin >> n;
    cin.ignore();
    char arr[n+1];
    cin.getline(arr,n+1);
    bool check=true;
    for (int i=0;i<n/2;i++){
        if (arr[i]!=arr[n-1-i]){
            check=false;
            break;
        }

    }
    if (check){
        cout << "palindrome" << endl;
    }
    else {cout << "not a palindrome" << endl;}
    return 0;
}