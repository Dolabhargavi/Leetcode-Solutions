class Solution
{
    public:
        int partitionDisjoint(vector<int> &nums)
        {
            int n = nums.size(), ans = 0;
            vector<int> mini(n + 1);
            mini[n] = INT_MAX;
            int maxi = INT_MIN;
            for (int i = n - 1; i >= 0; i--)
            {
                mini[i] = min(mini[i + 1], nums[i]);
            }
            for (int i = 0; i < n - 1; i++)
            {
                maxi = max(maxi, nums[i]);
                if (maxi <= mini[i + 1]) return i + 1;
            }
            return ans;
        }
};