class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int ans=INT_MAX;
        int b=0;
        int sum=0;
        for(int f=0;f<nums.size();f++)
        {
            sum+=nums[f];
            while(sum>=target)
            {
                sum-=nums[b];
                ans=min(ans,f-b+1);
                b++;
            }
        }
        return (ans==INT_MAX?0:ans);
    }
};