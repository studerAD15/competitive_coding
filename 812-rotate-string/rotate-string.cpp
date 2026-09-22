class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.size()!=goal.size())
        {
            return false;
        }
        if(s==goal)
        {
            return true;
        }
        string a=s+s;
        if(a.find(goal)!=string::npos)
        {
            return true;
        }
        return false;
    }
};