// https://cp-algorithms.com/algebra/sieve-of-eratosthenes.html
#include <bits/stdc++.h>
using namespace std;
/*
Supposed we need to answer Q queries
Q <= a million
input : N
N <= 1000000
output : prime or not

Preprocessing Time : O(Nlog(logN))
Answers Query : O(1)
Extra Space : O(N)

*/
bool is_prime[1000001];
void sieve()
{
    int maxN = 1000000;
    for (int i = 1; i <= maxN; i++)
    {
        is_prime[i] = 1;
    }
    is_prime[0] = is_prime[1] = 0;
    for (int i = 2; i * i <= maxN; i++)
    {
        if (is_prime[i])
        {
            for (int j = i * i; j <= maxN; j += i)
            {
                is_prime[j] = 0;
            }
        }
    }
}

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
    sieve1();
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        if (prime[i])
        {
            cout << i << " ";
        }
    }

    return 0;
}