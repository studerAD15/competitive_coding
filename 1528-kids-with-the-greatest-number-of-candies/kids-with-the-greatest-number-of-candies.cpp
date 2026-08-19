class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int n=candies.size();
        int maxx=*max_element(candies.begin(),candies.end());
        vector<bool> ans(n);
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