class Solution {
public:
    bool check(vector<vector<char>>& board,int a,int b)
    {
        for(int i=0;i<9;i++)
        {
            if( i!=b && board[a][i]==board[a][b])
                return false;
            if(i!=a && board[i][b]==board[a][b])
                return false;
        }
        for(int i=a-a%3;i<a-a%3+3;i++)
        {
            for(int j=b-b%3;j<b-b%3+3;j++)
            {
                if(board[i][j]==board[a][b])
                {
                    if(i==a && j==b)
                        i=a;
                    else
                        return false;
                }
                    
            }
        }
        return true;
    }
    bool solve(vector<vector<char>>& board)
    {
        for(int i=0;i<9;i++)
        {
            for (int j=0;j<9;j++)
            {
                if(board[i][j]!='.')
                {
                    if(!check(board,i,j))
                        return false;
                }
            }
        }
        return true;
    }
    bool isValidSudoku(vector<vector<char>>& board) {
     return solve(board);  
    }
};