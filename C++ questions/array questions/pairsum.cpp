#include <iostream>
#include <string>
using namespace std;

bool pairsum(int arr[],int n,int k){
    for(int i=0;i<n-1;i++){
        for (int j=i+1;j<n;j++){
            if (arr[j]+arr[i]==k){
                cout << i << " " << j << endl;
                return true;
            }
        }
    }
    return false;
}

int main(){
    int n,k;
    cin>>n>>k;
    int arr[n];
    for (int i=0;i<n;i++){
        cin >> arr[i];
    } 
    // Brute force approach-
    // cout << pairsum(arr,n,k);


    // Best approach- (but the array must be sorted.)
    int st=0,en=n-1;
    // selection sort-
    for (int i=0;i<n-1;i++){
        for (int j=i+1;j<n;j++){
            if (arr[i]>arr[j]){
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    // // bubble sort-
    // for (int i=1;i<n;i++){
    //     for (int j=0;j<n-i;j++){
    //     if (arr[j]>arr[j+1]){
    //         int temp=arr[j];
    //         arr[j]=arr[j+1];
    //         arr[j+1]=temp;
    //     }
    //     }
    // }
    // // insertion sort-
    // for (int i=1;i<n;i++){
    //     int j=i;
    //     int current=arr[j];
    //     while(current<arr[j-1] && j>=0){
    //         arr[j]=arr[j-1];
    //         j--;
    //     }
    //     arr[j+1]=current;
    // }
    while (st<en){
        if (arr[st]+arr[en]<k){
            st++;
        }
        else if (arr[st]+arr[en]==k){
            cout << st << " " << en << endl;
            break;
        }
        else {
            en--;
        }
    }
    return 0;
}