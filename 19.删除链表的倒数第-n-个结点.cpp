/*
 * @lc app=leetcode.cn id=19 lang=cpp
 *
 * [19] 删除链表的倒数�? N 个结�?
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    int cur = 0;
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(!head) return  NULL;
        head->next = removeNthFromEnd(head->next, n);
        cur ++;
        if(n == cur) return head->next;
        return head;
    }
};
// @lc code=end

