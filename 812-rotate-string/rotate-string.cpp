class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.size()!=goal.size())
        {
            return  false;
        }
        if(s==goal)
        {
            return true;
        }
        string a=s;
        for(int i=0;i<s.size()-1;i++)
        {
            a=a.substr(1)+a[0];
            if(a==goal)
            {
                return true;
            }
        }
        return false;
    }
};