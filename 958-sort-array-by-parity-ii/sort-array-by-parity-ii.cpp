class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        int e=0;
        int o=1;
        int n=nums.size();
        while(e<n && o<n){
            if(nums[e]%2==0)
            {
                e+=2;
            }
            else if(nums[o]%2!=0)
            {
                o+=2;
            }
            else
            {
                swap(nums[o],nums[e]);
                o+=2;
                e+=2;
            }
        }
        return nums;
    }
};