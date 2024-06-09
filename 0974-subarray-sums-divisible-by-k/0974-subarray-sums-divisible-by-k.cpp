class Solution
{
    public:
        int subarraysDivByK(vector<int> &nums, int k)
        {
            int cnt = 0;
            unordered_map<int,int>map;
            map[0]=1;
            int prefix_sum=0;
            int mod=0;
            for (int i = 0; i < nums.size(); i++)
            {
                prefix_sum+=nums[i];
                mod=prefix_sum%k;
                if(mod<0) mod+=k;
                if(map.find(mod)!=map.end())
                {
                    cnt+=map[mod];
                    map[mod]+=1;
                }
                else
                    map[mod]=1;
            }
            return cnt;
        }
};