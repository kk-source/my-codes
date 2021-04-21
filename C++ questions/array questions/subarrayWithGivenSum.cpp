#include <iostream>
#include <string>
using namespace std;

int main(){
    // int n; 
    // cin >> n;
    // int arr[n];
    // for (int i=0;i<n;i++){
    //     cin>>arr[i];
    // }
    // int s;
    // cin>>s;
    //     for(int i=0;i<n;i++){
    //         int sum=0;
    //         int j;
    //         for(j=i;s!=sum && sum<s;j++){
    //             sum+=arr[j];
    //     }
    //     if (sum==s){
    //         cout << i+1 << " " << j << endl;
    //         break;
    //     }
    //     else{
    //         continue;
    //     }
    // } better way is as follows because in above code time complexity is O(n^2)-
    int n; 
    cin >> n;
    int arr[n];
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    int s;
    cin>>s;
    int st=0,en=0;
    int sum=arr[en];
        while (sum<s && en<n-1){
            en++;
            sum+=arr[en];
        }
        while (sum!=s && sum>s){
            sum-=arr[st];
            st++;
            }
        if (s==sum){cout << st+1 << " " << en+1 << endl;}
        else {cout << -1 << endl;}
    return 0;
}