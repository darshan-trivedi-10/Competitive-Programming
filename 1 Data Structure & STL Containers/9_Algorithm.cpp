#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

// Best 46:00 to 49:30

int main()
{
    // Algorithms
    // sorting
    // array, vector
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n); // in increasing order
    sort(arr + 1, arr + 3);
    vector<int> vec(5, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> vec[i];
    }

    sort(vec.begin(), vec.end()); // O(n*logn)

    // vec --> {1, 6, 2, 7, 4}
    //          0  1  2  3  4
    // sort till index from 1 to 3
    // fina vec --> {1, 2, 6, 7, 4}
    sort(vec.begin() + 1, vec.end() + 4);

    // If i wanna reverse
    // reverse(start,end);
    reverse(vec.begin(), vec.end()); // in Vector.
    reverse(arr, arr + n);           // in array

    // Maximum element in any index range
    // i to j give me the maximum

    // Max Element
    int el = *max_element(arr, arr + n); // max_element return pointer/iterator

    // Min Element
    int el = *min_element(arr, arr + n); // min_element return pointer/iterator

    // I give you a range and i want you to find the sum in that range till i to j
    // i - j, tell me the sum in the range i to j.
    int sum = accumulate(arr, arr + n, 0); //(start,end,initial sum)
    int sum = accumulate(vec.begin(), vec.end(), 10);

    // arr[] = {1,6,7,1,2,1,3}
    // x = 1
    // tell me how many times the element x occurs in the array
    int cnt = 0;
    // count(start,end,x);
    int cnt = count(arr, arr + n, 1);
    int cnt1 = count(vec.begin(), vec.end(), 1);

    // arr[] = {1, 2, 5, 1, 2, 4, 4}
    // I want you to find the first occurrence of 2
    // it is in the index 1

    auto find1 = find(arr, arr + n, 2); // return an iterator
    // pointing to the first instance of it, or else it
    // returns pointing to the end() if it is not there
    int indexf = find1 - arr;
    auto it = find(vec.begin(), vec.end(), 2);
    int indexv = it - vec.begin();

    // arr[] = {1, 5, 6, 2, 3, 5, 6}
    // x = 4
    auto it = find(vec.begin(), vec.end(), 4);
    if (it == vec.end())
    {
        cout << "Element is not present\n";
    }
    else
    {
        cout << "Element is first present at ==> " << it - vec.begin() << endl;
    }
    /*  This Work in Only Sorted Arrays  */

    // Binary search
    // this stl only works on sorted arrays.
    // arr[] => {1, 5, 7, 9, 10};
    // x = 9 --> 9 exits.
    // true
    // x = 8
    // false --> 8 dose not exits

    // binary_search(start,end,x)
    // return true or false.
    // Time Complexity : O(logn)
    bool resa = binary_search(arr, arr + n, 8);
    bool resv = binary_search(vec.begin(), vec.end(), 8);

    // lower_bound function
    // Return an iterator to the first element which is not less than X.
    // arr[] = {1,5,7,7,8,10,10,10,11,11,12}
    // x = 10
    // x = 6
    // x = 13
    int x;
    cin >> x;
    int index;
    auto it = lower_bound(arr, arr + n, x);
    // index = (arr - it);
    auto it = lower_bound(vec.begin(), vec.end(), x);
    index = it - vec.begin();

    // Upper Bound
    // return an iterator which points to an element which is just greater than x
    // arr[] = {1, 5, 7, 7, 8, 10, 10, 10, 11, 11, 12};
    // x = 7; ==> 8
    // x = 6; ==> 7
    // x = 12; end

    int x1;
    cin >> x1;
    int index1;
    auto it1 = upper_bound(arr, arr + n, x);
    // index1 = (arr - it);
    auto it1 = upper_bound(vec.begin(), vec.end(), x1);
    // index1 = it1 - vec.begin();

    // Q1. find the element the first element where the element X lies find dunction can be used but that takes O(N) times the array is sorted

    // Ans1 : Do binary_search if give true and is lower_bound
    // Ans2 :
    int index = lower_bound(arr, arr + n, x) - arr;
    if (index != n && arr[index] == x)
    {
        cout << "Found at : " << index << endl;
    }
    else
    {
        cout << "Not Found" << endl;
    }

    // Find Me the last index of x in arr.
    // arr[] --> {1,5,7,7,8,10,10,10,11,11,12}
    // index -->  0 1 2 3 4 5  6  7  8  9  10
    // Ans upper_bound - 1 and check condition.
    int ind = upper_bound(arr, arr + n, x) - arr;
    ind -= 1;

    if (arr[ind] == x && ind >= 0)
    {
        cout << "last occurrence at " << ind << endl;
    }
    else
    {
        cout << "Dose Not Exits" << endl;
    }

    // Tell me the number of times the x apppearse in arr
    // arr[] --> {1,5,7,7,8,10,10,10,11,11,12}
    // x = 10, ans = 3
    // x = 7, ans = 2.

    // Ans : ub - lb

    return 0;
}
