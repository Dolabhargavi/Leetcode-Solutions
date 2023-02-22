class Solution {
public:
    int check(int n)
    {
       int ans=0,rem;
       if(n<10 && n!=1)
            return false;
        while(n)
        {
            rem=n%10;
            n=n/10;
            ans+=pow(rem,2);
        } 
        return ans;
    }
    bool isHappy(int n) {
        while(n>=10)
            n=check(n);
        if(n==1||n==7)
            return true;
        else
            return false;
        
    }
};