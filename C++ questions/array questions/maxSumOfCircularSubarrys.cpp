#include <iostream>
#include <string>
using namespace std;

//Kadane's algorithm-
int kadane(int arr[],int n){
    int currentsum=0;
    int ans=INT_MIN;
    for (int i=0;i<n;i++){
        currentsum+=arr[i];
        if (currentsum<0){
            currentsum=0;
        }
        ans=max(ans,currentsum);
    }
    return ans;
}


int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++){
        cin >> arr[i];
    }
    int wrapsum;
    int nonwrapsum;
    nonwrapsum=kadane(arr,n);
    int totalsum=0;
    for (int i=0;i<n;i++){
        totalsum+=arr[i];
        arr[i]=-arr[i];
    }
    wrapsum=totalsum-(-kadane(arr,n));
    cout << max(wrapsum,nonwrapsum);
    return 0;
}