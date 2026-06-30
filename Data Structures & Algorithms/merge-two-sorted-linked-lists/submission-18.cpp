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
    ListNode* mergeTwoLists(ListNode* a, ListNode* b) {
        // if(!a || b && a->val>b->val) swap(a,b);
        // if(a) a->next=mergeTwoLists(a->next,b);
        // return a;
        ListNode tmp(0);
        ListNode *tail=&tmp;
        while( a && b){
          if(a->val<b->val){
            tail->next=a;
            a=a->next;
          }
          else{
            tail->next=b;
            b=b->next;
          }
          tail=tail->next;
        }
        tail->next=a?a:b;
        return tmp.next;
    }
};
