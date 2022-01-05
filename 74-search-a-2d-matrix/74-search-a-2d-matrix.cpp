class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        bool result = false;
        for(int row = 0, col = matrix[0].size()-1; row< matrix.size();){
            if(matrix[row][col]==target){
                return true;
            }
            else if(matrix[row][col]<target){
                row++;
            }
            
            else {
                for(int column = 0; column<col;column++){
                    if(matrix[row][column]==target)
                        return true;
                }
                return false;
            }
            
        }
    return result;
    }
};