class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double sum=0;
        int left=0;
        double ans=INT_MIN;
        for(int right=0;right<nums.size();right++)
        {
            sum+=nums[right];
            while((right-left+1)==k)
            {
                double avg=sum/k;
                ans=max(ans,avg);
                sum-=nums[left];
                left++;
            }
        }
        return ans;
    }
};