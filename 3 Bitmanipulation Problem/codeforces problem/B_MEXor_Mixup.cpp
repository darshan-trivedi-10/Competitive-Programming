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
const int N = 3e5 + 5;

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

void ans(int xorr[])
{
    int a, b;
    cin >> a >> b;
    ll ans = 0;
    if (a > 0)
    {
        ans = xorr[a - 1];
    }

    if (ans == b)
    {
        pt(a)
    }
    else if ((ans ^ b) == a)
    {
        pt(a + 2);
    }
    else
    {
        pt(a + 1)
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    // srand(time(NULL));
    int xorr[N] = {0};
    for (int i = 0; i < N; i++)
    {
        xorr[i] = i;
        if (i > 0)
            xorr[i] = xorr[i] ^ xorr[i - 1];
    }

    int s = 1;
    bool ray = 0;
    int t = 1;
    cin >> t;
    while (t--)
    {
        if (ray)
            cout << "Case #" << s << ": ";
        ans(xorr);
        s++;
    }
    return 0;
}