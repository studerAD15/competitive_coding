class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int n=nums.size();
        vector<int> even;
        vector<int>odd;
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
        vector<int> ans;
        for(int i=0;i<even.size();i++)
        {
            ans.push_back(even[i]);
        }
        for(int i=0;i<odd.size();i++)
        {
            ans.push_back(odd[i]);
        }
        return ans;
    }
};