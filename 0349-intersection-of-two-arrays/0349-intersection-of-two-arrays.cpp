class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        int i=0;
        int j=0;
        map<int,int>m;
        vector<int>ans;
        while(i<nums1.size())
        {
            m[nums1[i]]++;
            i++;
        }
        for(int i=0;i<nums2.size();i++)
        {
            if(m.find(nums2[i])!=m.end() && m[nums2[i]]!=0)
            {
                ans.emplace_back(nums2[i]);
                m[nums2[i]]=0;
            }
                
        }
        return ans;
    }
};