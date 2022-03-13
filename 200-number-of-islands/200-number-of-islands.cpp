class Solution {
public:
    void markisland(vector<vector<char>>& grid, int i, int j){
        if(i<0 || i>=grid.size() || j<0 || j>=grid[0].size())
            return;
        if(grid[i][j]!='1')
            return;
        grid[i][j]='x';
        markisland(grid, i, j+1);
        markisland(grid, i+1, j);
        markisland(grid, i, j-1);
        markisland(grid, i-1, j);
    }
    int numIslands(vector<vector<char>>& grid) {
        if(grid.size()==1 && grid[0].size()==1){
            if(grid[0][0]=='1')
                return 1;
            else 
                return 0;
        }
        int res=0;
        for(int i=0; i<grid.size(); i++){
            for(int j=0; j<grid[0].size(); j++){
                if(grid[i][j]=='1'){
                    markisland(grid, i, j);
                    res++;
                }
            }
        }
    return res;
    }
};