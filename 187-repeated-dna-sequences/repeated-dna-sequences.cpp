class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        unordered_set<string> seen;
        unordered_set<string> repeated;
        for(int i=0;i+10<=s.size();i++)
        {
            string str=s.substr(i,10);
            if(seen.count(str))
            {
                repeated.insert(str);
            }
            else{
            seen.insert(str);
            }
        }
        return vector<string>(repeated.begin(),repeated.end());


    }
};