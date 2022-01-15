/*
Subarray Sum Divisible by N
Given an integer array nums of size n , return the number of non-empty subarrays that have a sum divisible by n.

A subarray is a contiguous part of an array.

Constraints:
1 <= n <= 3 * 10^4
0 <= nums[i] <= 10^4

Example:

Input: n= 5, nums= [4, 5, 0, 4, 2]
Output: 4
*/
#include <bits/stdc++.h>
using namespace std;
using lli = long long int;
using ll = long long;
#define endl '\n'

int solve(int n, vector<int> arr)
{
    int n = arr.size();
    unordered_map<int, int> mpp;
    long long int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        int mod = (n + (sum % n)) % n;
        mpp[mod]++;
    }

    int ans = 0;
    for (auto it : mpp)
    {
        int summ = it.second;
        ans = ans + (summ * (summ + 1)) / 2;
    }

    return ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    return 0;
}
