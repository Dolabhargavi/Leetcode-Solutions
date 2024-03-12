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
    ListNode * ans;
    void helper(ListNode *head)
    {
        ListNode *curr = head;
        unordered_map<int, ListNode*> m;
        bool nextcall = false;
        int sum = 0;
        while (curr)
        {
            sum += curr->val;
            if (sum == 0)
            {
                ans = curr->next;
                helper(ans);
                break;
            }
            if (m.find(sum)!= m.end())
            {
                ListNode* first = m[sum];
                first->next = curr->next;
                nextcall = true;
                break;
            }
            m[sum] = curr;
            curr = curr->next;
        }
        if (nextcall) helper(head);
    }
    ListNode* removeZeroSumSublists(ListNode *head)
    {
        ans = head;
        helper(head);
        return ans;
    }
};