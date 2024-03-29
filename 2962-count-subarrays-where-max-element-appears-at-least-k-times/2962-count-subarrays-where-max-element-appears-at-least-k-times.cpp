class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {
        int maxi=INT_MIN;
        long long int ans=0;
        for(int i=0;i<nums.size();i++)
        {
            maxi=max(maxi,nums[i]);
        }
        int cnt=0;
        int l=0;
        int r=0;
        while(r>=l && r<nums.size())
        {
            if(nums[r]==maxi) cnt++;
            while(cnt>=k) 
            {
                ans+=nums.size()-r;
                if(nums[l]==maxi) cnt--;
                l++;
            }
            r++;
        }
        return ans;
    }
};