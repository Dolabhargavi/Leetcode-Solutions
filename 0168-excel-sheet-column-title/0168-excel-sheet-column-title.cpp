class Solution {
public:
    string convertToTitle(int columnNumber) {
        string s;
        int rem;
        int n=columnNumber;
        while(n>26)
        {
            rem=n%26;
            if(rem==0)
                rem=26;
            s+=(rem+64);
            n-=rem;
            n=n/26;
        }
        s+=n+64;
        reverse(s.begin(), s.end());
        return s;
    }
};