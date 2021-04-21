#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int arr[n];
    for (int i=0;i<n;i++){
        cin >> arr[i];
    }

    // for (int i=0;i<n-1;i++){
    //     for (int j=0;j<n-i-1;j++){
    //         if (arr[j]>arr[j+1]){
    //             int temp=arr[j];
    //             arr[j]=arr[j+1]; // not good because lengthy.
    //             arr[j+1]=temp;
    //         }
    //     }
    // }
    int counter=1;
    while(counter<n){
    for (int i=0;i<n-counter;i++){
            if (arr[i]>arr[i+1]){
                int temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
            }
        }
        counter++;
    }

    for (int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    
    return 0;
}