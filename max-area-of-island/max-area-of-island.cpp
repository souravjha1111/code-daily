class Solution {
public:
    
    int dfs(vector<vector<int>>& grid, int row, int col) {
        if(row<0 || row>=grid.size() || col<0 || col>=grid[0].size() || grid[row][col]!=1)
            return 0;
         grid[row][col]=-1;
            return 1 + dfs(grid, row+1, col) + dfs(grid, row-1, col) + dfs(grid, row, col+1) + dfs(grid, row, col-1); 
        }
    
    
    
    int maxAreaOfIsland(vector<vector<int>>& grid) {
    int maxi = 0;
        for(int i=0;i<grid.size();i++){
            for(int j=0; j<grid[0].size(); j++){
                if(grid[i][j]==1){
                    maxi = max(maxi, dfs(grid, i, j));
                }
            }
        }
        return maxi;
    }
};