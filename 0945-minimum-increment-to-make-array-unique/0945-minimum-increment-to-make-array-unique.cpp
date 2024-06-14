// class Solution
// {
//     public:
//         int minIncrementForUnique(vector<int> &nums)
//         {
//             unordered_map<int, int> map;
//             sort(nums.begin(),nums.end());
//             int cnt = 0;
//             for (int i = 0; i < nums.size(); i++)
//             {
//                 if (map.find(nums[i]) == map.end())
//                 {
//                     map[nums[i]]++;
//                 }                                          // Bruteforce -TLE
//                 else
//                 {
//                     int n = nums[i];
//                     while (map.find(n) != map.end())
//                     {
//                         n++;
//                         cnt++;
//                     }
//                     map[n]++;
//                 }
//             }
//             return cnt;
//         }
// };
class Solution
{
    public:
        int minIncrementForUnique(vector<int> &nums)
        {
            sort(nums.begin(),nums.end());
            int cnt = 0;
            int tracker=0;
            for (int i = 0; i < nums.size(); i++)
            {
               tracker=max(tracker,nums[i]); 
               cnt+=tracker-nums[i];
               tracker++;
            }
            return cnt;
        }
};