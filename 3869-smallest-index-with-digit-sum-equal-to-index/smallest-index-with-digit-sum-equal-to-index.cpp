class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        int ans=INT_MAX;
        for(int i=0;i<nums.size();i++){
            int temp1=nums[i];
            int sum=0;
            while(temp1>0)
            {
                sum+=(temp1%10);
                temp1/=10;
            }
            if(i==sum)
            {
                ans=min(ans,sum);
            }
        }
        return (ans==INT_MAX)?-1:ans;
    }
};