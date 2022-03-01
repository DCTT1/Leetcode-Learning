/*
 * @lc app=leetcode.cn id=24 lang=cpp
 *
 * [24] 两两交换链表中的节点
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
        ListNode *first = new ListNode(0);   //�ڱ��ڵ㣬����������ͷ���
        first->next = head;
        ListNode *p1 = first;       //��Ҫ�����ڵ��ǰһ���ڵ�
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

