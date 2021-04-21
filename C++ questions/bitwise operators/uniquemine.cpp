#include <iostream>
#include <cmath>
using namespace std;

int oneunique(int arr[], int n)
{
    int xorsum = 0;
    for (int i = 0; i < n; i++)
    {
        xorsum = arr[i] ^ xorsum;
    }
    return xorsum;
}
void twounique(int arr[], int n)
{
    int xorsum = 0;
    for (int i = 0; i < n; i++)
    {
        xorsum = xorsum ^ arr[i];
    }
    int tempxorsum = xorsum;
    int pos = 0;
    while (!(xorsum & (1 << pos)))
    {
        pos++;
    }
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] & (1 << pos))
        {
            ans = arr[i] ^ ans;
        }
    }
    cout << ans << " ";
    cout << (tempxorsum ^ ans);
}
int uniqueInThree(int arr[], int n)
{
    int result = 0;
    int bitArray[64];
    for (int i = 0; i < 64; i++)
        bitArray[i] = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 64; j++)
        {
            if (arr[i] & (1 << j))
            {
                bitArray[j]++;
            }
        }
    }
    for (int i = 0; i < 64; i++)
    {
        if (bitArray[i] % 3)
        {
            result = (result | (1 << i)); // setbit.
        }
    }
    return result; //returns int in decimal form.
}
int main()
{
    int arr[] = {1, 2, 3, 4, 1, 2, 3};
    int arr1[] = {1, 2, 3, 4, 6, 1, 2, 3};
    int arr2[] = {1, 2, 3, 5, 1, 2, 3, 1, 2, 3};
    cout << oneunique(arr,7) << endl;
    twounique(arr1,8);
    cout << endl;
    cout << uniqueInThree(arr2, 10);
    return 0;
}