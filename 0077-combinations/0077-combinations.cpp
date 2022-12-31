class Solution {
public:
    void solve(int ind,int k,vector<vector<int>>& ans,vector<int>& temp,int n)
    {
        if(ind==n)
        {
            if(temp.size()==k)
            ans.emplace_back(temp);
            return;
        }
        temp.emplace_back(ind+1);
        solve(ind+1,k,ans,temp,n);
        temp.pop_back();
        solve(ind+1,k,ans,temp,n);
        
    }
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>>ans;
        vector<int>temp;
        solve(0,k,ans,temp,n);
            return ans;
    }
};