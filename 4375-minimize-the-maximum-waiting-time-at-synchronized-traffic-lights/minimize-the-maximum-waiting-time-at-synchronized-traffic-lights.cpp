class Solution {
public:
    int minPenalty(int period, vector<int>& lights, vector<int>& arrivalTime) {
        int maxgreen=*max_element(lights.begin(),lights.end());
        int ans=0;
        for(int i:arrivalTime)
        {
            int r= i% period;
            if(r>=maxgreen)
            {
                ans=max(ans,period-r);
            }
        }
        return ans;
    }
};