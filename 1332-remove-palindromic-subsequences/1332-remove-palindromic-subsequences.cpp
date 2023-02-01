class Solution {
public:
    int removePalindromeSub(string s) {
        int j=s.length();
        for(int i=0;i<s.length()/2;i++)
        {
            j--;
            if(s[i]==s[j]) continue;
            else return 2;
        }
        return 1;
    }
};