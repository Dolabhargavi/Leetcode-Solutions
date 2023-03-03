class Solution {
public:
    string longestPalindrome(string s) {
     // manachar's Algorithm 
        int len,max_len=0,a,b;
        int n=s.length();
     for(int i=0;i<n;i++)
     {
         int low=i-1,high=i+1;
         while(low>=0 && s[low]==s[i])
             low--;
         while(high<=n && s[high]==s[i])
             high++;
         while(low>=0 && high<=n && s[low]==s[high])
         {
              low--;
             high++;
         }
         len=high-low-1;
         if(max_len<len)
         {
             max_len=len;
             a=low;
             b=high;
         }
        
     }
        string str="";
        for(int i=a+1;i<b;i++) str+=s[i];
        return str;
    }
};