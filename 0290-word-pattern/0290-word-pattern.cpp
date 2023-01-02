class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<char,string>map;
        unordered_map<string,int>map1;
        s=s+" *";
        for(int i=0;i<pattern.length();i++)
        {
            if(map.find(pattern[i])==map.end())
            {
                if(s=="*")
                    return false;
                map[pattern[i]]= s.substr(0,s.find(" "));
                if(map1[s.substr(0,s.find(" "))]>0)
                    return false;
                map1[s.substr(0,s.find(" "))]++;
                s=s.substr(s.find(" ")+1);
                
            }
            else
            {
                if(s=="*")
                    return false;
                if(map[pattern[i]]!= s.substr(0,s.find(" ")))
                    return false;
                s=s.substr(s.find(" ")+1);
            }
           
        }
        // cout<<s<<"*";
      if(s!="*")
          return false;
      return true;
    }
};