class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_set<int> wind;
        for(int i=0;i<nums.size();i++)
        {
            if(wind.count(nums[i]))
            {
                return true;
            }
            wind.insert(nums[i]);
            if(wind.size()>k)
            {
                wind.erase(nums[i-k]);
            }
        }
        return false;
    }
};