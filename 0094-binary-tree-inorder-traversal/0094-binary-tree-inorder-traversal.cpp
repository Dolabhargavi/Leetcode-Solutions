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

// void inorder(TreeNode* root,vector<int>&v)
//     {
//         if(root==NULL)
//             return;
//         inorder(root->left,v);
//         v.push_back(root->val);
//         inorder(root->right,v);                 *** normal inorder Process ***
//     }
//     vector<int> inorderTraversal(TreeNode* root) {
//          vector<int>v;
//         inorder(root,v);
//         return v;
//     }


class Solution {
public:
   // Iterative Inorder traversal
    vector<int> inorderTraversal(TreeNode* root) {
         vector<int>inorder;
        stack<TreeNode *>st;
        while(true)
        {
            if(root!=NULL)
            {
                st.push(root);
                root=root->left;
            }
            else
            {
                if(st.empty()) break;
                root=st.top();
                st.pop();
                inorder.emplace_back(root->val);
                root=root->right;
            }
        }
        return inorder;
    }
};