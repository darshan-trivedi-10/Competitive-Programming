/*
Replace Bits
You are given two 32-bit Number, N and M and two bit positions i and j. Write a method to set all bits between i and j in N equal to M. M (becomes a substring of N locationed at and straring at j)

Example :
N = 10000000000
M = 10101
i = 2, j = 6
Output :
1001010100
*/

#include <bits/stdc++.h>
using namespace std;
using lli = long long int;
using ll = long long;
#define endl '\n'

void clear_BitsitsRange(int &num, int i, int j)
{
    int a = (-1) << (j + 1);
    int b = (1 << i) - 1;
    int mask = a | b;
    num = num & mask;
}

void replaceBits(int &n, int i, int j, int m)
{
    clear_BitsitsRange(n, i, j);
    int mask = (m << i);
    n = n | mask;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n, m, i, j;
    cin >> n >> m >> i >> j; // 15 2 1 3
    replaceBits(n, i, j, m);
    cout << n << endl; // 5

    return 0;
}