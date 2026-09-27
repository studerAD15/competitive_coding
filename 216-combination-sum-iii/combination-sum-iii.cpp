class Solution {
public:
    vector<vector<int>> comb;
    vector<int> path;
    void solve(int start,int k,int target)
    {
        if(path.size()==k && target==0)
        {
            comb.push_back(path);
            return ;
        }
        if(path.size()>k || target<0)
        {
            return ;
        }
        for(int i=start;i<=9;i++)
        {
            path.push_back(i);
            solve(i+1,k,target-i);
            path.pop_back();
        }
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        solve(1,k,n);
        return comb;
    }
};