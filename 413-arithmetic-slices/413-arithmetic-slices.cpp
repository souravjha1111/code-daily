class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        int res = 0, currsize = 0, currdiff=0;
        int i=0;
        bool toggle = true;
        for(i=2; i<nums.size() && toggle; i++){
            if(nums[i]-nums[i-1] == nums[i-1] - nums[i-2]){
                toggle = false;
                currsize =3;
                currdiff = nums[i]-nums[i-1];
                res+=1;
            }
        }
        for(i--; i<nums.size()-1; i++){
            if(nums[i+1] - nums[i] == currdiff){
                currsize++;
                if(currsize>=3){
                res+=currsize-2;
                }
            }
            else{
                currsize = 2;
                currdiff = nums[i+1]-nums[i];
            }
        }
        return res;
    }
};
