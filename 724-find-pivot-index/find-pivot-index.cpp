class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int sum=0;
        int n=nums.size();
        int left=0;
        int right=0;
        for(int i=0;i<n;i++)
        {
            sum+=nums[i];
        }
        for(int i=0;i<n;i++)
        {
             
            right=sum-nums[i]-left;
            if(left==right)
            {
                return i;
            }
            left+=nums[i];
        }
        return -1;

    }
};