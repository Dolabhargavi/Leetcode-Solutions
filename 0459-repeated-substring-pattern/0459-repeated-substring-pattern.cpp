class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        string str=s+s;
        int k;
        for(int i=1;i<str.length()/2;i++)
        {
            k=0;
            int flag=0;
            for(int j=i;j<i+s.length();j++)
            {
                if(str[j]!=s[k])
                {
                    flag=1;
                    break;
                }
                k++;
            }
            if(flag==0)
                return true;
        }
        return false;
    }
};