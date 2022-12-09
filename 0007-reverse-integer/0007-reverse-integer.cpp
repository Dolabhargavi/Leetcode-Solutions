class Solution {
public:
    int reverse(int x) {
     long int y,flag=0,rem=0,sum=0;
     if(x<0)
     {
         flag=1;
         x=abs(x);
     }
     int n=x;
     while(n)
        {
           rem=n%10;
           sum=sum*10+rem;
            n=n/10;
        }
        if(flag==1)
            sum*=-1;
        if(sum>=-1*pow(2,31)&&sum<=pow(2,31)-1) return sum;
        else
        return 0; 
    
   
    }
};