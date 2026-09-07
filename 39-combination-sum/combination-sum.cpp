class Solution {
public:
    vector<int> comb;
    vector<vector<int>> result;
    void solve(vector<int> & x,int y,int i)
    {
        if(y==0)
        {
            result.push_back(comb);
            return;
        }
        if(y<0 || i==x.size())
        {
            return ;
        }
        comb.push_back(x[i]);
        solve(x,y-x[i],i);
        comb.pop_back();
        solve(x,y,i+1);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        solve(candidates,target,0);
        return result;
    }
};