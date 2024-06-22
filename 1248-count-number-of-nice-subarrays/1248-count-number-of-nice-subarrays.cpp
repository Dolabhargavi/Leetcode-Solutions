class Solution
{
    public:
        int numberOfSubarrays(vector<int> &nums, int k)
        {
            map<int, int> map;
            int ans = 0;
            int cnt = 0;
            for (int i = 0; i < nums.size(); i++)
            {
                if (nums[i] % 2 != 0)
                    cnt++;
                map[cnt]++;
                if (cnt >= k)
                {
                    if (cnt - k == 0)
                        ans += map[cnt - k] + 1;
                    else
                        ans += map[cnt - k];
                }
            }
            return ans;
        }
};