/*
 * @lc app=leetcode.cn id=209 lang=cpp
 *
 * [209] 闀垮害鏈�灏忕殑瀛愭暟缁?
 */

// @lc code=start
class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int res = INT32_MAX;
        int sum = 0;
        int i = 0;  //滑动窗口起始值，左边界//
        for (int j = 0; j < nums.size(); j++)
        {
            sum += nums[j];
            while (sum >= target) {
                int len = j-i+1;
                res = res < len ? res : len;
                sum -= nums[i++];
            }
        }
        return res == INT32_MAX ? 0: res;
    }
};
// @lc code=end

