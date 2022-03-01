/*
 * @lc app=leetcode.cn id=509 lang=cpp
 *
 * [509] 斐波那契�?
 */

// @lc code=start
class Solution {
public:
    int fib(int n) {
        int a = 0;
        int b = 1;
        int sum;
        for (int i = 0; i < n; i++)
        {
            sum = a+b%1000000007;
            a = b;
            b = sum;
        }
        return a;
    }
};
// @lc code=end

