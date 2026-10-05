class Solution {
public:
    int longestSubstring(string s, int k) {
        int ans=0;
        for(int unique=1;unique<=26;unique++){
            vector<int> freq(26,0);
            int left=0;
            int uniquecount=0;
            int atleastk=0;
            for(int right=0;right<s.size();right++)
            {
                int idx=s[right]-'a';
                if(freq[idx]==0)
                {
                    uniquecount++;
                }
                freq[idx]++;
                if(freq[idx]==k)
                {
                    atleastk++;
                }
                while(uniquecount>unique)
                {
                    int remidx=s[left]-'a';
                    if(freq[remidx]==k)
                    {
                        atleastk--;
                    }
                    freq[remidx]--;
                    if(freq[remidx]==0)
                    {
                        uniquecount--;
                    }
                    left++;
                }
                if(uniquecount==unique && uniquecount==atleastk)
                {
                    ans=max(ans,right-left+1);
                }
            }
        }
        return ans;
    }
};