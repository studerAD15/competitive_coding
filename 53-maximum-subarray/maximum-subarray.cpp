class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int ans=nums[0];
        int bestval=nums[0];
        for(int i=1;i<nums.size();i++)
        {
            int a=nums[i]+bestval;
            int b=nums[i];
            bestval=max(a,b);
            ans=max(ans,bestval);
        }
        return ans;
    }
};