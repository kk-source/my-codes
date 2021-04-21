#include <iostream>
#include <string>
using namespace std;

int oneunique(int arr[], int n)
{
    int xorsum = 0;
    for (int i = 0; i < n; i++)
    {
        xorsum = xorsum ^ arr[i]; // xor operation is commutative
    }
    return xorsum;
}
int setBit(int n,int pos){
    return ((n&(1<<pos))!=0);
}
int getBit(int n,int pos){
    return (n | (1<<pos));
}
void twounique(int arr[], int n)
{
    int xorsum = 0;
    for (int i = 0; i < n; i++)
    {
        xorsum = xorsum ^ arr[i];
    }
    int tempxor = xorsum;
    int setbit = 0;
    int pos = 0;
    while (setbit != 1)
    {
        setbit = xorsum & 1;
        pos++;
        xorsum = xorsum >> 1;
    }
    int newxor = 0;
    for (int i = 0; i < n; i++)
    {
        if (setBit(arr[i], pos - 1))
        {
            newxor = newxor ^ arr[i];
        }
    }
    cout << newxor << endl;
    cout << (tempxor ^ newxor) << endl;
}
bool getBit1 (int n,int pos){
    return ((n&(1<<pos))!=0);
}
int setBit1(int n, int pos)
{
    return (n | (1 << pos));
}
int oneInThreeUnique(int arr[],int n){
    int result =0;
    for (int i=0;i<64;i++){
        int sum=0;

        for (int j=0;j<n;j++){
            if (getBit1(arr[j],i)){
                sum++;
            }
        }
        if (sum%3){
            result =setBit1(result,i);
        }
    }
    return result;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 1, 2, 3};
    int arr1[]={1,2,3,58,1,2,3,1,2,3};
    cout << oneInThreeUnique(arr1,10);
    // twounique(arr, 8);
    return 0;
}