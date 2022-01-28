/*
Math
Given an integer n, you can perform the following operations zero or more times:

mul x: multiplies n by x (where x is an arbitrary positive integer).

sqrt: replaces n with √n (to apply this operation, √n must be an integer).

You can perform these operations as many times as you like. What is the minimum value of n, that can be achieved, and what is the minimum number of operations, to achieve that minimum value?

Return an array containing the minimum value of n and the number of operations required to achieve that value respectively.

Constraints:

1 <= n <= 10^6

Example:

Input: n= 5184
 
Output: {6, 4}
 
Explanation: You can first apply sqrt to get 72, then mul 18 to get 1296 and finally two more sqrt and you get 6.
*/