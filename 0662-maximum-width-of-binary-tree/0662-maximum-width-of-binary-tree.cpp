/**
 *Definition for a binary tree node.
 *struct TreeNode {
 *int val;
 *TreeNode * left;
 *TreeNode * right;
 *TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 *};
 */
class Solution
{
    public:
        int widthOfBinaryTree(TreeNode *root)
        {
            if (!root) return 0;
            long long last = 0;
            long long first = 0;
            queue<pair<TreeNode*, long long int>> q;
            long long ans = 0;
            q.push({ root,
                0 });
            while (!q.empty())
            {
                int minn = q.front().second;
                auto size = q.size();
                for (int i = 0; i < size; i++)
                {
                    TreeNode *node = q.front().first;
                    long long id = q.front().second - minn;
                    q.pop();
                    if (i == 0) first = id;
                    if (i == (size - 1)) last = id;
                    if (node->left) q.push({ node->left,
                        2 *id + 1 });
                    if (node->right) q.push({ node->right,
                        2 *id + 2 });
                }
                ans = max(ans, last - first + 1);
            }
            return ans;
        }
};