class Solution {
public:
    int deleteAndEarn(vector<int>& nums) {
        vector<int> dp(20003,0);
        int exclude =0, include =0;
        for(int i=0; i<nums.size(); i++)
            dp[nums[i]]++;
        for(int i=0; i<20003; i++){
            int temp1 = exclude+dp[i]*i;
            int temp2 = max(exclude, include);
            include = temp1;
            exclude = temp2;
        }
        return max(exclude, include);
    }
};