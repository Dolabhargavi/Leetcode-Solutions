class Solution {
public:
    vector<vector<int>> generate(int numRows) {
       vector<vector<int>>ans;
       for(int i=0;i<numRows;i++)
       {
           vector<int>sol;
           sol.emplace_back(1);
           for(int j=0;j<i-1;j++)
           {
               sol.emplace_back(ans[i-1][j]+ans[i-1][j+1]);
           }
           sol.emplace_back(1);
           if(i==0)
               sol.erase(sol.begin());
           ans.emplace_back(sol);
          
       }
        
        return ans;
    }
};