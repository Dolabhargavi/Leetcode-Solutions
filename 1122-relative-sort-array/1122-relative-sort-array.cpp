class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
       unordered_map<int,int>map;
        vector<int>ans;
        vector<int>tmp;
        for(int i=0;i<arr1.size();i++)
        {
               map[arr1[i]]++;
        }
        for(int i=0;i<arr2.size();i++)
        {
            while(map[arr2[i]]>0)
            {
                ans.emplace_back(arr2[i]);
                map[arr2[i]]--;
            }
        }
        for(int i=0;i<arr1.size();i++)
        {
               if(map[arr1[i]]>0)
                   tmp.emplace_back(arr1[i]);
        }
        sort(tmp.begin(),tmp.end());
        for(int i=0;i<tmp.size();i++)
        {
            ans.emplace_back(tmp[i]);
        }
        return ans;
    }
};