// https://leetcode.com/problems/triples-with-bitwise-and-equal-to-zero/
#include <bits/stdc++.h>
using namespace std;
using lli = long long int;
using ll = long long;
#define endl '\n'

// This Solution can give TLE in worst case. i can't able to optimize it. if you can kindly tell me :)
class Solution
{
public:
    int countTriplets(vector<int> &nums)
    {
        unordered_map<int, int> mpp;
        int n = nums.size();
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                int val = (nums[i] & nums[j]);
                mpp[val]++;
            }
        }

        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            for (auto it : mpp)
            {
                if ((nums[i] & it.first) == 0)
                {
                    ans += it.second;
                }
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