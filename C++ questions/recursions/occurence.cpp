#include <iostream>
#include <string>
using namespace std;
void firstoccur(int arr[], int n, int i,int k){
    if (arr[i]==k){
        cout << i;
        return;
    }
    else if (n==0){
        cout << -1;
        return;
    }
    firstoccur (arr,n,i+1,k);
}
int lastoccur(int arr[],int n, int i, int k){
    if (i==n){
        return -1;
    }
    int restArray=lastoccur(arr,n,i+1,k);
    if(restArray!=-1){
        return restArray;
    }
    if (arr[i]==k){
        return i;
    }
    return -1;
}
int main(){
    int arr[]={4,1,2,2,5,2,7};
    firstoccur(arr,7,0,2);
    cout << endl << lastoccur(arr,7,0,2);
    return 0;
}