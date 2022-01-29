
#include <bits/stdc++.h>
using namespace std;
using lli = long long int;
#define endl '\n'

#define pt(s) cout << s << endl;

void solve(lli a, string b)
{
    if (a == 0)
    {
        pt(b) return;
    }
    lli aa = 0;
    for (lli i = 0; i < b.size(); i++)
    {
        aa = (aa * 10 + b[i] - '0') % a;
    }
    cout << __gcd(a, aa) << endl;
}

void ans()
{
    lli a;
    string b;
    cin >> a >> b;
    solve(a, b);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    // srand(time(NULL));
    int s = 1;
    bool ray = 0;
    int t = 1;
    cin >> t;
    while (t--)
    {
        if (ray)
            cout << "Case #" << s << ": ";
        ans();
        s++;
    }
    return 0;
}