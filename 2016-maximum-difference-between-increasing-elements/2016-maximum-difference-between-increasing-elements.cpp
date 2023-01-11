// class Solution {
// public:
//     int maximumDifference(vector<int>& nums) {
//        int ans=0,i;
//         for(i=0;i<nums.size()-1;i++)
//         {
//            for(int j=i+1;j<nums.size();j++)
//            {
//                ans=max(ans,nums[j]-nums[i]);       //order(n^2)
//            }
//         } 
//         ans=max(ans,nums[i]-nums[0]); 
//         if(ans==0)
//             return -1;
//         return ans;
//     }
// };
class Solution {
    public:
    int maximumDifference(vector<int>& nums) {
        int ans=-1,min=nums[0];
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]>min) 
                ans=max(ans,nums[i]-min);  //order(n)
            else 
                min=nums[i];
        }
        return ans;
    }
};