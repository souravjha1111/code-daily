public class Solution {
    public IList<IList<int>> ShiftGrid(int[][] grid, int k) {
        var temp1 =0;
        var temp2 =0;
        while(k>0){
        for(var i=0; i<grid.Length; i++){
            for(var j=0; j<grid[0].Length; j++){
                temp1 = grid[i][j];
                grid[i][j] = temp2;
                temp2= temp1;
            }
            }
                    grid[0][0] = temp2;

            k--;
        }
        return grid;
    }
}