#include<iostream>
using namespace std;

struct node{
        int val;
        node *pre, *next;
        node(int val=0,node *pre=NULL,node *next=NULL):val(val),pre(pre),next(next) {}
    };

class MyLinkedList {
    int size;
    node *pre,*next;
public:
    MyLinkedList()::size(0) {
        head = new node;
        tail = new node;
        head->next = tail;
        tail->pre = head;
    }

    int get(int index) {
        if (index < size && index >-1)
        {
            node *p = head->next;
            while(index--)
                p = p->next;
            return p->val;
        }
        else return -1;
    }
    void addAtHead(int val) {
        node *p = new node(val,head,head->next);
        head->next->pre = p;
        head->next = p;
        size ++;
    }

    void addAtTail(int val) {
        node *p = new node(val,tail->pre,tail);
        tail->pre->next = p;
        tail->pre = p;
        size ++;
    }

    void addAtIndex(int index, int val) {
        if(index > size) return;
        node *p = head->next;
        while(index-- > 0) {p = p->next;}
        node *np = new node(val,p->pre,p);
        p->pre->next = np;
        p->pre = np;
        size ++;
    }

    void deleteAtIndex(int index) {
        if(index > size-1 || index = 0) return;
        node *p = head->next;
        while(index--)
            p = p->next;
        p->pre->next = p->next;
        p->next->pre = p->pre;
        delete p;
        size --;
    }
};