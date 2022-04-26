// class Solution {
// public:
//     int res =INT_MAX;
//     void solve(vector<int>& coins, int amount, int count, vector<int>& dp){
//         if(amount<0)
//             return;
//         if(amount ==0){
//             res = min(res, count);
//         }
//         for(auto el: coins){
//             solve(coins, amount-el, count+1);
//         }       
//     }
//     int coinChange(vector<int>& coins, int amount) {
//         int count =0;
//         vector<int> dp(amount, -1);
//         solve(coins, amount, count, dp);
//         return dp[-1];   
//     }
// // };
class Solution {
public:
    int coinChange(vector<int>& coins, int n) {
        int dp[++n];
        dp[0] = 0;
        sort(begin(coins), end(coins));
        for (int i = 1; i < n; i++) {
            dp[i] = INT_MAX;
            for (int c: coins) {
                if (i - c < 0)
                    break;
                if (dp[i - c] != INT_MAX)
                    dp[i] = min(dp[i], 1 + dp[i - c]);
            }
        }
        return dp[--n] == INT_MAX ? -1 : dp[n];
    }
};

// class Solution {
// public:
// int coinChange(vector<int>& coins, int amount) {
// 	int n = coins.size();        	
// 	vector<int> dp(amount + 1, amount + 1); 
// 	dp[0] = 0;
// 	for(int currAmount = 1; currAmount <= amount; ++currAmount)
// 		for(auto& coin : coins)
// 			if(coin <= currAmount)
// 			    dp[currAmount] = min(dp[currAmount], 1 + dp[currAmount - coin]);
// 	return dp[amount] > amount ? -1 : dp[amount];
//     }
// };