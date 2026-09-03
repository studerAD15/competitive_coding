class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int n=blocks.size();
        int count=0;
        int left=0;
        int ans=INT_MAX;
        for(int right=0;right<=n-k;right++)
        {
            left=right;
            count=0;
            while(left<right+k)
            {
                if(blocks[left]=='W')
                {
                    count++;
                    left++;
                }
                else
                {
                    left++;
                }
            }
            ans=min(ans,count);
        }
        return (ans==INT_MAX)?0:ans;
    }
};