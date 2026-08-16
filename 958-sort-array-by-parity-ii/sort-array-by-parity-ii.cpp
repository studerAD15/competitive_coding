class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        int i=0;
        int n=nums.size();
        int j=0;
        vector<int> ans(n);
        for(j=0;j<n;j++)
        {
            if(nums[j]%2==0)
            {
                ans[i]=nums[j];
                i+=2;
            }
            
        }
        i=1;
        for(j=0;j<n;j++)
        {
            if(nums[j]%2!=0)
            {
                ans[i]=nums[j];
                i+=2;
            }
            
        }
        return ans;
    }
};