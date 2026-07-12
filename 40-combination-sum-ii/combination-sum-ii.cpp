class Solution {
public:
    vector<vector<int>> result;
    vector<int> comb;
    void solve(vector<int>& candidates,int target,int index){
        if(target==0)
        {
            result.push_back(comb);
            return;
        }
        if(target<0)
        {
            return;
        }
        for(int i=index;i<candidates.size();i++)
        {
            if(i>index && candidates[i]==candidates[i-1])
            {
                continue;
            }
            comb.push_back(candidates[i]);
            solve(candidates,target-candidates[i],i+1);
            comb.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        solve(candidates,target,0);
        return result;
        
    }
};