#include <bits/stdc++.h>
using namespace std;

/*
Facts About Prime Numer
1) Two is the only even prime
2) Every prime can be written as 6b+1 or 6n-1, except 2 and 3, n
    is a natural number.
3) Every Even integer greater than 2 can be expressed as the sum
    of two primes.
4) Wilsons Theorem : ((p-1)!)%p = ((p-1)%p)
Primality test is to determine whether the input integer is a prime number or not.

Example :
Input : 5  Output : true
Input : 12 Output : false

*/

//  Time Complexity : O(N)
bool isprime1(int n)
{
    if (n == 1)
        return false;

    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
            return false;
    }

    return true;
}

// Better Approach
/*
---> All divisors of a number N occur in pairs of (a,b) s.t.  a*b = N

For example 12 has following divisors
     d = 1, 2, 3, 4, 6, 12.
Pairs are : (1, 12), (2, 6), (3, 4)

Claim : for a divisor pair (a, b) one of them lies below sqrt(N) and other lies above sqrt(N).

Proof : There would be 3 cases.
            c1 : a, b < sqrt(N)
            c2 : a , b > sqrt(N)
            c3 : one is below sqrt(N), and
                  other above sqrt(N).
Ex : 12 has pairs (1, 12) (2, 6) (3, 4)

*/

// Implementation
// Time Complexity : O(sqrt(N))
bool isPrime(int n)
{
    if (n == 1)
        return false;

    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }

    return true;
}

int main()
{
    cout << isPrime(5683);

    return 0;
}
