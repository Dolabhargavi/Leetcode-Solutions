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
        if(head->next->next==NULL)
        {
           head->next->next=head; 
            head=head->next;
            head->next->next=NULL;
                return head;
        } 
        ListNode *curr=head;
        ListNode *temp=head->next;
        curr->next=curr->next->next;
        temp->next=curr;
        head=temp;
        while(curr->next!=NULL && curr->next->next!=NULL)
        {
            temp=curr->next;
            curr->next=curr->next->next;
            curr=curr->next;
            temp->next=curr->next;
            curr->next=temp;
            curr=curr->next;
           
        }
        return head;
    }
};