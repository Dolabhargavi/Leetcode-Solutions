class Solution {
public:
  
    int minMaxGame(vector<int>& nums) {
        int n=nums.size();
        while(n!=1)
        {
            int k=0,c=0;
           for(int i=0;i<nums.size();i+=2)
           {
               if(c==0)
               {
                    nums[k]=min(nums[i],nums[i+1]);
                   c++;
               }
               else
               {
                    nums[k]=max(nums[i],nums[i+1]);
                   c--;
               }
               k++;
           }
            n=n/2;
        }
        return nums[0];
    }
};