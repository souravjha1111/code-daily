class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        vector<int> dp(nums.size()+1,0);
        dp[0]=1;
        for(int i=0; i<nums.size(); i++){
            for(int j=0; j< i; j++){
                if(nums[j]<nums[i])
                    dp[i] = max(dp[j], dp[i]);
            }
            if(i!=0)
            dp[i]++;
        }
        int maxi = INT_MIN;
        for(auto el:dp)
            maxi = max(maxi, el);
        return maxi;
    }
};