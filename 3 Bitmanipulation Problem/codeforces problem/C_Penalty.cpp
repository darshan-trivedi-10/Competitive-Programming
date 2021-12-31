#include <bits/stdc++.h>
typedef long long int ll;
const unsigned int MOD = 1000000007;

using namespace std;

int end(int w1, int w2, int rem1, int rem2)
{
    if (w1 > w2 + rem2 || w2 > w1 + rem1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int m1(string s)
{
    int w1 = 0, w2 = 0, rem1 = 5, rem2 = 5;
    int ans = 0;
    for (int i = 0; i < 10; i++)
    {
        if (end(w1, w2, rem1, rem2))
        {
            return ans;
        }
        if (s[i] == '1' || s[i] == '?')
        {
            w1++;
            rem1--;
        }
        else if (s[i] == '0')
        {
            rem1--;
        }
        ans++;
        i++;
        if (end(w1, w2, rem1, rem2))
        {
            return ans;
        }

        if (s[i] == '1')
        {
            w2++;
            rem2--;
        }
        else if (s[i] == '0' || s[i] == '?')
        {
            rem2--;
        }
        ans++;
    }

    return 10;
}

int m2(string s)
{
    int w1 = 0, w2 = 0, rem1 = 5, rem2 = 5;
    int ans = 0;
    for (int i = 0; i < 10; i++)
    {
        if (end(w1, w2, rem1, rem2))
        {
            return ans;
        }
        // a
        if (s[i] == '1')
        {
            w1++;
            rem1--;
        }
        else if (s[i] == '0' || s[i] == '?')
        {
            rem1--;
        }
        ans++;

        if (end(w1, w2, rem1, rem2))
        {
            return ans;
        }

        i++;

        if (s[i] == '1' || s[i] == '?')
        {
            w2++;
            rem2--;
        }
        else if (s[i] == '0')
        {
            rem2--;
        }
        ans++;
    }

    return 10;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    for (int tt = 0; tt < t; tt++)
    {
        string s;
        cin >> s;
        cout << min(m1(s), m2(s)) << "\n";
    }
    return 0;
}