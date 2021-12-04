#include <bits/stdc++.h>
using namespace std;
using lli = long long int;
using ll = long long;
#define endl '\n'

int convertToBinary(int n)
{
    int ans = 0;
    int p = 1;
    while (n > 0)
    {
        int lb = (n & 1);
        ans += lb * p;

        p *= 10;
        n = n >> 1;
    }
    return ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;

    cout << convertToBinary(n) << endl;

    return 0;
}