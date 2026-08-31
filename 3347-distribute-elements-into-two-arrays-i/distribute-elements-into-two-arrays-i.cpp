class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
        int n=nums.size();
        vector<int> arr1;
        vector<int> arr2;
        arr1.push_back(nums[0]);
        arr2.push_back(nums[1]);
        for(int i=1;i<nums.size()-1;i++)
        {
            if(arr1.back()>arr2.back())
            {
                arr1.push_back(nums[i+1]);
            }
            else
            {
                arr2.push_back(nums[i+1]);
            }
        }
        vector<int> ans;
        for(int i:arr1)
        {
            ans.push_back(i);
        }
        for(int i:arr2)
        {
            ans.push_back(i);
        }
        return ans;
    }
};