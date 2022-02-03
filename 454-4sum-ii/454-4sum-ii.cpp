
class Solution {
public:
    int fourSumCount(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3, vector<int>& nums4) {
        unordered_map<int,int> sum1;
        for(int x : nums1){
            for(int y : nums2){
                sum1[x+y]++;
            }
        }
        int cnt = 0;
        for(int x : nums3){
            for(int y : nums4){
                if(sum1.count((-(x+y)))==1){
                    cnt+= sum1[(-(x+y))];
                }
            }
        }
        return cnt;
        
    }
};


// class Solution {
// public:
    
//     int fourSum(vector<int>& num, int target) {
//         if (num.empty())
//             return 0;
//         int n = num.size(); 
//         int count = 0; 
//         sort(num.begin(),num.end());
    
//         for (int i = 0; i < n; i++) {
        
//             int target_3 = target - num[i];
        
//             for (int j = i + 1; j < n; j++) {
            
//                 int target_2 = target_3 - num[j];
            
//                 int front = j + 1;
//                 int back = n - 1;
            
//                 while(front < back) {
                
//                     int two_sum = num[front] + num[back];
                
//                     if (two_sum < target_2) front++;
                
//                     else if (two_sum > target_2) back--;
                
//                     else {
//                             count++;                    
//                             ++front;
//                     }
//                 }
//             }       
//         }
    
//         return count;
//     }  
    
    
//     int fourSumCount(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3, vector<int>& nums4) {
//         for(auto x:nums2)
//             nums1.push_back(x);
//         for(auto x:nums3)
//             nums1.push_back(x);
//         for(auto x:nums4)
//             nums1.push_back(x);
//         sort(nums1.begin(), nums1.end());
//         return fourSum(nums1, 0);
//     }
// };