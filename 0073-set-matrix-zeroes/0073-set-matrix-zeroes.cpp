class Solution {
public:
    vector<vector<int>> trans(vector<vector<int>>& ans,int a,int b)
    {
        for(int i=0;i<ans[0].size();i++)
        {
            ans[a][i]=0;
        }
        for(int i=0;i<ans.size();i++)
        {
            ans[i][b]=0;
        }
        return ans;
    }
    void setZeroes(vector<vector<int>>& matrix) {
      vector<vector<int>> ans=matrix ;
      for(int i=0;i<matrix.size();i++)
      {
          for(int j=0;j<matrix[0].size();j++)
          {
              if(matrix[i][j]==0)
              {
                  ans=trans(ans,i,j);
              }
          }
      }
        matrix=ans;
    }
};