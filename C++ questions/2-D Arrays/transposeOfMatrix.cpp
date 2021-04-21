#include <iostream>
#include <string>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n][n];
    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            cin >> arr[i][j];
        }
    }
    int rowstart=0,columnstart=1;
    for (int i=rowstart;i<n;i++){
        for (int j=columnstart;j<n;j++){
            int temp=arr[i][j];
            arr[i][j]=arr[j][i];
            arr[j][i]=temp;
        }
        rowstart++;
        columnstart++;
    }
    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            cout << arr[i][j];
        }
        cout << endl;
    }
    return 0;
}