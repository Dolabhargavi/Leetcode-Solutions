/**
 *Definition for a binary tree node.
 *struct TreeNode {
 *    int val;
 *    TreeNode * left;
 *    TreeNode * right;
 *    TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 *};
 */
class Solution
{
    public:

        int minDepth(TreeNode *root)
        {

            return check(root);
        }
    int check(TreeNode *root)
    {
        if (root == NULL) return 0;
        int lh = check(root->left);
        int rh = check(root->right);
        if (!lh || !rh)
        {
            return 1 + max(lh, rh);
        }
        return 1 + min(lh, rh);
    }
};