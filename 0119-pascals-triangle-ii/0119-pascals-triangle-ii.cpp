class Solution {
public:
    vector<int> getRow(int rowIndex) {
      vector<vector<int>>ans;
        for(int i=0;i<=rowIndex;i++)
        {
            vector<int>sol;
            sol.push_back(1);
            for(int j=0;j<i-1;j++)
            {
                sol.emplace_back(ans[i-1][j]+ans[i-1][j+1]);
            }
            if(i!=0)
                sol.emplace_back(1);
            ans.emplace_back(sol);
        }
        return ans[rowIndex];
    }
};