/*
 * @lc app=leetcode.cn id=524 lang=cpp
 *
 * [524] 通过删除字母匹配到字典里最长单�?
 */
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
// @lc code=start
class Solution {
public:
    string findLongestWord(string s, vector<string>& dictionary) {
        vector<string> buf;
        int len = s.size();
        int cursor = 0;
        for (int i = 0; i < dictionary.size(); i++)
        {
            int ref_len = dictionary[i].size();
            int ref_cursor = 0;
            while (cursor < len && ref_cursor < ref_len)
            {
                if(s[cursor] == dictionary[i][ref_cursor])
                    ref_cursor ++;
                cursor++;
            }
            if(ref_cursor == ref_len)
                buf.push_back(dictionary[i]);
            cursor = 0;
        }
        sort(buf.begin(),buf.end(),
            [](string& a,string& b){
                if(a.size() == b.size())
                    return a<b;
                return a.size() > b.size();
            }
        );
        return buf.size()>0 ? buf[0] : "";
    }
};
// @lc code=end

