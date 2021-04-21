#include <iostream>
#include <string>
using namespace std;

int main()
{
    int arr[3][4] = {{2, 4, 1, 2}, {8, 4, 3, 6}, {1, 7, 9, 5}};
    int arr1[4][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {4, 5, 6}};
    for (int k = 0; k < 3; k++)
    {
        for (int i = 0; i < 3; i++)
        {
            int sum = 0;
            for (int j = 0; j < 4; j++)
            {
                sum += arr[k][j] * arr1[j][i];
            }
            cout << sum << " ";
        }
        cout << endl;
    }

    return 0;
}