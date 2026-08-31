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
    bool solve(TreeNode* root,TreeNode* left,TreeNode* right)
    {
        if(root==nullptr)
        {
            return true;
        }
        if(left!=nullptr && left->val>=root->val)
        {
            return false;
        }
        if(right!=nullptr && right->val<=root->val)
        {
            return false;
        }
        return solve(root->left,left,root) && solve(root->right,root,right);
    }
    bool isValidBST(TreeNode* root) {
        return solve(root,nullptr,nullptr);
    }
};