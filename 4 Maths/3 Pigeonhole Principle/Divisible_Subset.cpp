/*
https://www.codechef.com/problems/DIVSUBS

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
void input(T &a, int n)
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
    lli n;
    cin >> n;
    vector<lli> arr(n), mdd(n + 1, 0);
    for (lli i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    mdd[0] = 0;
    for (lli i = 1; i <= n; i++)
    {
        mdd[i] = arr[i - 1] + mdd[i - 1];
    }

    for (lli i = 0; i <= n; i++)
    {
        mdd[i] = (n + (mdd[i] % n)) % n;
    }

    unordered_map<lli, lli> final;
    for (auto i : mdd)
    {
        if (final.find(i) == final.end())
        {
            final[i] = 1;
        }
        else
        {
            final[i]++;
        }
    }

    lli ans = 999999999;
    int start = 0, end = 0;
    for (auto i : final)
    {
        if (i.second > 1)
        {
            ans = i.first;
            for (auto e = 0; e <= n; e++)
            {
                if (mdd[e] == i.first)
                {
                    start = e;
                    break;
                }
            }
            for (auto e = n; e >= 0; e--)
            {
                if (mdd[e] == i.first)
                {
                    end = e;
                    break;
                }
            }
            break;
        }
    }

    if (ans == 999999999)
    {
        ans = 0;
    }
    pt(end - start) for (int i = start; i < end; i++)
    {
        cout << i + 1 << " ";
    }
    cout << endl;
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