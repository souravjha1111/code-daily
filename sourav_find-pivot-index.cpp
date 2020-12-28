class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int sum= accumulate(nums.begin(),nums.end(),0);
        for(int i=0,start=0;i<nums.size();i++)
        {   
            sum=sum-nums[i];
            if(sum==start) 
                return i; 
            start=start+nums[i];
        }
        return -1;
    }
};