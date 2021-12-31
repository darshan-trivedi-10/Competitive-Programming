// https://codeforces.com/problemset/problem/1042/B
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

struct abc
{
    int pr;
    string vi;
    int mask;
};

void ans()
{
    int n;
    cin >> n;
    vector<abc> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i].pr >> arr[i].vi;
        arr[i].mask = 0;
        for (int j = 0; j < arr[i].vi.size(); j++)
        {
            int cc = arr[i].vi[j] - 'A';
            arr[i].mask = arr[i].mask | (1 << cc);
        }
    }

    int ans = INT_MAX;
    int aa, bb, cc;
    aa = bb = cc = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        ll m = arr[i].mask;
        if (__builtin_popcountll(m) == 3)
        {
            ans = min(ans, arr[i].pr);
        }
        else
        {
            for (int j = 0; j < n; j++)
            {
                if (((m | arr[j].mask)) == 7 && j != i)
                {
                    ans = min(ans, arr[i].pr + arr[j].pr);
                }
            }
        }

        if (arr[i].vi == "A")
        {
            aa = min(aa, arr[i].pr);
        }
        else if (arr[i].vi == "B")
        {
            bb = min(bb, arr[i].pr);
        }
        else if (arr[i].vi == "C")
        {
            cc = min(cc, arr[i].pr);
        }
    }

    if (max({aa, bb, cc}) != INT_MAX)
    {
        ans = min(ans, aa + bb + cc);
    }

    if (ans == INT_MAX)
    {
        pt(-1) return;
    }

    pt(ans)
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    // srand(time(NULL));
    int s = 1;
    bool ray = 0;
    int t = 1;
    while (t--)
    {
        if (ray)
            cout << "Case #" << s << ": ";
        ans();
        s++;
    }
    return 0;
}