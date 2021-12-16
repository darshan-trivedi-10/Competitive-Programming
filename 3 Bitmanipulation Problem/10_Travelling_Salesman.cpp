#include <bits/stdc++.h>
using namespace std;
using lli = long long int;
using ll = long long;
#define endl '\n'

const int N = 1001;
int dp[N][N];
int tsp(vector<vector<int>> &dist, int visited, int city, int n)
{
    if (visited == ((1 << n) - 1))
    {
        // Return the cost from the city to the original.
        return dist[city][0];
    }

    if (dp[visited][city] != -1)
    {
        return dp[visited][city];
    }

    // Otherwise try all possible options
    int ans = INT_MAX;
    int sz = dist[city].size();
    for (int i = 0; i < sz; i++)
    {
        // need to check if city is visited or not
        if ((visited & (1 << i)) == 0)
        {

            int subProb = dist[city][i] + tsp(dist, (visited | (1 << i)), i, n);
            ans = min(ans, subProb);
        }
    }

    dp[visited][city] = ans;
    return ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    memset(dp, -1, sizeof dp);
    vector<vector<int>> dist = {{0, 20, 42, 25}, {20, 0, 30, 34}, {42, 30, 0, 10}, {25, 34, 10, 0}};
    cout << tsp(dist, 0, 0, 4);

    return 0;
}