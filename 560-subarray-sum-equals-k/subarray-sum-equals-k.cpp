class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int sum=0;
        int count=0;
        int t=0;
        unordered_map<int,int> mp;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            mp[sum]++;
            sum+=nums[i];
            if(mp.find(sum-k)!=mp.end())
            {
                count+=mp[sum-k];
            }
        }
        return count;
    }
};