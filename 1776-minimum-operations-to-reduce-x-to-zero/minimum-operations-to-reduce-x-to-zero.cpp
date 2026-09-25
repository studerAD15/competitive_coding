class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int total=0;
        for(int i:nums)
        {
            total+=i;
        }
        int left=0;
        int sum=0;
        int target=total-x;
        int maxlen=-1;
        for(int right=0;right<nums.size();right++)
        {
            sum+=nums[right];
            while(left<=right && sum>target)
            {
                sum-=nums[left];
                left++;
            }
            if(sum==target)
            {
                maxlen=max(maxlen,right-left+1);
            }
        }
        if(maxlen==-1)
        {
            return -1;
        }
        return nums.size()-maxlen;
    }
};