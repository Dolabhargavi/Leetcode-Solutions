class Solution {
public:
    void solve(int col,vector<vector<string>>&ans,vector<string>&board,vector<int>&leftrow,vector<int>&lowdiag,      vector<int>&updiag,int n)
    {
      if(col==n)
      {
          ans.push_back(board);
          return;
      }
      for(int row=0;row<n;row++)
      {
          if(leftrow[row]==0 && lowdiag[row+col]==0 && updiag[n-1+row-col]==0)
          {
            board[row][col]='Q';
            leftrow[row]=1;
            lowdiag[row+col]=1;
            updiag[n-1+row-col]=1;
            solve(col+1,ans,board,leftrow,lowdiag,updiag,n);
            board[row][col]='.';
            leftrow[row]=0;
            lowdiag[row+col]=0;
            updiag[n-1+row-col]=0;
          }
      }
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>>ans;
        vector<string>board(n);
        vector<int>leftrow(n,0);
        vector<int>lowdiag(2*n-1,0);
        vector<int>updiag(2*n-1,0);
        string s(n,'.');
        for(int i=0;i<n;i++)
            board[i]=s;
        solve(0,ans,board,leftrow,lowdiag,updiag,n);
        return ans;
    }
};