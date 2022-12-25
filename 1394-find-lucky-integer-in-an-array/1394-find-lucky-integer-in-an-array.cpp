class Solution {
public:
    int findLucky(vector<int>& nums) {
       unordered_map<int,int>arr;
        int ans=-1;
      for(int i=0;i<nums.size();i++)
      {
          arr[nums[i]]++;
      }
        for(int i=0;i<nums.size();i++)
        {
            if(arr[nums[i]]==nums[i])
            {
                if(ans<nums[i])
                    ans=nums[i];
            }
        }
    return ans;
    }
};