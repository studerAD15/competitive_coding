class Solution {
public:
    int maxVowels(string s, int k) {
        int left=0;
        int n=s.size();
        int count=0;
        int ans=0;
        string vowels="aeiou";
        for(int right=0;right<n;right++)
        {
            if(vowels.find(s[right])!=string::npos)
            {
                count++;
            }
            while(right-left+1>k)
            {
                if(vowels.find(s[left])!=string::npos)
                {
                    count--;
                }
                left++;
            }
            if(right-left+1==k)
            {
                ans=max(count,ans);
            }
        }
        return ans;
    }
};