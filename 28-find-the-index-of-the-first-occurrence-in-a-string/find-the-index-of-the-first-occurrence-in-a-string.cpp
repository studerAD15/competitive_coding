class Solution {
public:
    int strStr(string haystack, string needle) {
        int i=0;
        int j=0;
        int ans=0;
        while(i<haystack.size() && j<needle.size())
        {
            if(haystack[i]==needle[j])
            {
                i++;
                j++;
                if(j==needle.size())
                {
                    return ans;
                }
            }
            else
            {
                ans++;
                j=0;
                i=ans;
            }
        }
        return -1;
    }
};