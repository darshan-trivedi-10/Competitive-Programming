// https://www.interviewbit.com/problems/single-number/

#include <bits/stdc++.h>
using namespace std;
using lli = long long int;
using ll = long long;
#define endl '\n'

int singleNumber(const vector<int> &A)
{
    int n = A.size();
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans = ans ^ A[i];
    }

    return ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    return 0;
}
