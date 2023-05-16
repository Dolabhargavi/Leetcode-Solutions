/**
 *Definition for a binary tree node.
 *struct TreeNode {
 *  int val;
 *  TreeNode * left;
 *  TreeNode * right;
 *  TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *  TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *  TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 *};
 */
class Solution
{
    public:
        vector<vector < int>> zigzagLevelOrder(TreeNode *root)
        {
            vector<vector < int>> ans;
            queue<TreeNode*> q;

            bool ltor = true;
            if (root == NULL) return ans;
            q.push(root);
            while (!q.empty())
            {

                int size = q.size();
                vector<int> level(size);
                for (int i = 0; i < size; i++)
                {
                    TreeNode *curr = q.front();
                    q.pop();
                    int ind = ltor ? i : (size - 1 - i);
                    level[ind] = curr->val;
                    if (curr->left) q.push(curr->left);
                    if (curr->right) q.push(curr->right);
                }
                ltor = !ltor;
                ans.push_back(level);
            }
            return ans;
        }
};