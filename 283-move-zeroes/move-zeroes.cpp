class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n=nums.size();
        vector<int> ne;
        int k=0;
        int k1=0;
        for(int i=0;i<n;i++)
        {
            if(nums[i]==0)
            {
                k++;
            }
            else
            {
                ne.push_back(nums[i]);
                k1++;
            }
        }
        for(int i=0;i<k1;i++)
        {
            nums[i]=ne[i];
        }
        for(int i=k1;i<n;i++)
        {
            nums[i]=0;
        }
    }
};