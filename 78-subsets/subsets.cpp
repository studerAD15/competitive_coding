class Solution {
public:
    vector<vector<int>> comb;
    vector<int> path;
    void solve(vector<int>& nums,int index)
    {
        if(index==nums.size())
        {
            comb.push_back(path);
            return;
        }
        path.push_back(nums[index]);
        solve(nums,index+1);
        path.pop_back();
        solve(nums,index+1);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        solve(nums,0);
        return comb;
    }
};