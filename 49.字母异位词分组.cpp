/*
 * @lc app=leetcode.cn id=49 lang=cpp
 *
 * [49] 瀛楁瘝寮備綅璇嶅垎缁?
 */

// @lc code=start
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int n = strs.size();
        if(n ==0 || n == 1) return {strs};
        vector<vector<string>> res = {};
        unordered_map<string, vector<string>> sorted_words; //排序后的单词，异位词集合//
        int i=0;
        while(i < n) {
            string tmp = strs[i];
            sort(tmp.begin(), tmp.end());
            sorted_words[tmp].push_back(strs[i]);
            ++i;
        }
        for(auto iter = sorted_words.begin(); iter != sorted_words.end();++iter) {
            res.push_back(iter->second);
        }
        return res;
    }
};
// @lc code=end

