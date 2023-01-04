class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
       int s=0,e=nums.size(),mid;
        if(nums.size()==1)
            return nums[0];
       while(s<=e)
       {
           mid=(s+e)/2;
           if(mid==0)
               return nums[mid];
           if(nums[mid]!=nums[mid-1] && nums[mid]!=nums[mid+1])
               return nums[mid];
           else if(nums[mid]==nums[mid-1] && mid%2!=0)
               s=mid+1;
           else if(nums[mid]==nums[mid-1] && mid%2==0)
               e=mid;
           else if(nums[mid]==nums[mid+1] && mid%2!=0)
               e=mid-1;
           else 
               s=mid+2;
          
       }
    return 0;
    }
};