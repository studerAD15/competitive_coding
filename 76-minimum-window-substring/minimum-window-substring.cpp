class Solution {
public:
    string minWindow(string s, string t) {
        int m=s.size();
        int n=t.size();
        unordered_map<int,int> mp;
        int left=0;
        int window=INT_MAX;
        int k=n;
        int start=0;
        for(char i:t)
        {
            mp[i]--;
        }
        for(int right =0;right<m;right++)
        {
            if(mp[s[right]]<0)
            {
                k--;
            }
            mp[s[right]]++;
            while(k==0)
            {
                int curr=right-left+1;
                if(curr<window)
                {
                    window=curr;
                    start=left;
                }
                mp[s[left]]--;
                if(mp[s[left]]<0)
                {
                    k++;
                }
                left++;
            }

        }
        if(window==INT_MAX)
        {
            return "";
        }
        return s.substr(start,window);
    }
};