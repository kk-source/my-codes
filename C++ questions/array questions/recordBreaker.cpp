#include <iostream>
#include <climits>
using namespace std;

int main(){
    int n;
    cin >> n;
    int ans=0;
    int arr[n+1];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int maxvalue=INT_MIN;
    arr[n]=INT_MIN; // to avoid any problems.
    for (int i=0;i<n;i++){
        if (arr[i]>maxvalue && arr[i]>arr[i+1]){
            ans++;
        }
        maxvalue=max(maxvalue,arr[i]);
    }
    cout << ans;

    return 0;
} // time complexity will be O(n); Normal approach would have been to compare arr[i] with a[0],a[1]....a[i-1] 
// but then time complexity would have been O(n^2) which is not permissible.