class Solution {
public:
    string oddString(vector<string>& words) {
       unordered_map<string,int>map;
        unordered_map<string,string>m1;
        int flag=0;
        string s1,s2;
       for(int i=0;i<words.size();i++)
       {
           vector<int>temp;
           string s;
           for(int j=1;j<words[0].size();j++) 
           {  
              temp.emplace_back(char(words[i][j]-97)-char(words[i][j-1]-97)); 
           }
           for(int k=0;k<temp.size();k++)
           {
               s+=to_string(temp[k]);
           }
          
           if(map.find(s)== map.end())
           {
               if(flag==2 && i>=2)
                   break;
               map[s]++;
               m1[s]=words[i];
               flag++;
           }
           else
               map[s]++;
          
          
       }
        for(auto it:map)
          {
              if(it.second==1)
              {
                 return m1[it.first]; 
              }
          }
    
        return words[words.size()-1];
    }
};