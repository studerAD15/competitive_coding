class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        int curr=0;
        int ans=0;
        for(int i=0;i+2<nums.size();i++)
        {
            if((nums[i]-nums[i+1])==(nums[i+1]-nums[i+2]))
            {
                curr++;
                ans+=curr;
            }
            else
            {
                curr=0;
            }
        }
        return ans;
    }
};