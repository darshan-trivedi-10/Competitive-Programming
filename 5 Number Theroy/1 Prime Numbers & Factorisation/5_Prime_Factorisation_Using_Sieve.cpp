#include <bits/stdc++.h>
using namespace std;

//  Time Complexity : O(sqrt(n)) --> Prime Factorisation
void prime_fact1(int n)
{
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            int ctn = 0;
            while (n % i == 0)
                ctn++, n /= i;
            cout << i << " ^ " << ctn << " , ";
        }
    }

    if (n > 2)
    {
        cout << n << " 1" << endl;
    }
}

int spf[1000001];
void factor()
{
    int maxN = 1000000;
    for (int i = 0; i <= maxN; i++)
        spf[i] = i;

    for (int i = 2; i * i <= maxN; i++)
    {
        if (spf[i] == i)
        {
            for (int j = i * i; j <= maxN; j += i)
            {
                if (spf[j] == j)
                    spf[j] = i;
            }
        }
    }
}

int main()
{
    factor();
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        //  log(n)
        if (n == 1 || n == 0)
            cout << n;
        while (n >= 2)
        {
            cout << spf[n] << " ";
            n /= spf[n];
        }
        cout << endl;
    }

    return 0;
}