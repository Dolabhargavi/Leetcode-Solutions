class Solution {
public:
    int countBinarySubstrings(string s) {
        int ans=0,prev=0,curr=1;
         for(int i=1;i<s.length();i++)
         {
             if(s[i]==s[i-1])
                 curr++;
             else
             {
                 ans+=min(prev,curr);
                 prev=curr;
                 curr=1;
             }
         }
        ans+=min(prev,curr);
        return ans;
    }
};