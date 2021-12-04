#include <bits/stdc++.h>
using namespace std;

array<int, 3> arr1; // -> {0,0,0};

int main()
{
    // Arrays -> int arr[100];
    array<int, 3> arr;           // -> {?,?,?};
    array<int, 5> a = {1, 5, 6}; // -> {1, 5, 6, 0, 0}
    array<int, 5> arr2;
    arr.fill(0);
    arr2.fill(10); // -> {10,10,10,10,10}
    for (int i = 0; i < 5; i++)
    {
        cout << arr2.at(i) << " "<<arr2[i];
    }
    cout << endl;

    // Iterators
    // begin(),end(),rbegin() = reverse begin ,rend() = reverse end;
    array<int, 5> a1 = {1, 5, 6}; // -> {1, 5, 6, 0, 0}
    for (auto it = a1.begin(); it != a1.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;

    for (auto it = a1.rbegin(); it != a1.rend(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;

    for (auto it = a1.end() - 1; it >= a1.begin(); it--)
    {
        cout << *it << " ";
    }
    cout << endl;
    // for each loop
    for (auto it : a1)
    {
        cout << it << " ";
    }
    cout << endl;

    string s = "Darshan Trivedi";
    for (auto c : s)
    {
        cout << c << " ";
    }
    cout << endl;

    // ==> Function
    //size
    cout << a1.size() << endl;

    // front
    cout << a1.front() << endl; //a1.at(0);

    // back
    cout << a1.back() << endl;

    return 0;
}
