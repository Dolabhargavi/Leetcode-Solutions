class Solution {
public:
    bool detectCapitalUse(string word) {
        int l=0;
        if(char(word[0])<=90)
            l=1;
        int c=0;
        for(int i=1;i<word.length();i++)
        {
            if(char(word[i])<=90)
            {
                c++;
            }
        }
        if((l==1 && c==word.length()-1)||(l==0 && c==0)||(l==1 && c==0))
            return true;
        return false;
    }
};