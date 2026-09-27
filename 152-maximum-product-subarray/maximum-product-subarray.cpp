class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int bestval=nums[0];
        int worstval=nums[0];
        int ans=nums[0];
        for(int i=1;i<nums.size();i++)
        {
            int a=bestval*nums[i];
            int b=worstval*nums[i];
            int c=nums[i];
            bestval=max(a,max(b,c));
            worstval=min(a,min(b,c));
            ans=max(ans,max(bestval,worstval));
        }
        return ans;
    }
};