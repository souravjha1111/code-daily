class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        double totalsum =0;
        for(auto el:nums)
            totalsum+=el;
        if(nums.size()==1)
            return 0;
        double sumtillnow = 0;
        for(int i=0; i<nums.size(); i++){
            totalsum-=nums[i];
            if(sumtillnow ==totalsum)
                return i;
            sumtillnow+=nums[i];
        }
        return -1;
    }
};