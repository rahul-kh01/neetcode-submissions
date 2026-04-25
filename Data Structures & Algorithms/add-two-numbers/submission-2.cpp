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
    ListNode* addTwoNumbers(ListNode* a, ListNode* b) {
              ListNode tmp(0);
                 ListNode *tail=&tmp;
                 int carry=0;
                 while(a || b|| carry){
int sum=(a?a->val:0)+(b?b->val:0)+carry;
carry=sum/10;
tail->next=new    ListNode(sum%10);
tail=tail->next;
if(a) a=a->next;
if(b) b=b->next;
        
    }
    return tmp.next;

    }
};
