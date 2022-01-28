/*
Prime Sum
You are given a number n. Find all the pairs (l, r) such that l <= r and their sum is also prime and no more than n.

Note: l and r should be prime too.

Constraints:

1 <= n <= 10^5

Example:

Input: n= 5

Output: 1

Explanation:
In this case only pair (l, r) suits us - (2,3), because 2+3=5 , 5 is prime.

2 3 4 5 6 7 8 9 10
2 3 5 7

*/

#include <bits/stdc++.h>
using namespace std;
using lli = long long int;
using ll = long long;
#define endl '\n'

std::bitset<100005> prime;
void sieve1()
{
    prime.set(); // this marks thw whole array as true
    prime[0] = prime[1] = 0;
    for (int i = 2; i * i <= 100000; i++)
    {
        if (prime[i])
        {
            for (int j = i * i; j <= 100000; j += i)
            {
                prime[j] = 0;
            }
        }
    }
}

int main()
{
    int n;
    cin >> n;

    sieve1();
    int previous = 2, ans = 0;
    for (int i = 3; i <= n; i++)
    {
        if (prime[i])
        {
            int extra = i - previous;
            if (prime[extra])
            {
                ans++;
            }
            previous = i;
        }
    }
    cout << ans << endl;

    return 0;
}