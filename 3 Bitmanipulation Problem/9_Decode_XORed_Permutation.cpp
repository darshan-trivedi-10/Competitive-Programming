// https://leetcode.com/problems/decode-xored-permutation/
#include <bits/stdc++.h>
using namespace std;
using lli = long long int;
using ll = long long;
#define endl '\n'

class Solution
{
public:
    vector<int> decode(vector<int> &encoded)
    {
        int n = encoded.size();
        vector<int> answer;
        int ans = 0;
        for (int i = 0; i <= n; i++)
        {
            ans = (ans ^ (i + 1));
        }

        for (int i = 1; i < n; i += 2)
        {
            ans = (ans ^ encoded[i]);
        }

        answer.push_back(ans);
        for (int i = 0; i < n; i++)
        {
            ans = (ans ^ encoded[i]);
            answer.push_back(ans);
        }

        return answer;
    }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    return 0;
}