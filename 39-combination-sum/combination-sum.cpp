class Solution {
public:
    vector<vector<int>> comb;
    vector<int> path;
    void solve(vector<int>& candidates, int target,int index)
    {
        if(index==candidates.size()||target<0)
        {
            return;
        }
        if(target==0)
        {
            comb.push_back(path);
            return;
        }
        path.push_back(candidates[index]);
        solve(candidates,target-candidates[index],index);
        path.pop_back();
        solve(candidates,target,index+1);

    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        solve(candidates,target,0);
        return comb;
    }
};