// class Solution {
// public:
// int jump(vector<int>& nums) {
// 	vector<int> dp(size(nums), 10001);
// 	return solve(nums, dp, 0);
// }
// int solve(vector<int>& nums, vector<int>& dp, int pos) {
// 	if(pos >= size(nums) - 1)
//         return 0; 
// 	if(dp[pos] != 10001)
// 	    return dp[pos];
// 	for(int j = 1; j <= nums[pos]; j++)
// 		dp[pos] = min(dp[pos], 1 + solve(nums, dp, pos + j));        
// 	return dp[pos];
// }
// };
class Solution{
public:

int jump(vector<int>& nums) {
        int res = 0, currpos = 0, maxjump = 0;
        for(int i = 0 ; i < nums.size() - 1 ; i++) {
            maxjump = max(maxjump, i + nums[i]);
            if(i == currpos) {                
                res++;                            
                currpos = maxjump;
            }                                            
        }                                                
        return res;}};
