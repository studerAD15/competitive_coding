class Solution {
public:
    vector<vector<int>> result;
    vector<int> comb;
    void solve(vector<int>& nums,int index)
    {
        if(index==nums.size())
        {
            result.push_back(comb);
            return;
        }
        comb.push_back(nums[index]);
        solve(nums,index+1);
        comb.pop_back();
        solve(nums,index+1);

    }
    vector<vector<int>> subsets(vector<int>& nums) {
        solve(nums,0);
        return result;
    }
};