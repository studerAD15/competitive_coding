class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int ans=nums[0];
        int bestval=nums[0];
        int worstval=nums[0];
        int minans=nums[0];
        int total=nums[0];
        int n=nums.size();
        for(int i=1;i<n;i++)
        {
            int a=nums[(i)%n]+bestval;
            int b=nums[(i)%n];
            bestval=max(a,b);
            ans=max(ans,bestval);
            int c=nums[(i)%n]+worstval;
            int d=nums[(i)%n];
            worstval=min(c,d);
            minans=min(minans,worstval);
            total+=nums[i];
        }
        if(ans<0) return ans;
        return max(ans,total-minans);
    }
};