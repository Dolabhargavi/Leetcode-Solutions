/**
 *Definition for singly-linked list.
 *struct ListNode {
 *    int val;
 *    ListNode * next;
 *    ListNode() : val(0), next(nullptr) {}
 *    ListNode(int x) : val(x), next(nullptr) {}
 *    ListNode(int x, ListNode *next) : val(x), next(next) {}
 *};
 */
class Solution
{
    public:
        int pairSum(ListNode *head)
        {
            ListNode *curr = head;
            ListNode *curr1 = head;
            int maxi = 0;
            while (curr != NULL)
            {
                curr = curr->next->next;
                curr1 = curr1->next;
            }
            curr = head;
            ListNode *temp = head->next;
            ListNode *prev = head;
            while (temp != curr1)
            {
                curr = prev->next;
                temp = curr->next;
                curr->next = head;
                prev->next = temp;
                head = curr;
            }
            while (curr1 != NULL)
            {
                maxi = max(maxi, curr->val + curr1->val);
                curr = curr->next;
                curr1 = curr1->next;
            }
            return maxi;
        }
};