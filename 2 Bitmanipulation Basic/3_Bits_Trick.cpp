#include <bits/stdc++.h>
using namespace std;
using lli = long long int;
using ll = long long;
#define endl '\n'

void printBinary(int n)
{
    for (int i = 6; i >= 0; i--)
    {
        cout << ((n >> i) & 1);
    }
    cout << " ";
}

void odd_even(int num)
{
    // ---> 0-th bit of odd number is 1.
    // ---> 0-th bit of even number is 0.
    if (num & 1)
    {
        cout << "ODD\n";
    }
    else
    {
        cout << "EVEN\n";
    }
}

bool power_of_2(int n)
{
    return ((n & n - 1) == 0);
}

void clear_lastIbits(int &num, int i)
{
    int mask = (-1 << i);
    num = num & mask;
}



int main()
{
    // int n;
    //    cin >> n;
    // odd_even(n);
    // if we want to devide any number by 2 so we can do (num<<1) --> It's so fast.
    // char j = 'a';
    // for (char i = 'A'; i <= 'Z'; i++, j++)
    // {
    //     cout << i << " --> ";
    //     printBinary(int(i));
    //     cout << j << " --> ";
    //     printBinary(int(j));
    //     cout << endl;
    // }
    // cout << power_of_2(17) << endl;
    // cout << power_of_2(16) << endl;

    /*
    --> We Find that in lowercase letter 5-th bit is set. and not set in uppercase letter.
    --> To Convert Uppercase to Lowercase or Lowercase to Uppercase We have to toggle 5-th bit.
    */
    cout << char('A' | (1 << 5)) << endl;
    cout << char('a' & (~(1 << 5))) << endl;
    // Now (1<<5) in character is space (' '), and (~(1<<5)) in charcter is  ('_');
    cout << char('A' | (1 << 5)) << endl;
    cout << char('a' & '_') << endl;



    return 0;
}