class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int minn=*min_element(nums.begin(),nums.end());
        int maxx=*max_element(nums.begin(),nums.end());
        vector<int> ans;
        unordered_set<int> st;
        for(int i=0;i<nums.size();i++)
        {
            st.insert(nums[i]);
        }
        for(int i=minn;i<maxx;i++)
        {
            if(!st.contains(i)){
                ans.push_back(i);
            }

        }
        return ans;
    
    }
};