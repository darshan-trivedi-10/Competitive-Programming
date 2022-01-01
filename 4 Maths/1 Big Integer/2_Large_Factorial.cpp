#include <bits/stdc++.h>
using namespace std;
using lli = long long int;
using ll = long long;
#define endl '\n'

void multiply(vector<int> &arr, int no, int &size)
{
    int carry = 0;
    for (int i = 0; i < size; i++)
    {
        int product = arr[i] * no + carry;
        arr[i] = product % 10;
        carry = product / 10;
    }

    // to handle the carry
    while (carry)
    {
        arr[size] = carry % 10;
        carry = carry / 10;
        size++;
    }
}

void bigFactorial(int n)
{

    vector<int> a(1000, 0);
    a[0] = 1;

    int size = 1;
    for (int i = 2; i <= n; i++)
    {
        multiply(a, i, size);
    }

    // Print the Result in the reverse order.
    for (int i = size - 1; i >= 0; i--)
    {
        cout << a[i];
    }
    cout << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int num;
    cin >> num;
    bigFactorial(num);

    return 0;
}