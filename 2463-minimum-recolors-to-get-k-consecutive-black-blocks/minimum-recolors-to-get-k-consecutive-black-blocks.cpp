class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int n=blocks.size();
        int countW=0;
        int left=0;
        int ans=INT_MAX;
        for(int right=0;right<n;right++)
        {
            if(blocks[right]=='W')
            {
                countW++;
            }
            while(right-left+1>k)
            {
                if(blocks[left]=='W')
                {
                    countW--;
                }
                left++;
            }
            if(right-left+1==k)
            {
                ans=min(ans,countW);
            }
        }
        return (ans==INT_MAX)?0:ans;
    }
};