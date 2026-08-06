class Solution {
public:
    int lengthOfLastWord(string s) {
        stringstream ss(s);
        vector<string> words;
        string word;
        while(ss>>word)
        {
            words.push_back(word);
        }
        return words[words.size()-1].size();
        
    }
};