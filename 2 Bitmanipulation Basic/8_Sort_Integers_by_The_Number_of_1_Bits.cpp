// https://leetcode.com/problems/sort-integers-by-the-number-of-1-bits/

#include <bits/stdc++.h>
using namespace std;
using lli = long long int;
using ll = long long;
#define endl '\n'

bool cmp(int a, int b)
{
    int one_a = __builtin_popcount(a);
    int one_b = __builtin_popcount(b);

    if (one_a == one_b)
    {
        return a < b;
    }

    return one_a < one_b;
}

class Solution
{
public:
    vector<int> sortByBits(vector<int> &arr)
    {
        sort(arr.begin(), arr.end(), cmp);
        return arr;
    }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    return 0;
}