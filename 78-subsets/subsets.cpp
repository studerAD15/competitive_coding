class Solution {
public:
    vector<int> comb;
    vector<vector<int>> result;
    void solve(int i,vector<int>& nums)
    {
            if(i==nums.size())
            {
                result.push_back(comb);
                return;
            }
            comb.push_back(nums[i]);
            solve(i+1,nums);
            comb.pop_back();
            solve(i+1,nums);
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        solve(0,nums);
        return result;
    }
};