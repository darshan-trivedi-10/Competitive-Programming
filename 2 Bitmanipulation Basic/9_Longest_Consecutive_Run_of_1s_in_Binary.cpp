// https://practice.geeksforgeeks.org/problems/longest-consecutive-1s-1587115620/1

#include <bits/stdc++.h>
using namespace std;
using lli = long long int;
using ll = long long;
#define endl '\n'

string convertToBinary(int n)
{
    string ans = "";
    while (n > 0)
    {
        int lb = (n & 1);
        if (lb == 1)
        {
            ans.push_back('1');
        }
        else
        {
            ans.push_back('0');
        }

        n = n >> 1;
    }
    reverse(ans.begin(), ans.end());
    return ans;
}

class Solution
{
public:
    int maxConsecutiveOnes(int n)
    {
        string br = convertToBinary(n);
        int sz = br.size();
        int ans = 0, curr = 0;

        for (int i = 0; i < sz; i++)
        {
            if (curr == 0 && br[i] == '1')
            {
                curr++;
            }
            else if (br[i] == '1')
            {
                curr++;
            }
            else
            {
                curr = 0;
            }
            ans = max(ans, curr);
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