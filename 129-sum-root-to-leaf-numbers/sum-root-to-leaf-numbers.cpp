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
    vector<int> comb;
    int num=0;
    void solve(TreeNode* root)
    {
        if(root==nullptr)
        {
            return ;
        }
        int old=num;
        num=num*10+root->val;
        if(root->left==nullptr && root->right==nullptr)
        {
            comb.push_back(num);
        }
        solve(root->left);
        solve(root->right);
        num=old;
        
    }
    int sumNumbers(TreeNode* root) {
        solve(root);
        int sum=0;
        for(int i:comb)
        {
            sum+=i;
        }
        return sum;
    }
};