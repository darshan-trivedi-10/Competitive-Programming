/*
Problem Link : https://leetcode.com/problems/kth-largest-element-in-an-array/
*/
#include <bits/stdc++.h>
using namespace std;
using lli = long long int;
using ll = long long;
#define endl '\n'

int findKthLargest(vector<int> nums, int k)
{
    priority_queue<int, vector<int>, greater<int>> minh;
    for (int i = 0; i < nums.size(); i++)
    {
        minh.push(nums[i]);
        if (minh.size() > k)
        {
            minh.pop();
        }
    }

    return minh.top();
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    return 0;
}