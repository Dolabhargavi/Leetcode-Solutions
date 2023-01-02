class Solution {
public:
    bool isIsomorphic(string s, string t) {
       unordered_map<char,char>m;
        unordered_map<char,int>m1;
        for(int i=0;i<s.length();i++)
        {
            if(m.find(s[i])==m.end())
            {
               m[s[i]]=t[i]; 
                if(m1[t[i]]>0)
                    return false;
                else
                   m1[t[i]]++; 
            }
            else
            {
                if(m[s[i]]!=t[i])
                    return false;
            }
        }
        return true;
    }
};