class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int i=0;
        int n=nums.size();
        vector<int> ans(n);
        for(int j=0;j<n;j++)
        {
            if(nums[j]%2==0)
            {
                ans[i]=nums[j];
                i++;
            }
        }
        for(int j=0;j<n;j++)
        {
            if(nums[j]%2!=0)
            {
                ans[i]=nums[j];
                i++;
            }
        }
        return ans;
    }
};