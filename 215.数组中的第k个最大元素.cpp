/*
 * @lc app=leetcode.cn id=215 lang=cpp
 *
 * [215] 数组中的第K个最大元�?
 */

// @lc code=start
#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        int left = 0,right = nums.size()-1;
        int target = nums.size()-k;
        while (left < right)
        {
            int mid = quickSelection(nums,left,right);
            if(mid == target)
                return nums[mid];
            else if(mid < target)
                left = mid+1;
            else right = mid-1;

        }
        return nums[left];
    }

        int quickSelection(vector<int>&nums,int left,int right){
            int i = left+1,j = right;
            while (true)
            {
                while(i<right && nums[i] <= nums[left])
                    ++i;
                while(left<j && nums[j] >= nums[left])
                    --j;
                if(i >= j)
                    break;
                
                swap(nums[i], nums[j]);
            }
            swap(nums[left], nums[j]);
            return j;
        }
};
// @lc code=end

