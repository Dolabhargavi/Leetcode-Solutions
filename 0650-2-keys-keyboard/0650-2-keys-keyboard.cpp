class Solution {
public:
    bool isPrime(int N) {
        for (int i = 2; i <= sqrt(N); i++) {
            if (N % i == 0) {
                return false;
            }
        }
        return true;
    }
    int find(int n,int cnt)
    {
      if(n==1) return cnt;
      if(n%2==0)
      {
          return 2+cnt+find(n/2,cnt);
      }
      else{
          if(isPrime(n)) return n;
          for(int i=2;i<=n/2;i++){
            if(n%i==0){
               return cnt+find(i,cnt)+find(n/i,cnt);
            }
          }
      }
     return cnt;
    }
    int minSteps(int n) {
        return find(n,0);
    }
};