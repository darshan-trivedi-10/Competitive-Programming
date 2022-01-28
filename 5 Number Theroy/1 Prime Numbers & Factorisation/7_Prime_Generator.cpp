// https://www.spoj.com/problems/PRIME1/

#include <bits/stdc++.h>
using namespace std;
using lli = long long int;
using ll = long long;
#define endl '\n'

const int maxN = 1000000;
bool sieve[maxN + 5];
void createSieve()
{
    for (int i = 2; i <= maxN; i++)
    {
        sieve[i] = 1;
    }
    sieve[0] = sieve[1] = 0;
    for (int i = 2; i * i <= maxN; i++)
    {
        if (sieve[i])
        {
            for (int j = i * i; j <= maxN; j += i)
            {
                sieve[j] = 0;
            }
        }
    }
}

void generatePrimes(int n, vector<ll> &ds)
{

    for (int i = 2; i <= n; i++)
    {
        if (sieve[i])
        {
            ds.push_back(i);
        }
    }
}

// Time Complexity : O(10^6) + O(t) * (O(10^6) +O(10^6)+O(10^4)) <= 10^7
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    createSieve();
    int t;
    cin >> t;
    while (t--)
    {
        ll l, r;
        cin >> l >> r;
        if (l == 1)
        {
            l++;
        }
        ll temp[r - l + 1];
        vector<ll> prime(0);
        generatePrimes(sqrt(r), prime);
        for (int i = 0; i < (r - l + 1); i++)
        {
            temp[i] = 1;
        }
        for (auto pr : prime)
        {
            ll firstMyltiple = (l / pr) * pr;
            if (firstMyltiple < l)
            {
                firstMyltiple += pr;
            }
            for (int j = max(firstMyltiple, pr * pr); j <= r; j += pr)
            {
                temp[j - l] = false;
            }
        }

        for (int i = l; i <= r; i++)
        {
            if (temp[i - l] == 1)
            {
                cout << i << "\n";
            }
        }
        cout << endl;
    }

    return 0;
}
