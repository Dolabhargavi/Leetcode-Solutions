class Solution {
public:
    int minimumLength(string s) {
       int i=0,j=s.length()-1;
        if(s[i]!=s[j]) return j+1;
    while(i<j)
    {
        while(s[i]==s[i+1] && i<j)
            i++;
        while(s[j]==s[j-1] && i<j)
            j--;
        i++;j--;
        if(s[i]!=s[j]) break;
    }
        if(i==j) return 1;
        else if(i>j) return 0;
        else return j-i+1;
    }
};