class Solution {
public:
    int res =0;
    
    void solve(vector<int>& nums, int i, int curr, int target){
        if(i==nums.size()){
            if(curr==target)
                res++;
            return ;
        }
        else{
            solve(nums, i+1, curr+nums[i],target);
            solve(nums, i+1, curr-nums[i],target);
        }
    }
    
    int findTargetSumWays(vector<int>& nums, int target) {
        solve(nums, 0,0,target);
        return res;
    }
};