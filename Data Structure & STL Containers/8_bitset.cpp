#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Bitset
    // int --> 16 bits
    // char --> 8 bits
    int a[100];
    char aa[100];

    // bitset --> 1 bit only store 1 or 0
    bitset<5> bt;
    cin >> bt; // 11111
    // all
    // any
    // count
    // flip
    // none
    // set
    // reset
    // size
    // test

    cout << bt.all() << endl;   // return a true if all bit are set else return false.
    cout << bt.any() << endl;   // if any bit sit then return true else false.
    cout << bt.count() << endl; // print the number of set bits.

    bt.flip(2); // flip(index) flip bit at index.
    bt.flip();  // flip all

    cout << bt.none() << endl; // if all unset then true else false.

    bt.set();     // Make all bits sit
    bt.set(2);    // sets the 2nd index
    bt.set(2, 0); // set the 2nd index 0

    // reset
    bt.reset();  // turn a;; indexes to 0
    bt.reset(2); // unset the 2nd index.

    cout << bt.size() << endl;

    cout << bt.test(2) << endl; // check if the bit is set or not at index 2

    bt = 10101;
    cout << bt[0] << endl;

    return 0;
}