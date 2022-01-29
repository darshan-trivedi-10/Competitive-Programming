#include <bits/stdc++.h>
using namespace std;
using lli = long long int;
using ll = long long;
#define endl '\n'

class Triplet
{
public:
    int x, y, gcd;
};

Triplet extendedEuclid(int a, int b)
{
    // Base Case
    if (b == 0)
    {
        Triplet ans;
        ans.gcd = a;
        ans.x = 1;
        ans.y = 0;
        return ans;
    }
    // Extended Euclid Algorithms
    Triplet smallAns = extendedEuclid(b, a % b);
    Triplet ans;
    ans.gcd = smallAns.gcd;
    ans.x = smallAns.y;
    ans.y = smallAns.x - (a / b) * smallAns.y;
    return ans;
}

int mmInverse(int a, int m)
{
    Triplet ans = extendedEuclid(a, m);
    if (ans.gcd != 1)
    {
        cout << "No Solution\n";
        return -1;
    }
    else
    {
        return ans.x;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int a, m;
    cin >> a >> m;
    int ans = mmInverse(a, m);
    cout << ans << endl;

    return 0;
}

/*
Input
5 12
Output
5

Input
5 17
Output
7

*/