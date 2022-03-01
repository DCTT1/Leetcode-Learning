/*
 * @lc app=leetcode.cn id=75 lang=cpp
 *
 * [75] 颜色分类
 */

// @lc code=start
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int len = nums.size();
        if(len < 2)     return;
        int zero = 0,i=0;
        int two = len;
        while(i < two) {
            if(nums[i] == 0) {
                swap(nums[zero],nums[i]);
                zero ++;
                i++;
            }else if(nums[i] == 1){
                i++;
            }else{
                two --;
                swap(nums[i],nums[two]);
            }
        }
    }
};
// @lc code=end

