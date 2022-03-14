class Solution {
public:
    void sortColors(vector<int>& nums) {
        int left = -1;
        int size = nums.size();
        while(++left<size){
            int _min = left;
            for(int i =left; i<size;i++){
                if(nums[i]<nums[_min])
                    _min = i;
            }
            int x = nums[_min];
            nums[_min] = nums[left];
            nums[left]=  x;

        }
    }
};