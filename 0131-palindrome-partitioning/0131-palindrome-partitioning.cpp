class Solution {
public:
    bool ispalindrome(string s,int i,int ind)
    {
        while(ind<=i)
        {
            if(s[ind]!=s[i]) return false;
            ind++;
            i--;
        }
        return true;
    }
    void solve(int ind,string s,vector<string>&temp,vector<vector<string>>&ans,int n)
    {
        if(ind==n)
        {
            ans.push_back(temp);
            return;
        }
        for(int i=ind;i<n;i++)
        {
            if(ispalindrome(s,i,ind))
            {
               temp.push_back(s.substr(ind,i-ind+1));
                solve(i+1,s,temp,ans,n);
                temp.pop_back(); 
            }
            
        }
    }
    vector<vector<string>> partition(string s) {
      vector<vector<string>>ans;
        vector<string>temp;
        int n=s.length();
        solve(0,s,temp,ans,n);
        return ans;
    }
};