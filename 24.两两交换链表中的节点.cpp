/*
 * @lc app=leetcode.cn id=24 lang=cpp
 *
 * [24] 涓や袱浜ゆ崲閾捐〃涓殑鑺傜偣
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
    ListNode* swapPairs(ListNode* head) {
        ListNode *first = new ListNode(0);   //哨兵节点，或者是虚拟头结点
        first->next = head;
        ListNode *p1 = first;       //需要交换节点的前一个节点
        ListNode *p2;
        while (p1->next != NULL && p1->next->next != NULL)
        {
            p2 = p1->next;
            p1->next = p2->next;
            p2->next = p2->next->next;
            p1->next->next = p2;
            p1 = p2;
        }
        return first->next;
    }
};
// @lc code=end

