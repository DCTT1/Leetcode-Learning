/*
 * @lc app=leetcode.cn id=242 lang=cpp
 *
 * [242] 有效的字母异位词
 */

// @lc code=start
class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> map;
        if(s.size() != t.size())
            return false;
        for (int i = 0; i < s.size(); i++)
        {
            ++ map[s[i]];
            -- map[t[i]];
        }
        for(unordered_map<char,int>::iterator it = map.begin(); it != map.end();it++) {
            if(it->second != 0)
                return false;
        }
        return true;
    }
};
// @lc code=end

