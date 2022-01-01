// https://www.codechef.com/UAPRAC/problems/ADDXL
#include <bits/stdc++.h>
using namespace std;
using lli = long long int;
using ll = long long;
#define endl '\n'

string add(string a, string b)
{
    if (b.size() > a.size())
    {
        swap(a, b);
    }

    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());
    string ans = "";
    int carry = 0;
    for (int i = 0; i < min(a.size(), b.size()); i++)
    {
        int curr = (int)(a[i] - '0') + (int)(b[i] - '0') + carry;

        carry = curr / 10;
        curr = curr % 10;
        string temp = to_string(curr);
        // cout << i << " " << carry << " " << curr << " " << temp << endl;
        ans += temp;
    }

    if (a.size() > b.size())
    {
        int cs = b.size();
        for (int i = cs; i < a.size(); i++)
        {
            int curr = (int)(a[i] - '0') + carry;
            carry = curr / 10;
            curr = curr % 10;
            string temp = to_string(curr);
            ans += temp;
            // cout << i << " " << carry << " " << curr << " " << temp << endl;
        }
    }

    if (carry > 0)
    {
        string temp = to_string(carry);
        ans += temp;
    }

    reverse(ans.begin(), ans.end());
    return ans;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string a, b;
        cin >> a >> b;
        cout << add(a, b) << endl;
    }

    return 0;
}

