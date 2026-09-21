class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int left=0;
        int count=0;
        unordered_set<int> st;
        for(int right=0;right<s.size();right++)
        {
            while(st.contains(s[right]))
            {
                st.erase(s[left]);
                left++;
            }
            st.insert(s[right]);
            count=max(right-left+1,count);
        }
        return count;
    }
};