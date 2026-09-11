class Solution {
public:
    int beauty(int freq[])
    {
        int minn=INT_MAX;
        int maxx=INT_MIN;
        for(int i=0;i<26;i++)
        {
            if(freq[i]>0){
            maxx=max(freq[i],maxx);
            minn=min(freq[i],minn);
            }
        }
        return maxx-minn;
    }
    int beautySum(string s) {
        int n=s.size();
        int ans=0;
        for(int left=0;left<n;left++)
        {
            int freq[26]={};
            for(int right=left;right<n;right++)
            {
                freq[s[right]-'a']++;
                if(right-left+1>=2)
                {
                    ans+=beauty(freq);
                }
            }
            
        }
        return ans;
    }
};