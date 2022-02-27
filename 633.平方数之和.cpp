/*
 * @lc app=leetcode.cn id=633 lang=cpp
 *
 * [633] 平方数之�?
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
        if(num1 * num1 == c) { //�ж� c �������һ��ƽ����
            return true;
        }
        num1 = c;
        for(int i = 1; i <= num1; i += 2) {//ÿ����������2
            num1 -= i;
            int num2 = sqrt(num1);
            if(num2 * num2 == num1) { // �ж�ʣ�µ��Ƿ�Ϊƽ����
                return true;
            }
        }
        return false;
    }
};
// @lc code=end

