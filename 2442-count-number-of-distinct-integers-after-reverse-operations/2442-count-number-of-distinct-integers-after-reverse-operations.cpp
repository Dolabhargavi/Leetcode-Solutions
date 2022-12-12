class Solution {
public:
    int reverse(int num) {
        int ans = 0;
        while (num) {
            int d = num % 10;
            num /= 10;
            ans *= 10;
            ans += d;
        }
        return ans;
    }
    int countDistinctIntegers(vector<int>& nums) {
       int n=nums.size();
       for(int i=0;i<n;i++)
       {
           nums.emplace_back(reverse(nums[i]));
       }
        sort(nums.begin(),nums.end());
       nums.erase(unique(nums.begin(),nums.end()),nums.end());
        return nums.size();
    }
};