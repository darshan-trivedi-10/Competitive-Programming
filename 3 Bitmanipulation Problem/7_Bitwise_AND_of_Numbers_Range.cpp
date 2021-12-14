// https://leetcode.com/problems/bitwise-and-of-numbers-range/

#include <bits/stdc++.h>
using namespace std;
using lli = long long int;
using ll = long long;
#define endl '\n'

class Solution
{
public:
    int rangeBitwiseAnd(int left, int right)
    {
        int ans = 0;
        for (int bit = 30; bit >= 0; bit--)
        {
            if ((left & (1 << bit)) != (right & (1 << bit)))
            {
                break;
            }
            else
            {
                ans = (ans | (left & (1 << bit)));
            }
        }

        return ans;
    }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    return 0;
}