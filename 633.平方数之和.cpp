/*
 * @lc app=leetcode.cn id=633 lang=cpp
 *
 * [633] 骞虫柟鏁颁箣鍜?
 */
#include<iostream>
#include<vector>
#include<math.h>
using namespace std;
// @lc code=start
class Solution {
public:
    bool judgeSquareSum(int c) {
        int num1 = sqrt(c); 
        if(num1 * num1 == c) { //判断 c 本身就是一个平方数
            return true;
        }
        num1 = c;
        for(int i = 1; i <= num1; i += 2) {//每次奇数增大2
            num1 -= i;
            int num2 = sqrt(num1);
            if(num2 * num2 == num1) { // 判断剩下的是否为平方数
                return true;
            }
        }
        return false;
    }
};
// @lc code=end

