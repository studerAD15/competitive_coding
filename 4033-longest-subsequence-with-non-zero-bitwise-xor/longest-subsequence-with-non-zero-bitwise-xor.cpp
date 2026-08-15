class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        int x=0;
        int n=nums.size();
        bool flag=false;
        for(int i=0;i<n;i++)
        {
            x^=nums[i];
            if(nums[i]!=0)
            {
                flag=true;
            }
        }
        if(x!=0)
        {
            return n;
        }
        if(flag)
        {
            return n-1;
        }
        return 0;
            }
};