class Solution {
public:
    vector<int> fairCandySwap(vector<int>& aliceSizes, vector<int>& bobSizes) {
        sort(aliceSizes.begin(),aliceSizes.end());
        sort(bobSizes.begin(),bobSizes.end());
        int sum1=0;
        int sum2=0;
        int n=aliceSizes.size();
        for(int i:aliceSizes)
        {
            sum1+=i;
        }
        for(int j:bobSizes)
        {
            sum2+=j;
        }
        int diff=(sum1-sum2)/2;
        int i=0;
        int j=0;
        while(i<aliceSizes.size() && j< bobSizes.size())
        {
            int x=aliceSizes[i]-bobSizes[j];
            if(x==diff)
            {
                return {aliceSizes[i],bobSizes[j]};
            }
            if(x<diff)
            {
                i++;
            }
            if(x>diff)
            {
                j++;
            }
        }
        return {-1,-1};
    }
};