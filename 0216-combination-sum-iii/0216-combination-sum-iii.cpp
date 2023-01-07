class Solution {
public:
    void solve(int ind,int k,int target,vector<int> &nums,vector<int> & temp,vector<vector<int>> &ans)
    {
        if(ind==nums.size())
        {
            if(temp.size()==k && target==0)
                ans.emplace_back(temp);
            return;
        }
    
            temp.emplace_back(nums[ind]);
            solve(ind+1,k,target-nums[ind],nums,temp,ans);
            temp.pop_back();
            solve(ind+1,k,target,nums,temp,ans);
    
    }   
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int>nums={1,2,3,4,5,6,7,8,9};
        vector<vector<int>> ans;
        vector<int> temp;
        solve(0,k,n,nums,temp,ans);
        return ans;
    }
};