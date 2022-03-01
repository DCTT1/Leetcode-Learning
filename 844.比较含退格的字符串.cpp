/*
 * @lc app=leetcode.cn id=844 lang=cpp
 *
 * [844] 比较含退格的字符�?
 */

// @lc code=start
class Solution {
public:
    bool backspaceCompare(string S, string T) {
        int sSkipNum = 0; // ��¼S��#����
        int tSkipNum = 0; // ��¼T��#����
        int i = S.size() - 1;
        int j = T.size() - 1;
        while (1) {
            while (i >= 0) { // �Ӻ���ǰ������S��#
                if (S[i] == '#') sSkipNum++;
                else {
                    if (sSkipNum > 0) sSkipNum--;
                    else break;
                }
                i--;
            }
            while (j >= 0) { // �Ӻ���ǰ������T��#
                if (T[j] == '#') tSkipNum++;
                else {
                    if (tSkipNum > 0) tSkipNum--;
                    else break;
                }
                j--;
            }
            // ��벿��#�������ˣ��������Ƚ�S[i] != T[j]
            if (i < 0 || j < 0) break; // S ����T ������ͷ��
            if (S[i] != T[j]) return false;
            i--;j--;
        }
        // ˵��S��Tͬʱ�������
        if (i == -1 && j == -1) return true;
        return false;
    }
};
// @lc code=end

