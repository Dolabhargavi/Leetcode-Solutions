class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        unordered_map<int,int>m;
        sort(target.begin(),target.end());
        sort(arr.begin(),arr.end());
        if(target.size()!=arr.size())
            return false;
        for(int i=0;i<target.size();i++)
        {
            m[target[i]]++;
            m[arr[i]]--;
            if(m[target[i]]!=0 || m[arr[i]]!=0)
                return false;
        }
        return true;
    }
};