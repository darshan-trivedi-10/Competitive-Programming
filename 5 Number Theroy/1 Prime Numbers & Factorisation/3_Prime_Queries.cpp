/*
Prime Queries
You ar given Q Queries. In each query, you are given two integers A ans B. Find the number of primes in the range [a,b].

Constrainst
A,B,Q <= 2 * 10^5
*/

#include <bits/stdc++.h>
using namespace std;
using lli = long long int;
using ll = long long;
#define endl '\n'

class Solution
{
public:
    std::bitset<200005> prime;
    int primecount[200005];
    void sieve1()
    {
        memset(primecount, 0, sizeof primecount);
        prime.set(); // this marks thw whole array as true
        prime[0] = prime[1] = 0;
        for (int i = 2; i * i <= 200000; i++)
        {
            if (prime[i])
            {
                for (int j = i * i; j <= 200000; j += i)
                {
                    prime[j] = 0;
                }
            }
        }

        for (int i = 1; i <= 200000; i++)
        {
            if (prime[i])
            {
                primecount[i]++;
            }
            primecount[i] += primecount[i - 1];
        }
    }

    int countPrimes(int l, int r)
    {
        sieve1();
        return abs(primecount[r] - primecount[l-1]);
    }
};

int main()
{
  int L, R;
        cin >> L >> R;
        Solution ob;
        int ans = ob.countPrimes(L, R);
        cout << ans << "\n";

    return 0;
}