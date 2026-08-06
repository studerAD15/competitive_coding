class Solution {
public:
    int smallestNumber(int n, int t) {
        int prod=1;
        int ans=INT_MAX;
        int num=n;
        int k=0;
        while(num>0)
        {
            k++;
            num/=10;
        }
        if(k>1){
        for(int i=n;i<=100;i++)
        {
            int temp=i;
            prod=temp%10;
            temp/=10;
            prod*=temp;
            if(prod%t==0)
            {
                ans=min(ans,i);
            }
            else
            {
                prod=1;
            }
        }
        }
        else{
            for(int i=n;i<=100;i++)
            {
                if(i%t==0)
                {
                    ans=min(ans,i);
                }
                ans=min(ans,10);
            }
        }
        return ans;
    }
};