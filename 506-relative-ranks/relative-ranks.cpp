class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        vector<pair<int,int>> store;
        vector<string> ans(score.size(),"");
        int n=score.size();
        for(int i=0;i<n;i++)
        {
            store.push_back({score[i],i});
        }
        sort(store.begin(),store.end());
        reverse(store.begin(),store.end());
        for(int i=0;i<n;i++)
        {
            int index=store[i].second;
            if(i==0)
            {
                ans[index]="Gold Medal";
            }
            else if(i==1)
            {
                ans[index]="Silver Medal";
            }
            else if(i==2)
            {
                ans[index]="Bronze Medal";
            }
            else
            {
                ans[index]=to_string(i+1);
            }   
        }
        return ans;
    }
};