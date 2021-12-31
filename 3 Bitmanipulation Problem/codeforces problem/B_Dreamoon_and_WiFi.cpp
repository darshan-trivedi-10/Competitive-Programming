/*
ॐ त्र्यम्बकं यजामहे सुगन्धिं पुष्टिवर्धनम् |
उर्वारुकमिव बन्धनान्मृत्योर्मुक्षीय माऽमृतात् ||

*/
#include <bits/stdc++.h>
#include <iomanip> // std::setprecision

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

void findd(vector<ll> &ans, string s, int i, int aa)
{
    if (i == s.size())
    {
        ans.push_back(aa);
        return;
    }
    if (s[i] == '+')
    {
        findd(ans, s, i + 1, aa + 1);
    }
    else if (s[i] == '-')
    {
        findd(ans, s, i + 1, aa - 1);
    }
    else
    {
        findd(ans, s, i + 1, aa + 1);
        findd(ans, s, i + 1, aa - 1);
    }
}

void ans()
{
    string a, b;
    cin >> a >> b;
    ll ca = 0;
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] == '+')
        {
            ca++;
        }
        else
        {
            ca--;
        }
    }

    if (a == b)
    {
        double ccc = 1.0000000000;
        cout.precision(20);

        cout << ccc << endl;
    }
    else
    {
        vector<ll> ans;
        findd(ans, b, 0, 0);
        double pb = 1.000000000000 / (double)ans.size();
        double cc = 0.00000000000000000;
        for (int i = 0; i < ans.size(); i++)
        {
            if (ca == ans[i])
            {
                cc++;
            }
        }
        cout.precision(20);

        pb = pb * (1.000000000000) * (double(cc * 1.000000000000));
        cout << pb << endl;
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
    // cin>>t;
    while (t--)
    {
        if (ray)
            cout << "Case #" << s << ": ";
        ans();
        s++;
    }
    return 0;
}