// https://leetcode.com/problems/closest-divisors/
#include <bits/stdc++.h>
using namespace std;
using lli = long long int;
using ll = long long;
#define endl '\n'

class Solution
{
public:
    vector<int> closestDivisors(int num)
    {
        int num1 = num + 1, num2 = num + 2;
        int sroot = sqrt(num2);
        for (int i = sroot; i >= 1; i--)
        {
            if (num1 % i == 0)
            {
                return {num1 / i, i};
            }
            if (num2 % i == 0)
            {
                return {num2 / i, i};
            }
        }

        return {num1, 1};
    }
};

int main()
{

    return 0;
}