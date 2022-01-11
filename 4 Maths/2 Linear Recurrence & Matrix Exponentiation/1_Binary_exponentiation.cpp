#include <bits/stdc++.h>
using namespace std;
using lli = long long int;
using ll = long long;
#define endl '\n'

lli binary_exponentiation(lli a, lli b)
{
    lli ans = 1;
    // if(b%2==1) this means number b is odd.
    while (b)
    {
        if (b & 1)
        {
            ans = (ans * a);
        }
        a = (a * a);
        b = (b >> 1);
    }

    return ans;
}

int main()
{
    int a, b;
    cin >> a >> b;
    cout << binary_exponentiation(a, b);

    return 0;
}