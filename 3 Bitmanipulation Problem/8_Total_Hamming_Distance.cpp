// https://leetcode.com/problems/total-hamming-distance/submissions/
#include <bits/stdc++.h>
using namespace std;
using lli = long long int;
using ll = long long;
#define endl '\n'

class Solution
{
public:
    int totalHammingDistance(vector<int> &arr)
    {
        int ans = 0;
        int N = arr.size();
        for (int j = 0; j < 32; j++)
        {
            int n = 0, m = 0;
            for (int i = 0; i < N; i++)
            {
                if (arr[i] & (1 << j))
                    n++;
                else
                    m++;
            }
            ans += n * m;
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