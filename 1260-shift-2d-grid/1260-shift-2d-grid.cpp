class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        while(k--){
            int temp1 =0;
            int temp2 =0;
                for(int i=0; i<grid.size(); i++){
                    for(int j=0; j<grid[0].size();j++){
                        
                        temp1 = grid[i][j];
                        grid[i][j]= temp2;
                        temp2 = temp1;
                    }
                }
            grid[0][0] = temp2;
            }
        return grid;
        }
};