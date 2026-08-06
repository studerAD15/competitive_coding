class Solution {
public:
    int alternateDigitSum(int n) {
        int pos=0;
        int neg=0;
        int k=0;
        int num=n;
        while(num>0)
        {
            k++;
            num/=10;
        }
        num=n;
        for(int i=0;i<=k;i++)
        {
            int rem=num%10;
            pos+=rem;
            num/=10;
            rem=0;
            rem=num%10;
            neg+=rem;
            num/=10;
        }
        int ans=pos-neg;
        if(k%2==0)
        {
            ans=-ans;
        }
        return ans;
        
    }
};