#include <bits/stdc++.h>
using namespace std;

// Best 1:59:00 To 2:00:00
bool cmp(int el1, int el2)
{
    // Incrising Order
    return (el1 <= el2);

    // if (el1 <= el2)
    // {
    //     return 1;
    // }

    // return 0;
}

bool cmp1(pair<int, int> a, pair<int, int> b)
{

    if (a.first == b.first)
    {
        return (a.second >= b.second);
    }

    return a.first < b.first;
}

int main()
{
    // COMPARATOR
    int n = 100;
    int arr[100];
    vector<int> vec;
    for (int i = 0; i < 100; i++)
    {
        int x = rand();
        arr[i] = x;
        vec.emplace_back(x);
    }

    sort(arr, arr + n);
    sort(vec.begin(), vec.end(), cmp); // Desending Order
    for (int i = 0; i < 100; i++)
    {
        // cout << vec[i] << " ";
    }
    cout << endl;

    // arr
    // pait<int,int> arr[] = {{1,4}, {5,2},{6,9}};
    // i want you to sort this in such a way
    // that the element who have first element in pair smaller
    // appears first, and if first is qqual then sort according
    // to second and keep the largest second.
    vector<pair<int, int>> vec_p;
    for (int i = 0; i < n; i++)
    {
        int a = rand(), b = rand();
        if (i >= 90)
        {
            vec_p.push_back({1000, b});
        }
        else
            vec_p.push_back({a, b});
    }

    sort(vec_p.begin(), vec_p.end(), cmp1);
    for (int i = 0; i < n; i++)
    {
        cout << vec_p[i].first << " " << vec_p[i].second << endl;
    }

    // descending
    sort(arr, arr + n, greater<int>());
    // greater<int> is an inbuilt comparator
    // which works only if you wanna do this in descending.

    return 0;
}