class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n<=0 || n==2) return false;
       return (n&(n-1)) ==0 && (n&0x55555555);
    }
};