#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s = "KARTIKSINGHKUSHWAH";
    int freq[26];
    for (int i = 0; i < 26; i++)
        freq[i] = 0;
    for (int i = 0; i < s.size(); i++)
        freq[s[i] - 'A']++;
    char ans = 'A';
    int maxF = 0;
    for (int i = 0; i < 26; i++)
    {
        if (freq[i] > maxF)
        {
            maxF = freq[i];
            ans = i + 'A';
        }
    }
    cout << maxF << " " << ans << endl;
    return 0;
}