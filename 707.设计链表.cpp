/*
 * @lc app=leetcode.cn id=707 lang=cpp
 *
 * [707] 设计链表
 */

// @lc code=start
class MyLinkedList {
public:
    struct ListNode {
        int val;
        ListNode *next;
        ListNode (int x): val(x),next(NULL) {}
    };
    MyLinkedList() {
        _dummyHead = new ListNode(0);
        _size = 0;
    }
    
    int get(int index) {
        if(index < -1 || index >(_size-1))
            return -1;
        ListNode *cur = _dummyHead->next;
        while(index--)
            cur = cur->next;
        return cur->val;
    }
    
    void addAtHead(int val) {
        ListNode *newnode = new ListNode(val);
        newnode->next = _dummyHead->next;
        _dummyHead->next = newnode;
        _size ++;
    }
    
    void addAtTail(int val) {
        ListNode *newnode = new ListNode(val);
        ListNode *cur = _dummyHead;
        while(cur->next != NULL) {
            cur = cur->next;
        }
        cur->next = newnode;
        _size ++;
    }
    
    void addAtIndex(int index, int val) {
        if(index > _size)  return;
        ListNode *newnode = new ListNode(val);
        ListNode *cur = _dummyHead; 
        while(index--)
            cur = cur->next;
        newnode->next = cur->next;
        cur->next = newnode;
        _size ++;
    }
    
    void deleteAtIndex(int index) {
        if(index >= _size)    return;
        ListNode *cur = _dummyHead;
        while(index--) 
            cur = cur->next;
        ListNode *temp = cur->next;
        cur->next = cur->next->next;
        delete temp;
        _size --;
    }

    void printLinkedList() {
        ListNode* cur = _dummyHead;
        while (cur->next != nullptr) {
            cout << cur->next->val << " ";
            cur = cur->next;
        }
        cout << endl;
    }
private:
    int _size;
    ListNode *_dummyHead;
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */
// @lc code=end

