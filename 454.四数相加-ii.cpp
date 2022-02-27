/*
 * @lc app=leetcode.cn id=454 lang=cpp
 *
 * [454] 四数相加 II
 */

// @lc code=start
class Solution {
public:
    int fourSumCount(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3, vector<int>& nums4) {
        unordered_map<int,int> umap;
        for(int a:nums1) {
            for(int b:nums2) {
                umap[a+b] ++;
            }
        }

        int res = 0;
        for(int c:nums3) {
            for(int d:nums4) {
                if(umap.count(-c-d))
                    res += umap[-c-d];
            }
        }
        return res;
    }
};
// @lc code=end

