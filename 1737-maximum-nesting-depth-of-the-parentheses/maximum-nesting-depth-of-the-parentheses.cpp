class Solution {
public:
    int maxDepth(string s) {
        stack<char> st;
        int count=0;
        int ans=INT_MIN;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='(')
            {
                st.push(s[i]);
                count++;
            }
            else if(s[i]==')')
            {
                if(!st.empty() && st.top()=='(')
                {
                    count--;
                    st.pop();
                }
            }
            ans=max(count,ans);
        }
        return ans;
    }
};