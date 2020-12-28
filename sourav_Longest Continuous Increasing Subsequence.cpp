class Solution {
public:
int findLengthOfLCIS(vector<int>& nums) {
    int max_length = 1, current_length = 1;
    if(nums.size() == 0) 
        return 0;
    for(int i=1;i<nums.size();i++){
        if(nums[i] > nums[i-1]) 
        current_length++;
        else 
        current_length = 1;
        max_length = max(max_length, current_length);
    }
    return max_length;
}
};