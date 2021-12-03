#include <bits/stdc++.h>
using namespace std;

// Max size of 10^ 6--> int double char
// int a[10000000];

// Max size of 10^8--> bool
// bool a1[100000000];

int main()
{
    // Max size of 10^ 6--> int double char
    // int arr[1000000];

    // Max size of 10^7--> bool
    // bool a1[10000000];

    // Segmentation fault if you push_back 10^7 times.
    // VECTOR
    vector<int> v;            // -> {}
    cout << v.size() << endl; // print -> 0
    v.push_back(0);           // {0}
    v.push_back(1);           // {0,1}
    cout << v.size() << endl; // print -> 2
    v.pop_back();             // {0}
    cout << v.size() << endl; // print -> 1

    v.clear(); // Erase all element at once. {}
    cout << "Create a vector\n";
    vector<int> vec1(4, 0);
    vector<int> vec2(4, 10);
    vector<int> vec3(vec2);
    for (auto it : vec3)
    {
        cout << it << " ";
    }
    cout << endl;

    vector<int> dbt(vec2.begin(), vec2.begin() + 2); // --> { 1, 3}

    dbt.push_back(4); //dbt.emplace_back(3); --> emplace_back is tacks less time than push_back.

    // lower_bound , upper_bound
    // swap swap(v1,v2)

    // to defining 2d vectors.

    vector<vector<int>> d;
    vector<int> s;
    s.push_back(1);
    s.push_back(2);
    s.push_back(8);
    s.push_back(7);

    vector<int> k;
    k.push_back(3);
    k.push_back(4);
    k.push_back(8);
    k.push_back(7);

    vector<int> s1;
    s1.push_back(5);
    s1.push_back(6);
    s1.push_back(8);
    s1.push_back(7);

    d.push_back(s);
    d.push_back(k);
    d.push_back(s1);

    // it is vector itself
    for (auto it : d)
    {
        for (auto it1 : it)
        {
            cout << it1 << " ";
        }
        cout << endl;
    }

    //define 10 x 20
    vector<vector<int>> sdt(10, vector<int>(20, 0));

    vector<int> vec_arr[4];

    // 10 x 20 x 30
    vector<vector<vector<int>>> vec_3d(10, vector<vector<int>>(30, vector<int>(30, 0)));

    return 0;
}