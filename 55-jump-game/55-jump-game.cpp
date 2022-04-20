class Solution {
public:
    bool canJump(vector<int>& nums) {
        vector<int> dp(nums.size(),0);
        int size =nums.size();
        dp[size-1]=0;
        bool toggle = false;
        if(size==1)
            return true;
        int counter =1;
        
        for(int i= nums.size()-2; i>=0; i--){
            if(nums[i]>=counter){
                toggle = true;
                counter =1;
            }
            else{
                toggle = false;
                counter++;
            }
        }
        return toggle;
    }
};