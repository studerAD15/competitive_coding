class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int x=INT_MAX;
        int n=nums.size();
        vector<int>minn(n,INT_MAX);
        vector<int> maxx(n,INT_MIN);
        maxx[0]=nums[0];
        minn[n-1]=nums[n-1];
        for(int i=1;i<n;i++)
        {
            maxx[i]=max(nums[i],maxx[i-1]);
        }
        for(int i=n-2;i>=0;i--)
        {
            minn[i]=min(nums[i],minn[i+1]);
        }
        for(int i=0;i<n;i++)
        {  
            if((maxx[i]-minn[i])<=k)
            {
                x=min(x,i);
            }
        }
        return (x==INT_MAX)?-1:x;
    }
};