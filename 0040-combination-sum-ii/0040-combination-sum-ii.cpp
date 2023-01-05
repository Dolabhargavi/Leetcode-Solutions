class Solution {
public:
    void solve(int ind,int target, vector<int>& nums,vector<int> &temp,vector<vector<int>>&ans)
    {
       if(target==0)
       {
            ans.emplace_back(temp);
            return;
       }
           
        for(int i=ind;i<nums.size();i++)
        {
            if(i>ind && nums[i]==nums[i-1]) continue;
            if(nums[i]>target)
                break;
            temp.emplace_back(nums[i]);
            solve(i+1,target-nums[i],nums,temp,ans);
            temp.pop_back();  
            
        } 
    
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<int>temp;
        vector<vector<int>> ans;
        solve(0,target,candidates,temp,ans);
        return ans;
    }
};