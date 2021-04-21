#include <iostream>
#include <string>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++){
        cin >> arr[i];
    }
    int N=1e6+2;
    bool idx[N];
    for (int i=0;i<N;i++){
        idx[i]=false;
    }
    for (int index=0;index<n;index++){ // remember index <n not N.
            if (arr[index]<0){
            continue;
        }
        else{
            idx[arr[index]]=true;
        }
    }
    int i=1;
    for (;i<N;i++){
        if (idx[i]==false){
            break;
        }
    }
    if (i==N){
        cout << -1 << endl;
    }
    else {
        cout << i << endl;
    }
    return 0;
}