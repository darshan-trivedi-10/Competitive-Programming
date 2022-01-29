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

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int a, b;
    cin >> a >> b;
    // a = 16, b = 10
    Triplet ans = extendedEuclid(a, b);
    cout << ans.gcd << endl;
    cout << ans.x << endl;
    cout << ans.y << endl;

    return 0;
}