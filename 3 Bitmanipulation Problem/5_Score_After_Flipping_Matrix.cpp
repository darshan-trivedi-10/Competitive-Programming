// https://leetcode.com/problems/score-after-flipping-matrix/
#include <bits/stdc++.h>
using namespace std;
using lli = long long int;
using ll = long long;
#define endl '\n'

class Solution
{
public:
    int matrixScore(vector<vector<int>> &grid)
    {
        int n = grid.size(), m = grid[0].size();
        for (int i = 0; i < n; i++)
        {
            if (grid[i][0] == 0)
            {
                for (int j = 0; j < m; j++)
                {
                    grid[i][j] = (grid[i][j] ^ 1);
                }
            }
        }

        for (int i = 0; i < m; i++)
        {
            int count = 0;
            for (int j = 0; j < n; j++)
            {
                if (grid[j][i] == 0)
                {
                    count++;
                }
            }
            if (count > (n / 2))
            {
                for (int j = 0; j < n; j++)
                {
                    grid[j][i] = (grid[j][i] ^ 1);
                }
            }
        }
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            int two = 1;
            for (int j = (m - 1); j >= 0; j--)
            {
                if (grid[i][j] == 1)
                {
                    ans += two;
                }
                two *= 2;
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