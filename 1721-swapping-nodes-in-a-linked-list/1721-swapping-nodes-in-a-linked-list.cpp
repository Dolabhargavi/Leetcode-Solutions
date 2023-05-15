/**
 *Definition for singly-linked list.
 *struct ListNode {
 *   int val;
 *   ListNode * next;
 *   ListNode() : val(0), next(nullptr) {}
 *   ListNode(int x) : val(x), next(nullptr) {}
 *   ListNode(int x, ListNode *next) : val(x), next(next) {}
 *};
 */
class Solution
{
    public:
        ListNode* swapNodes(ListNode *head, int k)
        {
            ListNode *curr = head;
            ListNode *curr1 = head;
            int cnt = 0;
            while (curr != NULL)
            {
                curr = curr->next;
                cnt++;
            }
            curr = head;
            for (int i = 0; i < k - 1; i++)
            {
                curr = curr->next;
            }
            for (int i = 0; i < cnt - k; i++)
            {
                curr1 = curr1->next;
            }
            int temp = curr->val;
            curr->val = curr1->val;
            curr1->val = temp;
            return head;
        }
};