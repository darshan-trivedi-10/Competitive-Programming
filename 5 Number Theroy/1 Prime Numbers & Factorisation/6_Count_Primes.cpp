// https://leetcode.com/problems/count-primes/
#include <bits/stdc++.h>
using namespace std;
using lli = long long int;
using ll = long long;
#define endl '\n'

class Solution
{
public:
    int countPrimes(int n)
    {
        if (n <= 1)
        {
            return 0;
        }
        int ans = 0;
        bool isPrime[n];
        memset(isPrime, 1, sizeof isPrime);
        isPrime[0] = isPrime[1] = 0;
        for (long long int i = 2; i < n; i++)
        {
            if (isPrime[i])
            {
                ans++;
                for (long long int j = i * i; j < n; j += i)
                {
                    isPrime[j] = 0;
                }
            }
        }

        return ans;
    }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    return 0;
}