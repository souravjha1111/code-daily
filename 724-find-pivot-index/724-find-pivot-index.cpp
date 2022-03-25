class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int totalsum =0;
        for(auto el:nums)
            totalsum+=el;
        int sumtillnow = 0;
        int size = nums.size();
        for(int i=0; i<size; i++){
            totalsum-=nums[i];
            if(sumtillnow ==totalsum)
                return i;
            sumtillnow+=nums[i];
        }
        return -1;
    }
};