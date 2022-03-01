/*
 * @lc app=leetcode.cn id=438 lang=cpp
 *
 * [438] 找到字符串中所有字母异位词
 */

// @lc code=start
class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        int ht1[26] = {0},ht2[26] = {0};
        for(auto ch : p)
            ht2[ch - 'a'] ++;
        vector<int> res;
        for (int slow = 0,fast = 0; fast < s.size(); fast++)
        {
            ht1[s[fast]-'a'] ++;
            while (ht1[s[fast]-'a'] > ht2[s[fast]-'a'])
            {
                ht1[s[slow]-'a'] --;
                slow ++;
            }
            if(fast-slow+1 == p.size())
                res.push_back(slow);
        }
        return res;
    }
};
// @lc code=end

