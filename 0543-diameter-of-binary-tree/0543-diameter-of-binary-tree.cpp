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
        int diameterOfBinaryTree(TreeNode *root)
        {
            int maxi = 0;
            check(root, maxi);
            return maxi;
        }
    public:
        int check(TreeNode *root, int &maxi)
        {
            if (root == NULL) return 0;
            int lh = check(root->left, maxi);
            int rh = check(root->right, maxi);
            maxi = max(maxi, lh + rh);
            return (1 + max(lh, rh));
        }
};