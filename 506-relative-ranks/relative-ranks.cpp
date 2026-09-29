class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        priority_queue<pair<int,int>>pq;
        vector<string> ans(score.size(),"");
        int n=score.size();
        for(int i=0;i<n;i++)
        {
            pq.push({score[i],i});
        }
        int rank=0;
        while(!pq.empty())
        {
            auto [points, index] = pq.top();
            pq.pop();
            if(rank==0)
            {
                ans[index]="Gold Medal";
            }
            else if(rank==1)
            {
                ans[index]="Silver Medal";
            }
            else if(rank==2)
            {
                ans[index]="Bronze Medal";
            }
            else
            {
                ans[index]=to_string(rank+1);
            }
            rank++;
        }
        return ans;
    }
};