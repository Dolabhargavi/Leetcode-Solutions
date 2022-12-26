class Solution {
public:
    vector<int> maxSubsequence(vector<int>& nums, int k) {
        vector<int>nums1=nums;
        vector<int>ans;
        unordered_map<int,int>m;
        int n= nums.size();
        n=n-k;
        sort(nums1.begin(),nums1.end());
        nums1.erase(nums1.begin(),nums1.end()-k);
        for(int i=0;i<nums1.size();i++)
            m[nums1[i]]++;
        for(int i=0;i<nums.size();i++)
        {
            if(m[nums[i]]>0)
            {
                m[nums[i]]--;
                ans.emplace_back(nums[i]);
            }
               
        }
        return ans;
    }
};