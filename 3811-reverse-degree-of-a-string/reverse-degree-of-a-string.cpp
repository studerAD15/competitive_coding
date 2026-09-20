class Solution {
public:
    int reverseDegree(string s) {
        unordered_map<char,int> mp;
        string ch="abcdefghijklmnopqrstuvwxyz";
        for(int i=26;i>=0;i--)
        {
            mp[ch[26-i]]=i;
        }
        int sum=mp[s[0]]*1;
        for(int i=1;i<s.size();i++)
        {
            sum+=mp[s[i]]*(i+1);
        }
        return sum;
    }
};