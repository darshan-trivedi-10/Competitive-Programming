// https://leetcode.com/problems/decode-xored-array/

#include <bits/stdc++.h>
using namespace std;
using lli = long long int;
using ll = long long;
#define endl '\n'

class Solution
{
public:
    vector<int> decode(vector<int> &encoded, int first)
    {
        int n = encoded.size();
        vector<int> orignal;
        orignal.push_back(first);

        for (int i = 0; i < n; i++)
        {
            int ele = encoded[i];
            ele = ele ^ orignal[i];
            orignal.push_back(ele);
        }

        return orignal;
    }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    return 0;
}