// https://leetcode.com/problems/find-k-closest-elements/
#include <bits/stdc++.h>
using namespace std;
using lli = long long int;
using ll = long long;
#define endl '\n'

class Solution
{
public:
    vector<int> findClosestElements(vector<int> &arr, int k, int x)
    {
        int n = arr.size();
        priority_queue<pair<int, int>> pq;
        for (int i = 0; i < n; i++)
        {
            pq.push({abs(arr[i] - x), arr[i]});
            if (pq.size() > k)
            {
                pq.pop();
            }
        }

        vector<int> ans;
        while (!pq.empty())
        {
            ans.push_back(pq.top().second);
            pq.pop();
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    return 0;
}