#include <iostream>
#include <climits>
using namespace std;

int main(){
    int n;
    cin >> n;
    int maxno=INT_MIN;
    int arr[n];
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    for (int i=0;i<n;i++){
        // for (int j=0;j<=i;j++){
            maxno=max(maxno,arr[i]);
        // }
        cout << maxno << " ";
    }

    return 0;
}