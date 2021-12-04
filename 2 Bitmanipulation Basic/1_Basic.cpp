#include <bits/stdc++.h>
using namespace std;
using lli = long long int;
using ll = long long;
#define endl '\n'

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    cout << INT_MAX << endl;
    int a = (1LL << 32) - 1;
    cout << a << endl; // Print -1
    int b = (1LL << 31) - 1;
    cout << b << endl;
    unsigned int c = (1LL << 32) - 1;
    cout << c << endl;

    return 0;
}
