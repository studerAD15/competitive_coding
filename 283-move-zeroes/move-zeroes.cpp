class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int j=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==0)
            {
                j=i+1;
                while(j<nums.size()-1&& nums[j]==0 )
                {
                    j++;
                }
                if(j<nums.size()){
                swap(nums[i],nums[j]);
                }
            }
        }
    }
};