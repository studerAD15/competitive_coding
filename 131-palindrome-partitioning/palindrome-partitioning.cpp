class Solution {
public:
    vector<vector<string>> ans;
    vector<string> path;
    bool ispali(string &s,int st,int e)
    {
        while(st<e)
        {
            if(s[st]!=s[e])
            {
                return false;
            }
            st++;
            e--;
        }
        return true;
    }
    void solve(string &s,int index)
    {
        if(index==s.size())
        {
            ans.push_back(path);
            return;
        }
        for(int i=index;i<s.size();i++)
        {
            if(ispali(s,index,i)){
                path.push_back(s.substr(index,i-index+1));
                solve(s,i+1);
                path.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s) {
        solve(s,0);
        return ans;
    }
};