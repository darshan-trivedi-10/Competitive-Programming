// https://www.spoj.com/problems/JULKA/
// https://www.spoj.com/problems/JULKA/
#include <bits/stdc++.h>
using namespace std;
using lli = long long int;
using ll = long long;
#define endl '\n'

template <typename O>
void output(O &a, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i];
    }
    cout << endl;
}

vector<int> add(vector<int> a, vector<int> b)
{
    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());
    int len = min(a.size(), b.size());
    int carry = 0;
    vector<int> ans;
    for (int i = 0; i < len; i++)
    {
        int val = a[i] + b[i] + carry;
        carry = val / 10;
        ans.push_back(val % 10);
    }
    if (a.size() > len)
    {
        for (int i = len; i < a.size(); i++)
        {
            int val = a[i] + carry;
            carry = val / 10;
            ans.push_back(val % 10);
        }
    }
    else if (b.size() > len)
    {
        for (int i = len; i < b.size(); i++)
        {
            int val = b[i] + carry;
            carry = val / 10;
            ans.push_back(val % 10);
        }
    }
    while (carry)
    {
        ans.push_back(carry % 10);
        carry /= 10;
    }

    reverse(ans.begin(), ans.end());
    return ans;
}

vector<int> devideBy2(vector<int> a)
{
    vector<int> ans;
    int d = 2, rem = 0;
    for (int i = 0; i < a.size(); i++)
    {
        if (rem)
        {
            rem = rem * 10 + a[i];
            ans.push_back(rem / d);
            rem = rem % d;
        }
        else
        {
            if (a[i] < 2)
            {
                rem += a[i];
                ans.push_back(0);
            }
            else
            {
                rem = a[i] % d;
                ans.push_back(a[i] / d);
            }
        }
    }

    vector<int> result;
    int i = 0;
    while (ans[i] == 0)
    {
        i++;
    }

    while (i < ans.size())
    {

        result.push_back(ans[i]);
        i++;
    }

    return result;
}

vector<int> sub(vector<int> a, vector<int> b)
{
    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());
    vector<int> ans;
    int len = b.size();
    for (int i = 0; i < len; i++)
    {
        if (a[i] < b[i])
        {
            a[i + 1]--;
            ans.push_back(10 + a[i] - b[i]);
        }
        else
        {
            ans.push_back(a[i] - b[i]);
        }
    }

    if (a.size() > len)
    {
        for (int i = len; i < a.size(); i++)
        {
            if (a[i] < 0)
            {
                a[i + 1]--;
                ans.push_back(10 * a[i]);
            }
            else
            {
                ans.push_back(a[i]);
            }
        }
    }
    reverse(ans.begin(), ans.end());

    vector<int> result;
    int i = 0;
    while (ans[i] == 0)
    {
        i++;
    }
    while (i < ans.size())
    {
        // cout << ans[i] << " ";
        result.push_back(ans[i]);
        i++;
    }

    return result;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t = 10;
    // cin >> t;
    while (t--)
    {
        string a, b;
        cin >> a >> b;
        vector<int> s(a.size()), d(b.size());
        for (int i = 0; i < a.size(); i++)
        {
            s[i] = a[i] - '0';
        }
        for (int i = 0; i < b.size(); i++)
        {
            d[i] = b[i] - '0';
        }

        vector<int> sum = add(s, d);
        vector<int> div = devideBy2(sum);
        vector<int> diff = sub(s, div);
        // output(sum, sum.size());
        output(div, div.size());
        output(diff, diff.size());
        // output(sum, sum.size());
    }

    return 0;
}
