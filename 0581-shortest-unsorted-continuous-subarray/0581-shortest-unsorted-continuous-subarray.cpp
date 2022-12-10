class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
      int n=nums.size();
      vector<int>v(nums.begin(),nums.end());
      sort(v.begin(),v.end());
        int c=0,d=0;
      for(int i=0;i<n;i++)
      {
          if(nums[i]==v[i])
              c++;
          else
              break;
      }
      for(int i=n-1;i>=0;i--)
      {
          if(nums[i]==v[i])
              d++;
          else
              break;
      }
        if(c+d>n)
            return 0;
        else
            return n-c-d;
    }
};