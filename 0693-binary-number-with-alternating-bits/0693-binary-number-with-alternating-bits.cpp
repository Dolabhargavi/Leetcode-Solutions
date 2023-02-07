class Solution {
public:
    bool hasAlternatingBits(int n) {
        int prev=n&1,a;
        n=n>>1;
        while(n)
        {
          a=n&1;
          if(a==prev)
              return false;
          prev=a;
            n=n>>1;
        }
        return true;
    }
};