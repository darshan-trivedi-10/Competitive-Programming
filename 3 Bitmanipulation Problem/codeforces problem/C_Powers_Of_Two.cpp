// https://codeforces.com/problemset/problem/1095/C
/*
ॐ त्र्यम्बकं यजामहे सुगन्धिं पुष्टिवर्धनम् |
उर्वारुकमिव बन्धनान्मृत्योर्मुक्षीय माऽमृतात् ||

*/
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

void ans()
{
    ll n, k;
    cin >> n >> k;
    if (__builtin_popcountll(n) > k || k > n)
    {
        na return;
    }
    priority_queue<ll> q;
    for (int i = 0; i < 35; i++)
    {
        if (n & (1LL << i))
        {
            q.push(1LL << i);
        }
    }

    while (q.size() < k)
    {
        ll tt = q.top();
        q.pop();
        q.push(tt / 2);
        q.push(tt / 2);
    }

    ha

        while (!q.empty())
    {
        cout << q.top() << " ";
        q.pop();
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