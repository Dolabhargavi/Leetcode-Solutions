// class Solution {
// public:
//     int numSubarraysWithSum(vector<int>& nums, int goal) {
//         int ans=0;
//         int sum=0;
//         vector<int>vec;
//         for(int i=0;i<nums.size();i++)
//         {
//           sum+=nums[i];
//           vec.emplace_back(sum);
//           if(sum==goal) ans++;
//         }
//         for(int i=0;i<nums.size();i++)
//         {
//             for(int j=0;j<i;j++)
//             {
//                 if((vec[i]-vec[j])== goal) ans++;
//             }
//         }
//         return ans;
//     }
// };


class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        unordered_map<int, int> m;
        int sum = 0;
        m[0] = 1;
        int cnt = 0;
        for (int num : nums) {
            sum += num;
            if (m.find(sum - goal) != m.end()) {
                cnt += m[sum - goal];
            }
            m[sum]++;
        }   
        return cnt;
    }
};