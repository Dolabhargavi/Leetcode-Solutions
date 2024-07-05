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
        vector<int> nodesBetweenCriticalPoints(ListNode *head)
        {
            vector<int> ans
            { -1, -1 };
            int first = 0;
            int last = 0;
            int prev = 0;
            int mini = INT_MAX;
            int cnt = 1;
            ListNode *back = NULL;
            ListNode *front = NULL;
            while (head != NULL && head->next != NULL)
            {
                back = head;
                head = head->next;
                front = head->next;
                cnt++;
                if (front)
                {

                    if ((head->val > back->val && head->val > front->val) || (head->val < back->val && head->val < front->val))
                    {
                        prev = last;
                        if (first == 0)
                            first = cnt;
                        last = cnt;
                    }
                }
                if (prev)
                    mini = min(mini, last - prev);
            }
            if (last - first)
                ans[1] = last - first;
            if (mini < cnt)
                ans[0] = mini;
            return ans;
        }
};