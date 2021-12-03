#include <bits/stdc++.h>
using namespace std;

// Video on take you forward.

int main()
{
    // Next Permutation
    // string s = "abc"
    // all Permutation are as follows :

    // abc
    // acb
    // bac
    // bca
    // cab
    // cba

    string s = "bca";
    bool res = next_permutation(s.begin(), s.end()); // 1
    string s1 = "cba";
    bool res1 = next_permutation(s1.begin(), s1.end()); // 0
    cout << res << " " << res1 << endl;

    // if i give you any random string s = "bca"
    // I want you to print all the permutations

    string s = "bca";
    sort(s.begin(), s.end());
    do
    {
        cout << s << endl;
    } while (next_permutation(s.begin(), s.end())); // O(n!)

    // prev permutation
    bool res = prev_permutation(s.begin(), s.end());
    // bool a = __prev_permutation(s.begin(), s.end());

    return 0;
}

// Time Complexity of next_permutation : O(N);