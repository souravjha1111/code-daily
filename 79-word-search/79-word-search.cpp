class Solution {
public:

    bool backtrack(vector<vector<char>>& board, string& word, int pos, int i, int j, int row, int col){
        if(i >= row || j >= col || i < 0 || j < 0 || word[pos] != board[i][j])
            return false;
        if(pos == word.length()-1)
            return true;
        board[i][j] = '.'; 
        if(backtrack(board, word, pos+1, i+1, j, row, col) || 
            backtrack(board, word, pos+1, i-1, j, row, col) ||
            backtrack(board, word, pos+1, i, j+1, row, col) ||
            backtrack(board, word, pos+1, i, j-1, row, col))
            return true;
            board[i][j] = word[pos]; 
            return false;
    }           
    bool exist(vector<vector<char>>& board, string word) {
        for(int i=0;i<board.size();i++)
            for(int j=0;j<board[i].size();j++)
                if(backtrack(board, word, 0, i, j, board.size(), board[0].size()))
                    return true;
        return false;
    }
};