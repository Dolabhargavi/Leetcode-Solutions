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
        if(head==NULL || head->next==NULL)
            return head;
        ListNode *c=head;
        ListNode *c1=head;
        while(c->next!=NULL && c->next->next!=NULL)
        {
           int temp=c->val;
           c->val=c->next->val;
           c->next->val=temp;
            c=c->next->next;
        }
        if(c->next!=NULL)
        {
           int temp=c->val;
           c->val=c->next->val;
           c->next->val=temp;
        }
        return head;
    }
};