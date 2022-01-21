#include <bits/stdc++.h>
using namespace std;

/*
Q. Given a number N, find its prime factorization.
Example :
                N = 100
                Factorization = 2 x 2 x 2 x 5.
*/

//  Time Complexity : O(N)
void prime_fact(int n)
{
    for (int i = 2; i <= n; i++)
    {
        if (n % i == 0)
        {
            int ctn = 0;
            while (n % i == 0)
                ctn++, n /= i;
            cout << i << " ^ " << ctn << " , ";
        }
    }
}

//  Time Complexity : O(sqrt(n))
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

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        prime_fact1(n);
        cout << '\n';
        prime_fact(n);
        cout << '\n';
    }

    return 0;
}