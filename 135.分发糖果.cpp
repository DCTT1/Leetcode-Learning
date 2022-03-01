/*
 * @lc app=leetcode.cn id=135 lang=cpp
 *
 * [135] 鍒嗗彂绯栨灉
 */

// @lc code=start
class Solution {
public:
    int candy(vector<int>& ratings) {
        int count = 0;
        vector<int> v1(ratings.size());
        for(int i = 0;i < v1.size();i++)
            v1[i] = 1;
        for(int i = 0;i < ratings.size() - 1;i++)
        {
            if(ratings[i] < ratings[i + 1])      //从左往右进行遍历，得到从左往右的最优解
            {
                v1[i + 1] = v1[i] + 1;     //这里不能够使用改变i对应糖果的值，会出问题的，造成某些出错；          
            } 
        }
        for(int i = ratings.size() - 1;i > 0;i--)
        {
            if(ratings[i] < ratings[i - 1])    //从右往左进行遍历，得到右往左的最优解--两边最优解
            {
                v1[i - 1] = max(v1[i] + 1,v1[i - 1]);
            }
        }
        for(int i = 0;i < v1.size();i++)
            count = count + v1[i];     //计算出来最后的和；
        return count;
    }
};

