class Solution {
public:
    void rotate(vector<int>& nums, int k) {
      int n=nums.size();
      k=k%n;
      k=n-k;
     for(int i=0;i<k;i++)
      {
          nums.emplace_back(nums[i]);
      }
        nums.erase(nums.begin(),nums.begin()+k);

      
    }
};