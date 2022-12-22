class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n=nums.size();
      for(int i=0;i<n;i++)
      {
          if(nums[i]==1)
          {
              nums.erase(nums.begin()+i);
              nums.push_back(1);
              i--;
              n--;
            
          }    
      }
         n=nums.size();
      for(int i=0;i<n;i++)
      {
          if(nums[i]==2)
          {
              nums.erase(nums.begin()+i);
              nums.push_back(2);
              i--;
              n--;
            
          }    
      }
    }
};