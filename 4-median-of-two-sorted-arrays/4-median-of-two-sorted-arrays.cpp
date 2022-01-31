class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        if(nums2.size() < nums1.size()) return findMedianSortedArrays(nums2, nums1);
        int n1 = nums1.size();
        int n2 = nums2.size(); 
        int low = 0, high = n1;
        
        while(low <= high) {
            int cut1 = (low+high) >> 1;
            int cut2 = (n1 + n2 + 1) / 2 - cut1; 
            
        
            int left1 = cut1 == 0 ? INT_MIN : nums1[cut1-1];
            int left2 = cut2 == 0 ? INT_MIN : nums2[cut2-1]; 
            
            int right1 = cut1 == n1 ? INT_MAX : nums1[cut1];
            int right2 = cut2 == n2 ? INT_MAX : nums2[cut2]; 
            
            
            if(left1 <= right2 && left2 <= right1) {
                if( (n1 + n2) % 2 == 0 ) 
                    return (max(left1, left2) + min(right1, right2)) / 2.0; 
                else 
                    return max(left1, left2); 
            }
            else if(left1 > right2) {
                high = cut1 - 1; 
            }
            else {
                low = cut1 + 1; 
            }
        }
        return 0.0; 
    }
};






// class Solution {
// public:
//     double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
//         int m = nums1.size();//bigger
//         int n = nums2.size();
//         if(m==0){
//             if(n%2==0)
//                 return (nums2[n/2-1] + nums2[n/2] )/2;
//             else 
//                 return nums1[n/2]
//         }
        
//         if(n==0){
//             if(m%2==0)
//                 return (nums1[m/2-1] + nums1[m/2] )/2;
//             else
//                 return nums2[m/2];
//         }
//         if(nums1[0]<nums2[0]){
//             return findMedianSortedArrays(vector<int>& nums2, vector<int>& nums1);
//         }
//         int fp =0;
//         int sp =0;
//         int curr = 0
//         string currvec = 'one';
//         int size = m+n;
//         while(size--){
//             if(nums1.size()<=fp){
//                 currvec = 'sec';
//                 curr = sp;
//                 break;
//             }
//             else if(nums2.size()<=sp){
//                 currvec = 'one';
//                 curr=fp;
//                 break;
//             }
//             if(nums1[fp]>=nums2[sp]){
//                 fp++;
//                 curr=fp;
//             }
//             else {
//                 sp++;
//                 curr = sp;
//             }
//         }
//         while(size--){
//             if(currvec=='one'){
//                 fp++;
//             }
//             else 
//                 sp++;}
//         if(size%2 ==1){
//             if(currvec =='one' && fp<nums1.size()-1)
//                 return nums1[fp+1];
//             else if(currvec =='sec' && sp<nums2.size()-1)
//                 return nums1[sp+1];
//             else if(currvec =='one' && fp>=nums1.size())
//                 return nums2[sp+1];
//             else if(currvec =='sec' && sp>=nums2.size())
//                 return nums1[fp+1];
//         }        
//         else{
//             if(currvec=='one'){
//                 if()
//             }
//         }
//     }
// };


// // [1,3,7,11]
// // [2,4,6,10,14]