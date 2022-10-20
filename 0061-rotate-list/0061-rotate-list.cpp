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
    ListNode* rotateRight(ListNode* head, int k) {
        ListNode *curr=head;
        ListNode *prev=head;
        int c=1;
        if(head==NULL || head->next==NULL)
            return head;
        while(curr->next!=NULL)
        {
            c++;
            curr=curr->next;
        }
        if(k>=c)
           k=k%c;
        if(k==0)
            return head;
        curr->next=head;
        c=c-k;
        while(c)
        {
            curr=curr->next;
            c--;
        }
        head=curr->next;
        curr->next=NULL;
       
        return head;
    }
};