class Solution {
public:
    int sumget(int n)
    {
        int sum=0;
        while(n>0)
        {
            sum+=(n%10)*(n%10);
            n/=10;
        }
        return sum;
    }
    bool isHappy(int n) {
        unordered_set<int> st;
        while(n!=1)
        {
            if(st.contains(n))
            {
                return false;
            }
            st.insert(n);
            n=sumget(n);
        }
        return true;
    }
};