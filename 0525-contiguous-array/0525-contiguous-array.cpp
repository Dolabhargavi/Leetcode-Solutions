class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int c=0,maxi=0;
        unordered_map<int,int>m;
       for(int i=0;i<nums.size();i++)
       {
           if(nums[i]==0) c--;
           else c++;
           auto it=m.find(c);
           if(c==0)
           {
               maxi=max(maxi,i+1);
           }
           if(it!=m.end())
           {
               maxi=max(maxi,i-it->second);
           }
           if(it==m.end())
               m.insert({c,i});
       }
        return maxi;
    }
};