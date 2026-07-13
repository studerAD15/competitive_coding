class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> result(nums.size(),1);
        vector<int> post(nums.size(),1);
        vector<int> pre(nums.size(),1);
        for(int i=1;i<nums.size();i++)
        {
            pre[i]=nums[i-1]*pre[i-1];
        }
        for(int i=nums.size()-2;i>=0;i--)
        {
            post[i]=nums[i+1]*post[i+1];
        }
        for(int i=0;i<nums.size();i++)
        {
            result[i]=pre[i]*post[i];
        }
        return result;

        // int pre=1;
        // for(int i=0;i<nums.size();i++)
        // {
        //     result[i]=pre;
        //     pre=nums[i]*pre;
        // }
        // int post=1;
        // for(int i=nums.size()-1;i>=0;i--)
        // {
        //     result[i]*=post;
        //     post=nums[i]*post;
        // }
        return result;
    }
};