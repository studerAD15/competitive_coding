class Solution {
public:
    vector<vector<int>> result;
    vector<int> path;
    void solve(vector<int>& x,int y,int index)
    {
        if(y==0)
        {
            result.push_back(path);
            return;
        }
        if(index==x.size() || y<0)
        {
            return;
        }
        path.push_back(x[index]);
        solve(x,y-x[index],index);
        path.pop_back();
        solve(x,y,index+1);
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        solve(candidates,target,0);
        return result;

    }
};