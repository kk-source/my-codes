#include <iostream>
#include <climits>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++){
        cin >> arr[i];
    }
    // Brute force approach-
    // int ans=INT_MIN;
    // for (int i=0;i<n;i++){ // i denotes starting point.
    //     int sum=0;
    //     for (int j=i;j<n;j++){ // j denotes ending point.
    //         sum+=arr[j];
    //         ans=max(sum,ans);
    //     }
    // }
    // cout << ans;

    // cumulative sum approach-
    // int currsum[n+1];
    // currsum[0]=0;
    // for (int i=1;i<=n;i++){
    //     currsum[i]=currsum[i-1]+arr[i-1];
    // }
    // int maxSum=INT_MIN;
    // for (int i=1;i<=n;i++){
    //     int sum=0;
    //     for (int j=0;j<i;j++){
    //         sum =currsum[i]-currsum[j];
    //         maxSum=max(sum,maxSum);
    //     }
    // }
    // cout << maxSum;

    // kadane's algorithm-
    int currentSum=0;
    int ans=INT_MIN;
    for (int i=0;i<n;i++){
        currentSum+=arr[i];
        if (currentSum<0){
            currentSum=0;
        }
        ans=max(currentSum,ans);
    }
    cout << ans;
    return 0;
}