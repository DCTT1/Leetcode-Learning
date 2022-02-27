/*
 * @lc app=leetcode.cn id=69 lang=cpp
 *
 * [69] x 的平方根 
 */

// @lc code=start
class Solution {
public:
    int mySqrt(int a) {
        long x = a;
        while (x*x > a)
        {
            x = (x+a/x)/2;
        }
        
        return x;
    }
};
// @lc code=end

