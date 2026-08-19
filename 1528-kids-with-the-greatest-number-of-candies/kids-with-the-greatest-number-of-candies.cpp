class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int n=candies.size();
        int maxx=INT_MIN;
        vector<bool> ans(n);
        for(int i:candies)
        {
            maxx=max(maxx,i);
        }
        for(int i=0;i<n;i++)
        {
            if(candies[i]+extraCandies>=maxx)
            {
                ans[i]=true;
            }
            else
            {
                ans[i]=false;
            }
        }
        return ans;
    }
};