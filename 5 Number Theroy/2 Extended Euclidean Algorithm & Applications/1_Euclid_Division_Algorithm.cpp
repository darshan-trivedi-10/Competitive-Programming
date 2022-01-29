#include <bits/stdc++.h>
using namespace std;

/*
Euclidean algorithm for computing the greatest common divisor

Given two non-negative integers a and b, we have to find their GCD (greatest common divisor)
i.e. the largest number which is a divisor of both a and b. It's commonly denoted by gcd(a,b).

                 gcd(a,b) = { a, if b = 0
                                 { gcd(b, a%b), otherwise.

--> Let GCD of A and B = g
    Observation 1 : GCD(A,0) = GCD(0,A) = A
    Observation 2 : GCD(A,B) = GCD(B,A)
    Observation 1 : GCD(A,B) = GCD(A-B,A) = GCD(A, B-A)

Euclidean algorithm works in O(log(min(a,b))).

*/
// Implementation
int gcd(int a, int b)
{
    if (b == 0)
        return a;
    else
        return (b, a % b);
}

// Using the ternary operator in C++, we can write it as a one-liner.
int gcd(int a, int b)
{
    return b ? gcd(b, a % b) : a;
}
// And finally, here is a non-recursive implementation:

int gcd(int a, int b)
{
    while (b)
    {
        a %= b;
        swap(a, b);
    }
    return a;
}

/*

Least common multiple

--> Calculating the least common multiple (commonly denoted LCM) can be reduced to calculating the GCD with the
     following simple formula:

lcm(a,b)= (a⋅b)/gcd(a,b).

Thus, LCM can be calculated using the Euclidean algorithm with the same time complexity:

A possible implementation, that cleverly avoids integer overflows by first dividing a with the GCD, is given here:

*/

int lcm(int a, int b)
{
    return a / gcd(a, b) * b;
}

/*
Binary GCD
--> The Binary GCD algorithm is an optimization to the normal Eulidean algorithm.
*/
int gcd(int a, int b)
{
    if (!a || !b)
        return a | b;
    unsigned shift = __builtin_ctz(a | b);
    a >>= __builtin_ctz(a);
    do
    {
        b >>= __builtin_ctz(b);
        if (a > b)
            swap(a, b);
        b -= a;
    } while (b);
    return a << shift;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        cout << __gcd(a, b) << endl;
    }

    return 0;
}