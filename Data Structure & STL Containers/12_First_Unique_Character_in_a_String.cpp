/*
https://leetcode.com/problems/first-unique-character-in-a-string/
*/

#include <bits/stdc++.h>
using namespace std;
using lli = long long int;
using ll = long long;
#define endl '\n'

void store_freq(string &s, int arr[])
{
    int n = s.size();
    for (int i = 0; i < n; i++)
    {
        int ind = (int)(s[i] - 'a');
        arr[ind]++;
    }
}

int firstUniqChar(string s)
{
    int arr[26] = {0};
    int n = s.size();
    store_freq(s, arr);
    for (int i = 0; i < n; i++)
    {
        int ind = (int)(s[i] - 'a');
        if (arr[ind] == 1)
        {
            return i;
        }
    }

    return -1;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    string s;
    cin >> s;
    cout << firstUniqChar(s);

    return 0;
}