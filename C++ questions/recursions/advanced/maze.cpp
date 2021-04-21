#include <iostream>
#include <string>
using namespace std;
int countmazePath(int n, int i, int j){
    if (i==n-1 && j==n-1){
        return 1;
    }
    if (i>=n || j>=n){
        return 0;
    }

    return countmazePath(n,i+1,j) + countmazePath(n, i, j+1);
}
int main(){
    cout << countmazePath(3,0,0);

    return 0;
}