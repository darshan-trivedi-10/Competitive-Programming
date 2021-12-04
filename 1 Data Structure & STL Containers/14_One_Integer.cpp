/*
One Integer
You are given a list of integers nums. You can reduce the length of nums by taking any two integers, removing them, and appending their sum to the end. The cost of doing this is the sum of the two integers you removed.

Return the minimum total cost of reducing nums to one integer.
Note : Cost can be negative also.

Constraints
n ≤ 100,000 where n is length of nums.

Example :

Input
nums = [1, 2, 3, 4, 5]

Output
33
Explanation

We take 1 and 2 out to get [3, 4, 5, 3]

We take 3 and 3 out to get [4, 5, 6]

We take 4 and 5 out to get [6, 9]

We take 6 and 9 out to get [15]

The sum is 33 = 1 + 2 + 3 + 3 + 4 + 5 + 6 + 9
*/

#include <bits/stdc++.h>
using namespace std;
using lli = long long int;
using ll = long long;
#define endl '\n'

int solve(vector<int> nums)
{
    priority_queue<int, vector<int>, greater<int>> minh;
    int n = nums.size();
    for (int i = 0; i < n; i++)
    {
        minh.push(nums[i]);
    }

    int ans = 0;
    while (!minh.empty())
    {
        int curr = minh.top();
        minh.pop();
        if (!minh.empty())
        {
            curr += minh.top();
            minh.pop();
            minh.push(curr);
            ans += curr;
        }
    }
    
    return ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    vector<int> arr = {1, 2, 3, 4, 5};
    cout << solve(arr);

    return 0;
}