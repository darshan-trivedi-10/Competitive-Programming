// https://leetcode.com/problems/maximum-score-from-removing-stones/
#include <bits/stdc++.h>
using namespace std;
using lli = long long int;
using ll = long long;
#define endl '\n'

class Solution
{
public:
    int maximumScore(int a, int b, int c)
    {
        int maxi = max({a, b, c});
        int sum = a + b + c;
        if (maxi <= (sum - maxi))
        {
            return sum / 2;
        }
        return sum - maxi;
    }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    return 0;
}