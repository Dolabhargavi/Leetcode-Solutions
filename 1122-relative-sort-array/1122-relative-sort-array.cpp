class Solution
{
    public:
        vector<int> relativeSortArray(vector<int> &arr1, vector<int> &arr2)
        {
            map<int, int> map;
            vector<int> ans;
            for (int i = 0; i < arr1.size(); i++)
            {
                map[arr1[i]]++;
            }
            for (int i = 0; i < arr2.size(); i++)
            {
                while (map[arr2[i]] > 0)
                {
                    ans.emplace_back(arr2[i]);
                    map[arr2[i]]--;
                }
            }
            for (auto it: map)
            {
                while (it.second)
                {
                    ans.push_back(it.first);
                    it.second--;
                }
            }
            return ans;
        }
};