// https://www.codechef.com/problems/ABX01
#include <bits/stdc++.h>
using namespace std;
using lli = long long int;
using ll = long long;
#define mod 1000000007
#define PI 3.1415926535897932384626433832795
#define endl '\n'

#define ha cout << "YES \n";
#define na cout << "NO\n";
#define all(z) z.begin(), z.end()
#define pt(s) cout << s << endl;
#define ff first
#define ss second
#define um unordered_map
#define us unordered_set
#define nline cout << "\n";
#define pb emplace_back

/*Keep learning
Keep doing
keep upsolving*/
template <typename T>
void input(T a, int n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
}

template <typename O>
void output(O a, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}

lli solve(lli num)
{
    if (num < 10)
    {
        return num;
    }

    lli sum = 0;
    while (num != 0)
    {
        sum = sum + (num % 10);
        num /= 10;
    }

    return solve(sum);
}

lli binary_exponentiation(lli a, lli b)
{
    lli ans = 1;
    // if(b%2==1) this means number b is odd.
    while (b)
    {
        if (b & 1)
        {
            ans = (ans * solve(a));
            ans = solve(ans);
        }
        a = solve(solve(a) * solve(a));
        b = (b >> 1);
    }

    return ans;
}

void ans()
{

    lli a, n;
    cin >> a >> n;
    lli ans = binary_exponentiation(a, n);
    pt(solve(ans))
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