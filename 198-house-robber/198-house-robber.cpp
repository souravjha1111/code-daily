class Solution {
public:
    int rob(vector<int>& nums) {
        if(nums.size()==1)
            return nums[0];
        else if(nums.size()==2)
            return max(nums[0], nums[1]);
        else if(nums.size()==3)
            return max(nums[0] + nums[2], nums[1]);
        vector<int> dp(nums.size(), 0);
        dp[nums.size()-1] = nums[nums.size()-1];
        dp[nums.size()-2] = nums[nums.size()-2];
        dp[nums.size()-3] = nums[nums.size()-1] + nums[nums.size()-3];
        for(int i = nums.size()-4; i>=0; i--){
            dp[i] = nums[i]+ max(dp[i+2], dp[i+3]);
        }
        return max(dp[0], dp[1]);
        
    }
};