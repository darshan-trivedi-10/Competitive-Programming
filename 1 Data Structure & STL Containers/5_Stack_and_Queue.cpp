#include <bits/stdc++.h>
using namespace std;

int main()
{

    // Stack
    stack<int> st; // LIFO ds
    // pop
    // top
    // size
    // empty
    // push and emplace

    st.push(2);
    st.push(4);
    st.push(3);
    st.push(1);

    cout << st.top() << endl; // print -> 2
    st.top();                 // delete the last emtered elements
    cout << st.top() << endl; // print -> 3;
    st.top();
    cout << st.top() << endl; // print -> 4

    bool flag = st.empty(); // returns true if stack is empty, or false.

    // deleted the entire stack
    while (!st.empty())
    {
        st.pop();
    }

    cout << st.size() << endl;
    stack<int> st1;
    if (!st1.empty())
    {
        cout << st1.top() << endl;
    }

    // queue ==> FIFO operastion ds
    // push
    // front
    // pop
    // size
    // empty

    queue<int> q;
    q.push(1);
    q.push(5);
    q.push(3);
    q.push(6);

    cout << q.front() << '\n';
    q.pop();
    cout << q.front() << endl;
    while (!q.empty())
    {
        q.pop();
    }

    cout << "Size = " << q.size() << '\n';

    return 0;
}


/*
Time Complexit : O(1).
*/