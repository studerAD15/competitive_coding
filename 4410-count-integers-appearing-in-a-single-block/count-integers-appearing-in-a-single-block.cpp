class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        int n=nums.size();
        int left=0;
        int right=1;
        unordered_map<int,int> mp;
        int ans=0;
        for(int i:nums)
        {
            mp[i]++;
        }
        while(left <n)
        {
            if(mp[nums[left]]==1)
            {
                ans++;
                left++;
                continue;
            }
            right=left+1;
            while(right<n && nums[left]==nums[right])
            {
                right++;
            }
            int win=right-left;
            if(mp[nums[left]]==win)
            {
                ans++;
            }
            left++;
        }
        return ans;
    }
};