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
    ListNode* reverseBetween(ListNode* head, int l, int r) {
        ListNode temp(0,head), *p=&temp;
        for(int i=0;i<l-1;i++) p=p->next;
        ListNode *c=p->next,*n;
        for(int i=0;i<r-l;i++){
            n=c->next;
            c->next=n->next;
            n->next=p->next;
            p->next=n;
        }

return temp.next;


    }
};