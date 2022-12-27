class Solution {
public:
    int triangularSum(vector<int>& nums) {
        int n=nums.size(); 
        for(int i=0;i<n-1;i++)
        {
            vector<int>ans;
            for(int j=0;j<n-1;j++)
            {
                ans.emplace_back((nums[j]+nums[j+1])%10);
            }
           nums=ans;
           
            
        }
        return nums[0];
    }
};