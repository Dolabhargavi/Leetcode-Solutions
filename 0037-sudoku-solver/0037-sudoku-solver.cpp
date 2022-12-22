class Solution {
public:
    bool row_col_check(vector<vector<char>>& board,int a,int b,char k)
    {
        for(int i=0;i<9;i++)
        {
            if(board[a][i]==k || board[i][b]==k)
                return false;
        }
        return true;
    }
    bool gridcheck(vector<vector<char>>& board,int a,int b,char k)
    {
        for(int i=a-a%3;i<a-a%3+3;i++)
        {
            for(int j=b-b%3;j<b-b%3+3;j++)
            {
                if(board[i][j]==k)
                    return false;
            }
        }
        return true;
    }
    bool check(vector<vector<char>>& board,int a,int b,char k)
    {
        bool x=row_col_check(board,a,b,k);
        bool z=gridcheck(board,a,b,k);
        if(x&& z)
            return true;
        else
            return false;
    }
    bool solve(vector<vector<char>>& board)
    {
        for(int i=0;i<9;i++)
        {
            for(int j=0;j<9;j++)
            {
                 if(board[i][j]=='.')
                  {
                      for(char c='1';c<='9';c++)
                      {
                        
                         if(check(board,i,j,c))
                         {
                             board[i][j]=c;
                             if(solve(board)) return true;
                             else board[i][j]='.';
                         }
                      }
                      return false;
                  }
            }
            
        }
        
        return true;
    }
    void solveSudoku(vector<vector<char>>& board) {
      solve(board);
    }
};
