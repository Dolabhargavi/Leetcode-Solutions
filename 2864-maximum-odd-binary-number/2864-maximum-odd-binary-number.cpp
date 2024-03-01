class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        string ans;
        int cnt=0;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='1')
                cnt++;
        }
        for(int i=0;i<cnt-1;i++)
        {
            ans+='1';
        }
        for(int i=0;i<s.length()-cnt;i++)
        {
            ans+='0';
        }
        ans+='1';
        return ans;
    }
};