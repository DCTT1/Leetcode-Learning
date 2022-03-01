/*
 * @lc app=leetcode.cn id=540 lang=cpp
 *
 * [540] 有序数组中的单一元素
 */

// @lc code=start
class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int res = nums[0];
        for (int i = 1; i < nums.size(); i++)
        {
            res ^= nums[i];
        }
        return res;
    }
};
// @lc code=end

