// https://www.geeksforgeeks.org/find-two-non-repeating-elements-in-an-array-of-repeating-elements/

#include <bits/stdc++.h>
using namespace std;
using lli = long long int;
using ll = long long;
#define endl '\n'
vector<int> singleNumber(vector<int> nums)
{
    int n = nums.size();
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans = ans ^ nums[i];
    }

    int se = ans;
    int rms = (ans & (~(ans - 1)));
    for (int i = 0; i < n; i++)
    {
        if ((rms & nums[i]))
        {
            ans = ans ^ nums[i];
        }
        else
        {
            se = se ^ nums[i];
        }
    }

    return {min(ans, se), max(ans, se)};
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    return 0;
}