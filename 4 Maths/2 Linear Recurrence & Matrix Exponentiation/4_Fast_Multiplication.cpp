/*
Find a*b where a,b<= 10%15.
*/

#include <bits/stdc++.h>
using namespace std;
using lli = long long int;
using ll = long long;
#define endl '\n'

lli multiply(lli a, lli b, lli mod = (1e9 + 7))
{
    lli ans = 0;
    // if(b%2==1) this means number b is odd.
    while (b)
    {
        if (b & 1)
        {
            ans = (ans + a) % mod;
        }
        a = (a + a);
        b = (b >> 1);
    }

    return ans % mod;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll a, b;
    cin >> a >> b;
    cout << multiply(a, b);

    return 0;
}