class Solution {
public:
    int maximumDifference(vector<int>& nums) {
       int ans=0,i;
        for(i=0;i<nums.size()-1;i++)
        {
           for(int j=i+1;j<nums.size();j++)
           {
               ans=max(ans,nums[j]-nums[i]);
           }
        } 
        ans=max(ans,nums[i]-nums[0]); 
        if(ans==0)
            return -1;
        return ans;
    }
};