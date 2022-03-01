/*
 * @lc app=leetcode.cn id=203 lang=cpp
 *
 * [203] ç§»é™¤é“¾è¡¨å…ƒç´ 
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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode *dummyHead = new ListNode(0);  //ĞéÄâÍ·½áµã//
        dummyHead->next = head;
        ListNode *cur = dummyHead;
        while (cur->next != NULL) {
            if(cur->next->val == val) {
                ListNode *temp = cur->next;
                cur->next = temp->next;
                delete temp;
            }else{
                cur = cur->next;
            }
        }
        head = dummyHead->next;
        delete dummyHead;
        return head;
    }
};
// @lc code=end

