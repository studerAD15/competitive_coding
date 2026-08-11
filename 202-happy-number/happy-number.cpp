class Solution {
public:
    int ss(int n)
    {
        int sum=0;
        while(n>0)
        {
            int digit=n%10;
            sum=sum+(digit*digit);
            n/=10;
        }
        n=sum;
        return sum;
    }
    bool isHappy(int n) {
        int s=n;
        int f=n;
        do
        {
            s=ss(s);
            f=ss(ss(f));
        }while(s!=f);
        return (s==1);
    }
};