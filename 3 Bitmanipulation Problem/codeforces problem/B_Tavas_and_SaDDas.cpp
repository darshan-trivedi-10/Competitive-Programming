/*
ॐ त्र्यम्बकं यजामहे सुगन्धिं पुष्टिवर्धनम् |
उर्वारुकमिव बन्धनान्मृत्योर्मुक्षीय माऽमृतात् ||
*/

// https://codeforces.com/problemset/problem/535/B

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

void printb(int n)
{
    while (n > 0)
    {
        cout << (n & 1);
        n /= 2;
    }
}

template <typename O>
void output(O &a, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
        printb(a[i]);
        nline
    }
}

bool lucky(int n)
{
    string ss = to_string(n);
    for (int i = 0; i < ss.size(); i++)
    {
        if (!(ss[i] == '4' || ss[i] == '7'))
        {
            return 0;
        }
    }

    return 1;
}

void ans()
{
    string s;
    cin >> s;
    ll digit = s.size();
    ll ans = 0;
    ans = (1 << digit) - 2;
    ll count = 0;
    for (int i = digit - 1; i >= 0; i--)
    {
        if (s[i] == '7')
        {
            ans += (1 << count);
        }
        count++;
    }

    pt(ans + 1)
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    // srand(time(NULL));
    int s = 1;
    bool ray = 0;
    int t = 1;
    // cin >> t;
    while (t--)
    {
        if (ray)
            cout << "Case #" << s << ": ";
        ans();
        s++;
    }
    return 0;
}

/*
4 7 44 47 74 77 444 447 474 477 744 747 774 777
*/
