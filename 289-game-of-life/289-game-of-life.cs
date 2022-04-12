public class Solution {
    public void GameOfLife(int[][] board) 
    {
        int n = board.Length, m = board[0].Length;

        for(int i=0; i< n; i++)
        {
            for(int j=0; j< m; j++)
            {
                int neighbour = CountLiveNbrs(board, i, j, n, m);
                if(board[i][j] == 1 && (neighbour < 2 || neighbour > 3))
                {
                    board[i][j] = 2; 
                }
                else if(board[i][j] == 0 && neighbour == 3)
                {
                    board[i][j] = -1; 
                }
            }
        }
        
        for(int i=0; i< n; i++)
        {
            for(int j=0; j< m; j++)
            {
                if(board[i][j] == -1)
                    board[i][j] = 1;
                else if(board[i][j] == 2)
                    board[i][j] = 0;
                 
            }
        }
    }
    
    int CountLiveNbrs(int[][] board, int i, int j, int n, int m)
    {
        int neighbour = 0;
        for(int x = Math.Max(0, i-1); x<Math.Min(n, i+2); x++)
        {
            for(int y = Math.Max(0, j-1); y<Math.Min(m, j+2); y++)
            {
                if(board[x][y] >= 1)
                    neighbour++;
            }
        }
        neighbour -= board[i][j];
        return neighbour;
    }
}