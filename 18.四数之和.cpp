/*
 * @lc app=leetcode.cn id=18 lang=cpp
 *
 * [18] 四数之和
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        vector<vector<int>> ret;
        for(int first = 0; first < n; first++)
            if(first > 0 && nums[first] == nums[first - 1])
                continue;
        for (int second = first+1; second < n; second++)
        {
            if(second >first+1 && nums[second] == nums[second - 1])
                continue;
            int val = target - nums[first] - nums[second];
            int fourth = n-1;
            for(int third = second+1; third < n;third++) {
                if(third > second+1 && nums[third] == nums[third-1])
                    continue;
                while(third < fourth && nums[third]+nums[fourth] > val)
                    foutrh --;
                if(third == fourth)     break;
                if(nums[third]+nums[fourth] = val)
                    ret.push_back({nums[first], nums[second],nums[third],nums[fourth]});
            }
        }
        return ret;
    }
};
// @lc code=end

