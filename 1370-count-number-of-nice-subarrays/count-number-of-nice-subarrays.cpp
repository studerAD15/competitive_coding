class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        int l=0;
        int ans=0;
        int odd=0;
        int count=0;
        for(int r=0;r<nums.size();r++)
        {
            if(nums[r]%2!=0)
            {
                odd++; 
                count=0;  
            }
            while(odd==k)
            {    
            count++;  
            if(nums[l]%2!=0)
                {
                    odd--;
                }
                l++;
            }
            ans+=count;
        }
        return ans;
    }
};