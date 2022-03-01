/*
 * @lc app=leetcode.cn id=347 lang=cpp
 *
 * [347] �? K 个高频元�?
 */

// @lc code=start
#include<iostream>
#include<vector>
#include<map>
using namespace std;
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> res;
        map<int, int> freq;
        using pii = std::pair<int, int>;
        priority_queue<pii,vector<pii>, greater<pii> >pq;
        for(auto e:nums)        ++freq[e];
        for ( auto& pair: freq)
        {
            pq.emplace(pair.second,pair.first);
            if(pq.size() > k)   pq.pop();
        }

        while (! pq.empty())
        {
            res.emplace_back(pq.top().second);
            pq.pop();
        }
        return res;
    }
};
// @lc code=end

