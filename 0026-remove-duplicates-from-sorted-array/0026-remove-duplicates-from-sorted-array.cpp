class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size();
      nums.erase(unique(nums.begin(),nums.end()),nums.end()); 
        return nums.size();
    }
};