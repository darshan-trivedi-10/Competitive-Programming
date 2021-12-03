#include <bits/stdc++.h>
using namespace std;

int main()
{
    // priority_queue
    // push
    // size
    // top
    // pop
    // empty
    // store element in descrising order
    priority_queue<int> pq;
    pq.push(1);
    pq.push(5);
    pq.push(2);
    pq.push(6);
    cout << pq.top() << endl; // print 6
    pq.pop();
    cout << pq.top() << endl; // print 5
    priority_queue<pair<int, int>> pq1;
    pq1.push({1, 5});
    pq1.push({1, 6});
    pq1.push({1, 7});

    // Minimum priority_queue using maximum priority_queue.
    priority_queue<int> pq_min;
    pq_min.push(-1);
    pq_min.push(-5);
    pq_min.push(-2);
    pq_min.push(-6);

    cout << -1 * pq_min.top() << endl;

    // min priority queue
    priority_queue<int, vector<int>, greater<int>> min_pq;  // This is syntax vector and greater
    min_pq.push(0);
    min_pq.push(5);
    min_pq.push(4);
    min_pq.push(2);
    cout << min_pq.top() << endl;

    priority_queue<pair<int, int>, vector<int>, greater<int>> min_pq_pr;

    return 0;
}