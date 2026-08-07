class Solution {
public:
    string reverseWords(string s) {
        stringstream ss(s);
        string word;
        string ans="";
        vector<string> words;
        while(ss>>word)
        {
            words.push_back(word);
        }
        reverse(words.begin(),words.end());
        for(int i=0;i<words.size();i++)
        {
            ans+=words[i];
            if(i==words.size()-1)
            {
                break;
            }
            ans+=" ";
        }
        return ans;
    }
};