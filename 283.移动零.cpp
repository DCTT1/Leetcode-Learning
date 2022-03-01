/*
 * @lc app=leetcode.cn id=283 lang=cpp
 *
 * [283] 移动�?
 */

// @lc code=start
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int low = 0;
        for (int fast = 0; fast < nums.size(); fast++)
        {
            if(nums[fast] != 0) {
                nums[low++] = nums[fast];
            }
        }
        for(; low < nums.size(); low++)
            nums[low] = 0;
    }
};
// @lc code=end

