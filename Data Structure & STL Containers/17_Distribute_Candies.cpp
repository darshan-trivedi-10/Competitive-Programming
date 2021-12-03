// https://leetcode.com/problems/distribute-candies/

#include <bits/stdc++.h>
using namespace std;
using lli = long long int;
using ll = long long;
#define endl '\n'

class Solution
{
public:
    int distributeCandies(vector<int> &candyType)
    {
        int n = candyType.size();
        sort(candyType.begin(), candyType.end());
        int ans = 1;
        for (int i = 0; i < n - 1; i++)
        {
            if (candyType[i] != candyType[i + 1])
            {
                ans++;
            }
        }

        if (ans >= (n / 2))
        {
            ans = n / 2;
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