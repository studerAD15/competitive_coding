class Solution {
public:
    string decodeString(string s) {
        stack<int> nums;
        stack<string> st;
        int x=0;
        string y="";
        for(char i:s)
        {
            if(isdigit(i))
            {
                x=x*10+(i-'0');
            }
            else if(isalpha(i))
            {
                y+=i;
            }
            else if(i=='[')
            {
                st.push(y);
                nums.push(x);
                x=0;
                y="";
            }
            else if(i==']')
            {
                int num=nums.top();
                nums.pop();
                string curr=st.top();
                st.pop();
                string temp="";
                for(int k=0;k<num;k++)
                {
                    temp+=y;
                }
                y=curr+temp;
            }
        }
        return y;
    }
};