class Solution {
public:
    void solve(int s,int target,vector<int>& candidates,vector<int>& temp, vector<vector<int>>& ans)
    {
        if(s==candidates.size())
        {
            if(target==0)
            {
                ans.emplace_back(temp);
            }
            return;
        }
        if(candidates[s]<=target)
        {
            temp.emplace_back(candidates[s]);
            solve(s,target-candidates[s],candidates,temp,ans);
            temp.pop_back();
        }
        
         
        solve(s+1,target,candidates,temp,ans);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        vector<int>temp;
        solve(0,target,candidates,temp,ans);
        return ans;
    }
};