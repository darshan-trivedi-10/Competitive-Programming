// https://www.geeksforgeeks.org/largest-number-divides-x-co-prime-y/
#include <bits/stdc++.h>
using namespace std;
using lli = long long int;
using ll = long long;
#define endl '\n'

int solve(int x, int y)
{
    while (__gcd(x, y) != 1)
    {
        x /= __gcd(x, y);
    }

    return x;
}

int main()
{
    int x, y;
    cin >> x >> y;
    int ans = solve(x, y);
    cout << ans << endl;

    return 0;
}