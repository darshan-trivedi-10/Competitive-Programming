// https://leetcode.com/problems/hamming-distance/

#include <bits/stdc++.h>
using namespace std;
using lli = long long int;
using ll = long long;
#define endl '\n'

class Solution
{
public:
    int hammingDistance(int x, int y)
    {
        int ans = (x ^ y);
        return __builtin_popcount(ans);
    }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    return 0;
}