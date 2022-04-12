class Solution {
public:
    int neborsum(int m, int n, vector<vector<int>>& board, int i, int j){
        int res =0;
        if(i+1!=m)
            res+=board[i+1][j];
        if(i-1!=-1)
            res+=board[i-1][j];
        if(j+1!=n)
            res+=board[i][j+1];
        if(j-1!=-1)
            res+=board[i][j-1];
        
        if(j+1!=n && i+1!=m)
            res+=board[i+1][j+1];
            
        if(j+1!=n && i-1!=-1)
            res+=board[i-1][j+1];
        
        if(j-1!=-1 && i+1!=m)
            res+=board[i+1][j-1];
            
        if(j-1!=-1 && i-1!=-1)
            res+=board[i-1][j-1];
        return res;
    }

    void gameOfLife(vector<vector<int>>& board) {
        vector<vector<int>> finalb = board;
        int m = board.size(), n=board[0].size();
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(board[i][j]==0){
                    int res = neborsum(m,n, board, i, j);
                    if(res==3)
                        finalb[i][j]=1;
                }
                else{
                    int res = neborsum(m,n, board, i, j);
                    if(res<2)
                        finalb[i][j]=0;
                    else if(res>3)
                        finalb[i][j]=0;
                }
            }
        }           
        board = finalb;
    }
};