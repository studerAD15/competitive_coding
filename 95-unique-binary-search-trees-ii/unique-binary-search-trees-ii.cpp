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
    
    vector<TreeNode*> solve(int s,int e)
    {
        vector<TreeNode*> ans;
        if(s>e)
        {
            ans.push_back(nullptr);
            return ans;
        }
        for(int i=s;i<=e;i++)
        {
            vector<TreeNode*> lefttrees=solve(s,i-1);
            vector<TreeNode*> righttrees=solve(i+1,e);
            for(TreeNode* left:lefttrees)
            {
                for(TreeNode* right:righttrees)
                {
                    TreeNode* root=new TreeNode(i);
                    root->left=left;
                    root->right=right;
                    ans.push_back(root);
                }
            }

        }
        return ans;
    }
    vector<TreeNode*> generateTrees(int n) {
        if(n==0)
        {
            return {};
        }
        return solve(1,n);
    }
};