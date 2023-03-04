class Solution {
public:
    int countPrimes(int n) {
        if(n==0) return 0;
      vector<bool>vec(n,true);
      vec[0]=vec[1]=false;
        int count=0;
        for(int i=2;i*i<=n;i++)
        {
            if(vec[i]==false) continue;
            else
            {
                for(int j=i+i;j<n;j+=i)
                    vec[j]=false;
            }
        }
        for(int i=2;i<n;i++)
        {
            if(vec[i]==true) count++;
        }
        return count;
    }
};