// https://www.geeksforgeeks.org/print-subsequences-string/
#include <bits/stdc++.h>
using namespace std;
using lli = long long int;
using ll = long long;
#define endl '\n'

string giveString(string &s, int i)
{
    int n = s.size();
    string temp = "";
    for (int j = 0; j < n; j++)
    {
        if ((1 & (i >> j)))
        {
            temp.push_back(s[j]);
        }
    }
    return temp;
}

void printSubsequence(string s)
{
    int n = s.size();
    for (int i = 0; i < (1 << n); i++)
    {
        string temp = giveString(s, i);
        cout << i + 1 << " " << temp << "\n";
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    string s;
    cin >> s;

    printSubsequence(s);

    return 0;
}