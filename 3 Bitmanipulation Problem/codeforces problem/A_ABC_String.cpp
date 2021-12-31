/*
ॐ त्र्यम्बकं यजामहे सुगन्धिं पुष्टिवर्धनम् |
उर्वारुकमिव बन्धनान्मृत्योर्मुक्षीय माऽमृतात् ||
*/
// https://codeforces.com/problemset/problem/1494/A
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

//

bool check(string s)
{
    int n = s.size();
    int s1 = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '(')
        {
            s1++;
        }
        else
        {
            s1--;
        }
        if (s1 < 0)
        {
            return 0;
        }
    }
    return s1 == 0;
}

void ans()
{
    string s;
    cin >> s;

    if (s[0] == s[s.size() - 1])
    {
        na return;
    }
    for (int i = 0; i < 2; i++)
    {
        char ca = (i ? ')' : '(');
        for (int j = 0; j < 2; j++)
        {
            char cb = (j ? ')' : '(');
            for (int k = 0; k < 2; k++)
            {
                char cc = (k ? ')' : '(');
                string temp;
                for (int i = 0; i < s.size(); i++)
                {
                    if (s[i] == 'A')
                    {
                        temp += ca;
                    }
                    else if (s[i] == 'B')
                    {
                        temp += cb;
                    }
                    else
                    {
                        temp += cc;
                    }
                }

                if (check(temp))
                {
                    ha return;
                }
            }
        }
    }
    na
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