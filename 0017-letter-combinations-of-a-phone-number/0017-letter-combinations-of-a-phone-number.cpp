class Solution {
public:
    void solve(string s,string digits,vector<string> &str)
    {
        if(digits.empty())
        {
            str.emplace_back(s);
            return;
        }
        int num=digits[0]-'0';
        if(num<7)
        {
           for(int i=(num-2)*3;i< (num-1)*3;i++)
           {
               char ch='a'+i;
               solve(s+ch,digits.substr(1),str);
           }
        } 
        else  if(num==7)
        {
           for(int i=(num-2)*3;i<=(num-1)*3;i++)
           {
               char ch='a'+i;
               solve(s+ch,digits.substr(1),str);
           }
        } 
        else  if(num==8)
        {
           for(int i=(num-2)*3+1;i<=(num-1)*3;i++)
           {
               char ch='a'+i;
               solve(s+ch,digits.substr(1),str);
           }
        } 
        else
        {
           for(int i=(num-2)*3+1;i<=(num-1)*3+1;i++)
           {
               char ch='a'+i;
               solve(s+ch,digits.substr(1),str);
           }
        } 
    }
    vector<string> letterCombinations(string digits) {
        if(digits.empty()) return {};
       vector<string>str;
        solve("",digits,str);
        return str;
    }
};