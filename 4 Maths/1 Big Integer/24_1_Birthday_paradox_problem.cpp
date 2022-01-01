/*
Birthday Paradox Problem [WarmUp]
------------------------------------------
What is the minimum number of people that should be present in a hall so that there's 50% chance of two people having the same birthday?
*/

#include <bits/stdc++.h>
using namespace std;
using lli = long long int;
using ll = long long;
#define endl '\n'

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    float x = 1.0;
    //  x denotes the prob of 2ppl having same birthday
    int people = 0;
    float num = 356;
    float denom = 356;

    float p;
    cin >> p;

    if (p == 1.0)
    {
        cout << 365 << endl;
        return 0;
    }

    while (x > (1 - p))
    {
        // x is less than the threshold
        x *= (num / denom);
        num--;
        people++;
        cout << "People " << people << " ans x " << x << endl;
    }

    return 0;
}
