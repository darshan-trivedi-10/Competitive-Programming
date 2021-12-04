#include <bits/stdc++.h>
using namespace std;

struct node
{
    string str;
    int num;
    double doub;
    char x;
    node(string str_, int num_, double doub_, char x_)
    {
        str = str_;
        num = num_;
        doub = doub_;
        x = x_;
    }
};

int main()
{
    // set
    // given n elements, tell me the number of unique elements.
    int arr[] = {2, 5, 2, 1, 5}; // 3 unique element --> {1, 2, 5}

    /*
    ==> When in quesion say about unique than we have to use set.
    ==> SET store only unique elements.
    ==> set store element in a sorted order.
    ==> we can't access  element in set like st [0], 
        st[index] this is wrong.
    ==> we can access set element using iterator.  
    ==> .insert take O(logn) time. where n is a size of 
        set.    

    */

    set<int> st;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        st.insert(x);
    }

    // st -> {1, 2, 5}
    // Erase Functionality (log(n))
    st.erase(st.begin()); //st.erase(iterator) // st -> {2 , 5}
    auto it1 = st.begin();
    auto it2 = ++st.begin();
    // erasing elements within the range of it1 and it2
    st.erase(it1, it2);
    st.erase(5); // st.erase(key) // delete the 5
    set<int> st1 = {1, 5, 7, 8};
    auto it22 = st1.find(7); // logn // it2 will be iterator to 7
    auto it11 = st1.find(9); // it = st.end();
    st1.emplace(9);         //st1.insert(9);

    cout << st1.size() << endl;

    /*
    --> if element is not present in set you write st. 
        find(element) they return st.end();
    */

    // delete the entire set
    st.erase(st.begin(), st.end()); // log(n)

    set<node> s;

    /* ************************************************************************* */
    // unordered_set

    /*

    ==> All the Operastion in set are in unordered_set.
    ==> average time complexiy is O(1)
    ==> but the worst case is linear in nature, O(set size).
    ==> If you Get TLE --> switch to set.

    */
    unordered_set<int> ust;
    ust.insert(2);
    ust.insert(3);
    ust.insert(1);

    // MULTISET
    /*
    
    */

    multiset<int> ms;
    ms.insert(1);
    ms.insert(1);
    ms.insert(1);
    ms.insert(3);
    ms.insert(2);
    ms.insert(3);
    ms.insert(2); // ms.emplace(3)
    // ms --> {1, 1, 2, 2, 3}
    ms.erase(2);                    // all the instances will be erased
    auto it = ms.find(2);           //returns an iterator pointing to the first
    ms.clear();                     // deleted the entire set
    ms.erase(ms.begin(), ms.end()); // deletes the entire set.

    // finds how many times 2 occurs
    cout << ms.count(2) << endl;

    return 0;
}

/*

A. SET

==> Stores the values in sorted order.

==> Stores only unique values.

==> Elements can only be inserted or deleted but cannot be modified.

==> We can erase more than 1 element by giving start iterator and end iterator position.

==> Traversal using iterators.

==> Sets are implemented as Binary Search Tree.

B. Unordered_set

==> Elements can be stored in any order. ( no sorted order )

==> Stores only unique values.

==> Hash-table used to store elements.

==> We can erase only the element for which iterator position is given.

==>  All other properties similar to set.

C. Multiset

==> Stores elements in sorted order.

==> It allows storage of multiple elements.

==> We can erase more than 1 element by giving start iterator and end iterator.

==> All other properties similar to set.

*/