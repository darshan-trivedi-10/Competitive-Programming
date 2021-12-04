#include <bits/stdc++.h>
using namespace std;
using lli = long long int;
using ll = long long;
#define endl '\n'

void printBinary(int n)
{
    for (int i = 10; i >= 0; i--)
    {
        cout << ((n >> i) & 1);
    }
    cout << endl;
}

void check_set(int num, int i)
{
    int ans = (num & (1 << i));
    if (ans == 0)
    {
        cout << "Unset\n";
    }
    else
    {
        cout << "Set\n";
    }
}

void set_i_th_bit(int &num, int i)
{
    num = (num | (1 << i));
}
// ~ is known is Tilda
void unset_i_th_bit(int &num, int i)
{
    num = (num & (~(1 << i)));
}

void toggle_bit(int &num, int i)
{
    num = (num ^ (1 << i));
}

int count_set_bit(int num)
{
    int ans = 0;
    for (int i = 31; i >= 0; i--)
    {
        if ((num & (1 << i)) != 0)
        {
            ans++;
        }
    }

    return ans;
}

void clear_BitsitsRange(int &num, int i, int j)
{
    int a = (-1) << (j + 1);
    int b = (1 << i) - 1;
    int mask = a | b;
    num = num & mask;
}

int main()
{
    // printBinary(9);

    // ---> Check i-th bit is set or not.
    // check_set(9, 0);
    // check_set(9, 2);
    // check_set(9, 3);

    // --> set i-th bit
    // int num = 9;
    // printBinary(9);
    // set_i_th_bit(num, 1);
    // printBinary(num);

    // --> unset i-th bit
    // int num = 9;
    // printBinary(9);
    // unset_i_th_bit(num, 0);
    // printBinary(num);
    // cout << num << endl;

    //  --> Toggle Bit
    // int num = 9;
    // printBinary(9);
    // toggle_bit(num, 1);
    // printBinary(num);
    // cout << num << endl;
    printBinary(24);
    cout << count_set_bit(24) << endl;
    cout << __builtin_popcount(24) << endl;
    cout << __builtin_popcountll(1e18) << endl;

    int num = 31;
    clear_BitsitsRange(num, 1, 3);
    // cout << num;

    return 0;
}