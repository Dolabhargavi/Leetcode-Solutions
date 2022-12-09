class Solution {
public:
    int thirdMax(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        set<int>s(nums.begin(),nums.end());
        nums.assign(s.begin(), s.end());
        int n=nums.size();
        if(n==1 || n==2)
            return nums[n-1];  
        return nums[n-3];
     
    }
};