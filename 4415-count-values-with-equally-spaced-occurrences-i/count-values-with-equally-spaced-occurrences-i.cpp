class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        unordered_map<int,int> mp;
        int count=0;
        int n=nums.size();
        for(int i:nums){
            mp[i]++;
        }
        for(int i=0;i<n;i++)
        {
            if(mp[nums[i]]==3)
            {
                int j=i+1;
                while(j<n&& nums[i]!=nums[j])
                {
                    j++;
                }
                int y=j+(j-i);  
                if(j<n && y<n &&nums[j]==nums[y])
                {
                     count++;
                }
            }
        }
        return count;
    }
};