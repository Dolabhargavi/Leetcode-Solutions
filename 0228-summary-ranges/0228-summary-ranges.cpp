class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        int s,e;
        vector<string>ans;
        if(nums.size()==1)
            ans.push_back(to_string(nums[0])); 
        for(int i=1;i<nums.size();i++)
        {
            s=i-1;
            while( i<nums.size() && nums[i-1]+1==nums[i] )
                i++;
            e=i-1;
            if(s==e)
            ans.push_back(to_string(nums[s]));
            else
            ans.push_back(to_string(nums[s])+"->"+to_string(nums[e])); 
            if(nums.size()==i+1)
              ans.push_back(to_string(nums[i])) ; 
        }
        return ans;
    }
};