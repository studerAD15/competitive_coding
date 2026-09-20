class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        int minn=INT_MAX;
        int min2=INT_MAX;
        for(int i:prices)
        {
            if(i<minn)
            {
                minn=i;
            }
            if(i<min2 && min2>minn)
            {
                minn=min2;
                min2=i;
            }
        }
        if(minn+min2>money)
        {
            return money;
        }
        return money-(minn+min2);
    }
};