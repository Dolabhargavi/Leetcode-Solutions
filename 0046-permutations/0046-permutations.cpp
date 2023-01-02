class Solution {
public:
    void solve(int ind,vector<int>& nums,vector<vector<int>>& ans,vector<int>& temp,unordered_map<int,int> &m)
    {
       
            if(temp.size()==nums.size())
            {
                ans.emplace_back(temp);
                 return;
            }
            for(int i=0;i<nums.size();i++)
            {
                if(m[nums[i]]==0)
                {
                    temp.emplace_back(nums[i]);
                    m[nums[i]]=1;
                    solve(ind,nums,ans,temp,m);
                    temp.pop_back();
                    m[nums[i]]=0;
                }
            }
    }
    vector<vector<int>> permute(vector<int>& nums) {
      vector<vector<int>> ans;
        vector<int> temp;
        unordered_map<int,int>m;
        solve(0,nums,ans,temp,m);
        return ans;
    }
};