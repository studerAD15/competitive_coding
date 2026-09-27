class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> st;
        int left=0;
        int ans=0;
        for(int right=0;right<s.size();right++)
        {
            while(st.contains(s[right]))
            {
                st.erase(s[left]);
                left++;
            }
            st.insert(s[right]);
            ans=max(right-left+1,ans);
        }
        return ans;
    }
};