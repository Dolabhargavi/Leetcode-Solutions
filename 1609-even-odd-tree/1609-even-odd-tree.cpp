/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool isEvenOddTree(TreeNode* root) {
        queue<TreeNode *>q;
        int ind=0;
        q.push(root);
        while(!q.empty())
        {
            int size=q.size();
            ind++;
            int val=0;
            for(int i=0;i<size;i++)
            {
                root=q.front();
                q.pop();
                if(ind%2!=0)
                {
                    if(root->val%2==0) return false;
                    if(i==0)
                    {
                        val=root->val;
                    }
                    else
                    {
                        if(root->val<=val) return false;
                        val=root->val;
                    }
                }
                else
                {
                    if(root->val%2!=0) return false;
                    if(i==0)
                    {
                        val=root->val;
                    }
                    else
                    {
                        if(root->val>=val) return false;
                        val=root->val;
                    }
                }
                if(root->left) q.push(root->left);
                if(root->right) q.push(root->right);
            }
        }
        return true;
    }
};