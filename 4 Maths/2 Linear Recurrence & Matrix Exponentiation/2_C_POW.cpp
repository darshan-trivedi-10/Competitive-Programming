// https://atcoder.jp/contests/abc205/tasks/abc205_c
#include <bits/stdc++.h>
using namespace std;
using lli = long long int;
using ll = long long;
#define endl '\n'

lli binary_exponentiation(lli a, lli b, lli mod = (1e9 + 7))
{
    lli ans = 1;
    // if(b%2==1) this means number b is odd.
    while (b)
    {
        if (b & 1)
        {
            ans = (ans * a) % mod;
        }
        a = (a * a) % mod;
        b = (b >> 1);
    }

    return ans;
}

void pt(int a)
{
    if (a == 1)
    {
        cout << "=" << endl;
    }
    else if (a == 2)
    {
        cout << ">" << endl;
    }
    else
    {
        cout << "<" << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll a, b, c;
    cin >> a >> b >> c;

    if (c & 1)
    {
        if (a == b)
        {
            pt(1);
        }
        else if (a > b)
        {
            pt(2);
        }
        else if (b > a)
        {
            pt(3);
        }
    }
    else
    {
        if (a < 0 || b < 0)
        {
            a = abs(a - 0);
            b = abs(b - 0);
        }
        if (a == b)
        {
            pt(1);
        }
        else if (a > b)
        {
            pt(2);
        }
        else if (b > a)
        {
            pt(3);
        }
    }

    return 0;
}