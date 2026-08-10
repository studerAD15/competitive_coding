class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int l=0;
        int r=n-1;
        int ans=nums[0]+nums[1]+nums[2];
        for(int i=0;i<n-2;i++)
        {
            l=i+1;
            r=n-1;
            while(l<r)
            {
                int sum=nums[i]+nums[l]+nums[r];
                if(abs(ans-target)>abs(sum-target))
                {
                    ans=sum;
                }
                if(sum==target)
                {
                    return sum;
                }
                if(sum<target)
                {
                    l++;
                }
                else{
                    r--;
                }
            }
        }
        return ans;
    }
};