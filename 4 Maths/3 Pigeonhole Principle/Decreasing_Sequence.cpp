/*
Decreasing Sequence
You are given two integers L and R. Find the smallest non-negative integer N such that

N%L > N%(L+1) > … > N%(R−1) > N%R.

Here, % is the modulo operator, so A%B is the remainder of A after division by B. For example, 11%3=2.

//

Return the smallest possible N if solution exists otherwise return -1.

Constraints:

1 <= L < R <= 10^8

Example 1:

Input: L= 4 , R= 6

Output: 6

Explanation:
N=6 satisfies the given condition, since 6%4(=2)>6%5(=1)>6%6(=0). Notice that N=7 also satisfies the condition, but it is larger.
Example 2:

Input: L= 1 , R= 2

Output: -1

Explanation:
It is impossible to find a valid solution because for any non-negative integer N.
*/

#include <bits/stdc++.h>
using namespace std;
using lli = long long int;
using ll = long long;
#define endl '\n'



int solve(int l, int r)
{
    if (2 * l <= r)
    {
        return -1;
    }

    return r;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    return 0;
}