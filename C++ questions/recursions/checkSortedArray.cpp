#include <iostream>
#include <string>
using namespace std;
bool check(int arr[], int n){
    if (n<2){
        return true;
    }
    else if (arr[n-1]<arr[n-2]){
        return false;
    }
    else {return ((arr[n-1]>arr[n-2]) && check(arr,n-1));}
}

int main(){
    int arr[]={1,2,3,4,5};
    cout << check(arr,5);
    return 0;
}