// https://www.spoj.com/problems/SEQ/
/*
ॐ त्र्यम्बकं यजामहे सुगन्धिं पुष्टिवर्धनम् |
उर्वारुकमिव बन्धनान्मृत्योर्मुक्षीय माऽमृतात् ||

*/
#include <bits/stdc++.h>
using namespace std;
using lli = long long int;
using ll = long long;
#define mod 1000000000
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

struct mat
{
    int sz;
    vector<vector<ll>> m;
    mat(int _sz)
    {
        m.resize(_sz);
        for (int i = 0; i < _sz; i++)
        {
            m[i].resize(_sz);
        }
        sz = _sz;
    }
    void setvalue(ll c[])
    {
        for (int i = 0; i < sz; i++)
        {
            for (int j = 0; j < sz; j++)
            {
                if (i == 0)
                {
                    m[i][j] = c[j];
                }
                else if (i == j + 1)
                {
                    m[i][j] = 1;
                }
                else
                {
                    m[i][j] = 0;
                }
            }
        }
    }
    void identity()
    {
        for (int i = 0; i < sz; i++)
        {
            m[i][i] = 1;
        }
    }
    mat operator*(mat a)
    {
        mat res(sz);
        for (int i = 0; i < sz; i++)
        {
            for (int j = 0; j < sz; j++)
            {
                for (int k = 0; k < sz; k++)
                {
                    res.m[i][j] += m[i][k] * a.m[k][j];
                    res.m[i][j] %= mod;
                }
            }
        }

        return res;
    }
};

void ans()
{
    int k;
    cin >> k;
    ll b[k], c[k];
    input(b, k);
    input(c, k);
    ll n;
    cin >> n;
    if (n <= k)
    {

        pt(b[n - 1])
    }
    else
    {
        mat t(k);
        t.setvalue(c);
        mat res(k);
        res.identity();
        n = n - k;
        while (n)
        {
            if (n & 1)
            {
                res = res * t;
            }
            t = t * t;
            n /= 2;
        }

        ll ans = 0;
        for (int i = 0; i < k; i++)
        {
            ans = (ans + (res.m[0][i] * b[k - i - 1]) % mod) % mod;
        }

        pt(ans)
    }
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