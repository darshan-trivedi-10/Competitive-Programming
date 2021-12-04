// https://leetcode.com/problems/power-of-four/
#include <bits/stdc++.h>
#include <math.h>
using namespace std;
using lli = long long int;
using ll = long long;
#define endl '\n'

class Solution
{
public:
    /*
    Basically the powers of 4 are simple numbers in binary, there is only 1 bit set and it's in the 1,3,5,7th etc position. So we just check that the number has a popcount of 1 and also that bit is in an odd position.
    */

    bool isPowerOfFour(int num)
    {
        return num > 0 && (num & (num - 1)) == 0 && (num & 0xAAAAAAAA) == 0;
        // return (__builtin_popcount(num) == 1 && (ffs(num) % 2));
    }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    Solution o;
    o.isPowerOfFour(15);

    return 0;
}