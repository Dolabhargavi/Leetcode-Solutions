class Solution {
public:
    int commonFactors(int a, int b) {
        int count=1;
        if(a==1 && b==1) return 1;
        if(a>b)
        {
            int temp=a;
            a=b;
            b=temp;
        }
        if(b%a==0) count++;
        for(int i=2;i*i<a;i++)
        {
            // cout<<i<<"-";
            if(a%i==0 && b%i==0) 
            {
                count+=1;
                cout<<i<<" ";
               
            }
             if(a%i==0 && b%(a/i)==0)
                {
                    count++;
                    cout<<a/i<<" ";
                }
            
        } 
        int s=sqrt(a);
        if(s*s==a && b%s==0) count++;
        return count;
    }
};