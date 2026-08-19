class Solution {
public:
    long long countSubstrings(string s, char c) {
        long long ans=0;
        long long count=0;
        for(char i:s)
        {
            if(i==c)
            {
                ans+=count+1;
                count++;    
            }
        }
        return ans;
    }
};