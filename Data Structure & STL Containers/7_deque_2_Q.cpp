#include <bits/stdc++.h>
using namespace std;

int main()
{
    deque<int> dq;
    // it's like a vector.
    // push_front()
    // push_back()
    // pop_front()
    // pop_back()
    // begin, end, rbegin, rend
    // size
    // clear
    // empty
    // at

    list<int> ls; // doubly linked list
    // push_front()
    // push_back()
    // pop_front()
    // pop_back()
    // begin, end, rbegin, rend
    // size
    // clear
    // empty
    // at
    // remove --> O(1).
    ls.push_front(1);
    ls.push_front(2);
    ls.push_front(3);

    ls.remove(2);
    // --> // O(1) operation.

    // Given N elements, print the element that occurs maximum number of times
    // input
    // 5
    // 1 3 3 3 2

    // output
    // 3

    int n;
    cin >> n;
    // map<int, int> mpp;
    unordered_map<int, int> mpp;
    int max = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        mpp[x]++;
        if (mpp[x] > mpp[max])
        {
            max = x;
        }
    }

    cout << mpp[max] << endl;

    // Time Complexity : O(n*logn) in map
    // Time Complexity : O(n) in unordered_map general.

    // You are given n elements, print the element in a sorted order.
    // input
    // n = 6
    // 6 6 3 2 3 5

    // output
    // 2 3 3 5 6 6
    int n1;
    cin >> n1;
    multiset<int> ms;
    for (int i = 0; i < n1; i++)
    {
        int x;
        cin >> x;
        ms.insert(x);
    }

    for (auto it : ms)
    {
        cout << it << endl;
    } // Time Complexity : O(n*logn).




    return 0;
}