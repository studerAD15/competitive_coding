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
    void solve(TreeNode* root,int val)
    {
        if(val<root->val)
        {
            if(root->left==nullptr)
            {
                root->left =new TreeNode(val);
                return ;
            }
            solve(root->left,val);
        }
        else
        {
            if(root->right==nullptr)
            {
                root->right= new TreeNode(val);
                return ;
            }
            solve(root->right,val);
        }

    }
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        if(root==nullptr)
        {
            return new TreeNode(val);
        }
        solve(root,val);
        return root;
    }
};