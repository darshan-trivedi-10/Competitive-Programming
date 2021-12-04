#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Key Value
    // Darshan -> 27
    // raj -> 31
    // pratik -> 67
    // dilip -> 89
    /*
       ==> Map Store in a Sorted Order.
       ==> Map Only store uniqe Keys.
    */

    map<string, int> mpp;
    mpp["Darshan"] = 27;
    mpp["raj"] = 31;
    mpp["pratik"] = 67;
    mpp["dilip"] = 89;
    mpp["dilip"] = 26; // Now dilip store 26.
    mpp.emplace("krishna", 100);
    mpp.erase("dilip");
    mpp.erase(mpp.begin());
    mpp.clear();
    mpp.erase(mpp.begin(), mpp.end()); //Cleans up a given range.
    auto it = mpp.find("krishna");
    auto it = mpp.find("meet"); // points to end since she dose not exits
    if (mpp.empty())
    {
        cout << "Yes it is empty\n";
    }

    mpp.count("raj"); // always returns 1 as it stores only 1
    // instance of raj

    pair<int, int> pr;
    pr.first = 1;
    pr.second = 10;
    // Print Map
    for (auto it : mpp)
    {
        // it is a pair then you can use .(dot)
        cout << it.first << " " << it.second << endl;
    }

    for (auto it = mpp.begin(); it != mpp.end(); it++)
    {
        // . not use bcz it's iterator.
        cout << it->first << " " << it->second << endl;
    }

    // does not store in any order.
    unordered_map<int, int> mpp;
    // unordered_map<pair<int,int>,int> np; --> Not POSSIBLE
    // O(1) in almost all cases.
    // O(n) in the worst case, where n is the container size.

    // Pair class
    pair<int, int> pr = {1, 2};
    pair<pair<int, int>, int> pr1 = {{1, 2}, 3};
    pair<pair<int, int>, pair<int, int>> pr2 = {{1, 2}, {2, 4}};
    cout << pr2.first.first;   // print -> 1
    cout << pr2.second.second; // print -> 4

    pair<pair<pair<int, int>, int>, pair<pair<string, int>, int>> pr3;

    vector<pair<int, int>> vec;
    set<pair<int, int>> ss;

    multimap<string, int> mpp;
    mpp["dbt"] = 2;
    mpp["sdt"] = 3;
    mpp.emplace("dbt", 5);

    return 0;
}

/*

                  | map             | unordered_map
---------------------------------------------------------
Ordering        | increasing  order   | no ordering
                | (by default)        |

Implementation  | Self balancing BST  | Hash Table
                | like Red-Black Tree |  

search time     | log(n)              | O(1) -> Average 
                |                     | O(n) -> Worst Case

Insertion time  | log(n) + Rebalance  | Same as search
                      
Deletion time   | log(n) + Rebalance  | Same as search



*/