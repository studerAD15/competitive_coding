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
        while(i<bobSizes.size() && j<aliceSizes.size())
        {
            int x=aliceSizes[j]-bobSizes[i];
            if(x==diff)
            {
                return {aliceSizes[j],bobSizes[i]};
            }
            if(x<diff)
            {
                j++;
            }
            if(x>diff)
            {
                i++;
            }
        }
        return {-1,-1};
    }
};