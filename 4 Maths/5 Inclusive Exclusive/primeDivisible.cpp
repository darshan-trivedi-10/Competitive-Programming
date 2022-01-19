/*
You are given N. Find the total number are less than N and divisible by first 10 prime numbers.

Explanation
N = 500 , M = 3

prime Number  = {2,3,4}

Number which is divisible by 2 = N2 = 500/2 = 250
Number which is divisible by 3 = N3 = 500/3 = 166
Number which is divisible by 5 = N5 = 500/5 = 100
Number which is divisible by 23 = N23 = N6 = 500/6 = 83
Number which is divisible by 25 = N25 = N10 = 500/10 = 50
Number which is divisible by 35 = N35 = N15 =500/15 = 33

Number which is divisible by 235 = N235 = N30 = 500/30 = 18

Ans = 250 + 166 + 100 - 83 - 50 - 33 + 18
Ans = 368

What if , N = 18^18 & M = 10
*/

#include <bits/stdc++.h>
using namespace std;
using lli = long long int;
using ll = long long;
#define endl '\n'

int ans(int n, vector<int> &arr)
{
    int m = arr.size();
    int ans = 0;

    for (int i = 1; i < (1 << m); i++)
    {
        int lcm = 1;
        for (int j = 0; j < m; j++)
        {
            //  if j-th bit of i-th element is set than include it
            if (i & (1 << j))
            {
                lcm *= arr[j];
            }
        }

        if (__builtin_popcount(i) % 2 == 0)
        {
            ans -= (n / lcm);
        }
        else
        {
            ans += (n / lcm);
        }
    }

    return ans;
}

int main()
{
    int n, m;
    cin >> n;
    vector<int> primes = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29};
    m = primes.size();
    int ans = 0;

    for (int i = 1; i < (1 << m); i++)
    {
        int lcm = 1;
        for (int j = 0; j < m; j++)
        {
            //  if j-th bit of i-th element is set than include it
            if (i & (1 << j))
            {
                lcm *= primes[j];
            }
        }
        if (__builtin_popcount(i) % 2 == 0)
        {
            ans -= (n / lcm);
        }
        else
        {
            ans += (n / lcm);
        }
    }

    cout << ans << endl;

    return 0;
}
