class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> tot;
        unordered_map<string,int>m;
        int tar;
         string s="";
        for(int i=0;i<nums.size();i++)
        {
            
            if(i>0 && nums[i]==nums[i-1]) continue;
            tar=-(nums[i]);
            int k=nums.size()-1,j=0;
            while(j<k)
            {
              vector<int>n;
              string s="";
              if(j==i) j++;
              if(k==i) k--;
              else if(nums[j]+nums[k]<tar)
              {
                  if(nums[j]==nums[j+1]) j++;
                  j++;
              }
              else if(nums[j]+nums[k]>tar) 
              {
                 if(nums[k]==nums[k-1]) k--;
                  k--;
              }
              else if(nums[j]+nums[k]==tar && j!=k)
                {
                    n.emplace_back(nums[i]);
                    n.emplace_back(nums[j]);
                    n.emplace_back(nums[k]);
                    sort(n.begin(),n.end());
                  for(int m=0;m<3;m++)
                  {
                    if(n[m]<10) s+=to_string(0)+to_string(0)+to_string(0)+to_string(0)+to_string(n[m]);
                    else if(n[m]<100) s+=to_string(0)+to_string(0)+to_string(0)+to_string(n[m]);
                    else if(n[m]<1000) s+=to_string(0)+to_string(0)+to_string(n[m]);
                    else if(n[m]<10000) s+=to_string(0)+to_string(n[m]);
                    else s+=to_string(n[m]);
                  }
                  if(m[s]==0)
                  {
                       tot.push_back(n);
                       m[s]++;
                  }
                  if(nums[j]==nums[j+1]) j++;
                    j++;
                  if(nums[k]==nums[k-1]) k--;
                    k--;
                }
              
            }
            
           // cout<<s+to_string(4);
            
        } 
        return tot;
    }
};