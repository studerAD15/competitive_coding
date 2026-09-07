class Solution {
public:
    vector<int> comb;
    unordered_set<int> sett;
    int start=0;
    vector<vector<int>> result;
    void solve(vector<int> & x,int y,int i)
    {
        if(y==0)
        {
            result.push_back(comb);
            return;
        }
        if(y<0)
        {
            return ;
        }
        for(int j=i;j<x.size();j++)
        {
            if(j>i && x[j-1]==x[j])
            {
                continue;
            } 
            comb.push_back(x[j]);
            solve(x,y-x[j],j+1);
            comb.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        solve(candidates,target,0);
        return result;
    }
};