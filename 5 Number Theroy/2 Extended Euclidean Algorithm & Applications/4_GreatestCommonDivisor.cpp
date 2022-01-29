/*
Greatest Common Divisor

Given 2 non-negative integers a and b, find gcd(a, b), GCD of 2 integers a and b is
defined as the greatest integer g such that g is a divisor of both a and b.

NOTE : DO NOT USE LIBRARY FUNCTIONS

Constraints:
1 <= a, b <= 10^9

Example:
Input: a= 6, b= 9
Output: 3
*/

#include <bits/stdc++.h>
using namespace std;

int solve(int a, int b)
{
    if (b == 0)
    {
        return a;
    }

    return solve(b, a % b);
}

int main()
{
    return 0;
}