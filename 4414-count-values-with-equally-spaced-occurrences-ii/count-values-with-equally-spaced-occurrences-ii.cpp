class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        unordered_map<int,int> mp;
        unordered_set<int> st;
        int count=0;

        for(int i:nums)
        {
            mp[i]++;
        }
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            if(st.find(nums[i])!=st.end())
            {
                continue;
            }
            bool flag=true;
            if(mp[nums[i]]>=3)
            {
                int j=i+1;
                while(j<n && nums[i]!=nums[j])
                {
                    j++;
                }
                int x=j-i;
                int y=j+(j-i);
                int k=mp[nums[i]]-2;
                for(j=y;j<n && k>0;j+=x){
                    if(nums[i]!=nums[j])
                    {
                        flag=false;
                        break;
                    }
                    k--;
                }
                if(k>0)
                {
                    flag=false;
                }
                if(flag)
                {
                    count++;
                }
            }
            st.insert(nums[i]);
        }
        return count;
    }
};