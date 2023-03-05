class Solution
{
    public:
        int sumOfBeauties(vector<int> &nums)
        {
            int n = nums.size(), ans = 0;
            int maxi = nums[0];
            int arr[n];
            arr[n - 1] = nums[n - 1];
            for (int i = n - 2; i >= 0; i--)
            {
                arr[i] = min(nums[i], arr[i + 1]);
            }
            for (int i = 1; i < n - 1; i++)
            {
                if (nums[i] > maxi && nums[i] < arr[i + 1]) ans += 2;
                else if (nums[i - 1] < nums[i] && nums[i] < nums[i + 1]) ans++;
                maxi = max(maxi, nums[i]);
            }
            return ans;
        }
};