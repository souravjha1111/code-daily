// class Solution {
// public:
//     int findMin(vector<int>& nums) {
//         int  low= 0, high =0;
//         int res = nums[0];
//         while(low<high){
//             int mid = (low+high)/2;
//             if(nums[high]>=nums[low]){
//                 res = min(nums[low], res);
//                 low = mid+1;
//             }//sorted left part
//             else{
//                 res = min(nums[mid+1], res);
//                 high = mid-1;
//             }
//         }
//         return res;
//     }
//};

class Solution {
public:
    int findMin(vector<int>& nums) {
        int left = 0, right = nums.size() - 1, mid;
        while(left < right) {        
            mid = left + (right - left)/2;            
            if(nums[mid] < nums[right]) {
                right = mid;
            } else {
                left = mid+1;
            }
        }
        return nums[left];
    }
};
