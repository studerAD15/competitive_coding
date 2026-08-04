class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int minn=INT_MAX;
        int maxx=INT_MIN;
        for(int i:nums)
        {
            maxx=max(i,maxx);
            minn=min(i,minn);
        }
        unordered_set<int> st;
        for(int i:nums)
        {
            st.insert(i);
        }
        for(int i=0;i<maxx;i++)
        {
            if(st.find(i)==st.end())
            {
                return i;
            }
        }
        return maxx+1;
    }
};