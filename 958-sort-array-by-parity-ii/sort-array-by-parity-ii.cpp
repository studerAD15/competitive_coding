class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        int i=0;
        int n=nums.size();
        int j=n-1;
        vector<int> even;
        vector<int> odd;
        vector<int> ans;
        for(int i:nums)
        {
            if(i%2==0)
            {
                even.push_back(i);
            }
            else
            {
                odd.push_back(i);
            }
        }
        for(int i=0;i<n/2;i++)
        {
            ans.push_back(even[i]);
            ans.push_back(odd[i]);
        }
        return ans;
    }
};