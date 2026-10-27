class Solution {
public:
    vector<string> result;
    void solve(int l,int r, int n,string x)
    {
        if(x.size()==2*n)
        {
            result.push_back(x);
            return ;
        }
        if(l<n)
        {
            solve(l+1,r,n,x+"(");
        }
        if(r<l)
        {
            solve(l,r+1,n,x+")");
        }
    }
    vector<string> generateParenthesis(int n) {
        solve(0,0,n,"");
        return result;
    }
};