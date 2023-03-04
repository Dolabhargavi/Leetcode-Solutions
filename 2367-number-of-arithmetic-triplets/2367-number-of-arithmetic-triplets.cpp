class Solution {
public:
    int arithmeticTriplets(vector<int>& nums, int diff) {
        unordered_map<int,int>m;
        int count=0;
        for(int i=0;i<nums.size();i++) m[nums[i]]++;
        for(int i=0;i<nums.size();i++)
        {
            if(m[nums[i]]!=0 && m[nums[i]+diff]!=0 && m[nums[i]+2*diff]!=0) count++;
        }
        return count;
    }
};