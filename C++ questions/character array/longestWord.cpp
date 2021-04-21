#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    cin.ignore();
    char arr[n+1];
    cin.getline(arr,n+1);
    int i=0;
    int currentlength=0;
    int maxlength=0;
    while (1){
        if (arr[i]==' ' || arr[i]=='\0'){
            if (currentlength>maxlength){
                maxlength=currentlength;
            }
            currentlength=0;
        }
        else {
            currentlength++;
        }
        if (arr[i]=='\0'){
            break;
        }
        i++;
    }
    cout << maxlength;
    return 0;
}