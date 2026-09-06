class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        int left=0;
        int right=0;
        int n=nums.size();
        int ans=0;
        unordered_map<int,int> mp;
        for(int i:nums)
        {
            mp[i]++;
        }
        while(left<n)
        {
            if(mp[nums[left]]==1)
            {
                left++;
                ans++;
                continue;
            }
            right=left+1;
            while(right<n && nums[left]==nums[right])
            {
                right++;
            }
            int win=right-left;
            if(win==mp[nums[left]])
            {
                ans++;
            }
            left=right;
        }
        return ans;
    }
};