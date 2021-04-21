#include <bits/stdc++.h>
#include <climits>
using namespace std;

int main(){
    int n; 
    cin >> n;
    int arr[n];
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    int N = 1e5+2; // means 10^5+2.
    int idx[N];
    
    for(int i=0;i<N;i++){
        idx[i]=-1; // any value less than 0 to get minimum index.
    }
    int minidx=INT_MAX;
    for(int i=0;i<n;i++){
        if (idx[arr[i]]!=-1){
            minidx= min (minidx,idx[arr[i]]);
        }
        else {
            idx[arr[i]]=i;
        }
    }
    if (minidx == INT_MAX){
        cout << "-1" << endl;
    }
    else {
        cout << minidx+1 << endl;
    }

    return 0;
}