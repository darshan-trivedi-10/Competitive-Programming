/*
ॐ त्र्यम्बकं यजामहे सुगन्धिं पुष्टिवर्धनम् |
उर्वारुकमिव बन्धनान्मृत्योर्मुक्षीय माऽमृतात् ||
*/
// https://codeforces.com/problemset/problem/1566/C
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

int give(char a, char b)
{
    if (a == '1' && b == '1' || a == '2' && b == '2')
    {
        return 0;
    }

    if (a == '0' && b == '0')
    {
        return 1;
    }
    if (a == '0' && b == '1' || a == '1' && b == '0')
    {
        return 2;
    }
    if (a == '2' && b == '1' || a == '1' && b == '2')
    {
        return 0;
    }
    return 1;
}

bool cc(string aa)
{
    return (aa == "10" || aa == "01" || aa == "11");
}

void ans()
{
    int n;
    cin >> n;
    string a, b;
    cin >> a >> b;
    bool vis[n] = {0};
    int ans = 0;

    for (int i = 0; i < n; i++)
    {
        if (a[i] == '0' && b[i] == '1' || a[i] == '1' && b[i] == '0')
        {
            ans += 2;
            vis[i] = 1;
        }
    }

    char c = '0', d = '1';
    for (int i = 0; i < n; i++)
    {
        if (a[i] == c && b[i] == c)
        {
            vis[i] = 1;
            bool flag = 0;
            if (i > 0 && !vis[i - 1] && a[i - 1] == d && b[i - 1] == d)
            {
                flag = 1;
            }
            else if (i != (n - 1) && !vis[i + 1] && a[i + 1] == d && b[i + 1] == d)
            {
                flag = 1;
                vis[i + 1] = 1;
            }

            if (flag)
            {
                ans += 2;
            }
            else
            {
                ans++;
            }
        }
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
    cin >> t;
    while (t--)
    {
        // if (ray)
        // cout << "Case #" << s << ":\n";
        ans();
        s++;
    }
    return 0;
}