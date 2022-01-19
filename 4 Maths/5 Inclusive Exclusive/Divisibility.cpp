/*
Divisibility
Given an array  arr, return the number of  integers between l and r,
inclusive, that are divisible by at least one of the elements in arr.

Constraints:
1 <= arr.length <= 18
1 <= arr[i] <= 10^9
1 <= l <= r <= 10^9

Example:
Input: l= 579000, r= 987654, a= [1, 2]
Output: 408655
*/
#include <bits/stdc++.h>
using namespace std;
using lli = long long int;
using ll = long long;
#define endl '\n'

#include <bits/stdc++.h>
using namespace std;

int numDivisible(int l, int r, vector<int> arr)
{
    int ans = 0, n = arr.size();

    for (int i = 1; i < pow(2, n); i++)
    {
        long long lcm = 1;
        int cnt = 0;
        for (int j = 0; j < n; j++)
        {
            int x = 1 << j;
            if (i & x)
            {
                lcm = (lcm * (long long)arr[j]) / __gcd(lcm, (long long)arr[j]);
                cnt++;
            }
            if (lcm > r)
            {
                break;
            }
        }
        if (lcm > r)
            continue;

        if (cnt % 2)
        {
            ans += r / lcm;
            ans -= (l - 1) / lcm;
        }
        else
        {
            ans -= r / lcm;
            ans += (l - 1) / lcm;
        }
    }
    return ans;
}

int main()
{
    int l, r;
    cin >> l >> r;
    int m;
    cin >> m;
    vector<int> arr(m);
    for (int i = 0; i < m; i++)
    {
        cin >> arr[i];
    }

    cout << numDivisible(l, r, arr);

    return 0;
}
