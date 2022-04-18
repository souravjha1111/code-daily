class Solution {
public:
    int maximalSquare(vector<vector<char>>& matrix) {
        vector<vector<int>> dp(matrix.size()+1, vector<int>(matrix[0].size()+1, 0));
        if(matrix.size()==0)
            return 0;
        int maxi =0;
        for(int i=1; i<=matrix.size(); i++){
            for(int j=1; j<=matrix[0].size(); j++){
                if(matrix[i-1][j-1]=='1'){
                dp[i][j] = 1+min(dp[i-1][j], min(dp[i][j-1], dp[i-1][j-1]));
                maxi = max(maxi, dp[i][j]);
                }
            }
        }
        return maxi*maxi;
    }
};