class Solution {
public:
    int dp[501][501];
    int solve(vector<int> p, int l, int r){
        if(l>r)
            return 0;
        if(dp[l][r]!=-1)
            return dp[l][r];
        return dp[l][r] = max(p[r]+ solve(p, l, r-1), p[l]+solve(p, l+1,r));       
    }   
    bool stoneGame(vector<int>& p) {
        memset(dp,-1, sizeof dp);
        int res = solve(p,0,p.size()-1);
        if(res>0)
            return true;
        return false;
    }
};