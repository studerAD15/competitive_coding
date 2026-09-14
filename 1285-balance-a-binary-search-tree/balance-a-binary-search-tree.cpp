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
    vector<int> arr;
    void inorder(TreeNode* root)
    {
        if(root==nullptr)
        {
            return ;
        }
        inorder(root->left);
        arr.push_back(root->val);
        inorder(root->right);
    }
    TreeNode* solve(int l,int h)
    {
        if(l>h)
        {
            return nullptr;
        }
        int m=l+(h-l)/2;
        TreeNode* newroot=new TreeNode(arr[m]);
        newroot->left=solve(l,m-1);
        newroot->right=solve(m+1,h);
        return newroot;
    }
    TreeNode* balanceBST(TreeNode* root) {
        inorder(root);
        return solve(0,arr.size()-1);
    }
};