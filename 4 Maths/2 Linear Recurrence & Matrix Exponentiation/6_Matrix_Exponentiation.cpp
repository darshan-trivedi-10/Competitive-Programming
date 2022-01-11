// Find n-th fibonacci number (n<=10^18)
// We will use matrix exponentiation to find n-th fibonacci

#include <bits/stdc++.h>
using namespace std;
using lli = long long int;
using ll = long long;
#define endl '\n'
const int mod = 1e9 + 7;
const int sz = 2;
struct mat
{
    lli m[sz][sz];
    mat()
    {
        memset(m, 0, sizeof(m));
    }
    void identity()
    {
        for (int i = 0; i < sz; i++)
        {
            m[i][i] = 1;
        }
    }

    mat operator*(mat a)
    {
        mat res;
        for (int i = 0; i < sz; i++)
        {
            for (int j = 0; j < sz; j++)
            {
                for (int k = 0; k < sz; k++)
                {
                    res.m[i][j] += m[i][k] * a.m[k][j];
                    res.m[i][j] %= mod;
                }
            }
        }

        return res;
    }
};

// seq, spp, spp2, fibosum

lli fibonacci(lli n)
{
    // Time Complexity : O((sz^3)log(n))
    mat res;
    res.identity();
    mat t;
    t.m[0][0] = t.m[0][1] = t.m[1][0] = 1;
    if (n <= 2)
    {
        return 1;
    }
    n -= 2;
    while (n)
    {
        if (n & 1)
        {
            res = res * t;
        }
        t = t * t;
        n /= 2;
    }
    return (res.m[0][0] + res.m[0][1]) % mod;
}

int main()
{
    lli n;
    cin >> n;
    cout << fibonacci(n);

    return 0;
}