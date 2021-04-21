#include <iostream>
#include <string>
using namespace std;

int main(){
    // optimised approach=
    int arr[5][5]={
        {1,4,5,11,15},
        {2,5,8,12,19},
        {3,6,9,16,22},
        {10,13,14,17,24},
        {18,21,23,26,30}
        };
    int target=7;
    int row=0,column=4;
    while (row<5 && column>0){
        if (arr[row][column]>target){
            column--;
        }
        else if (arr[row][column]==target){
            cout << "Element found" << endl;
            return 0;
        }
        else {row++;}
    }
    cout << "Element not found" << endl;
    return 0;
}