class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
       int n = nums.size();
        if(n==3 && nums[0]==0 && nums[1]==0 && nums[2]==0)
            return { {0,0,0}};
        vector<vector<int>> result;
        sort(nums.begin(),nums.end());
        for(int i=0; i<n-2; i++){
            if(i==0 || (i>0 && nums[i]!=nums[i-1])){
                int low = i+1, high = nums.size()-1, sum = 0-nums[i];
                
                while(low<high){
                    if(nums[low] + nums[high]==sum){
                        vector<int> t;
                        t.push_back(nums[i]);
                        t.push_back(nums[low]);
                        t.push_back(nums[high]);
                        result.push_back(t);
                        while(low<high && nums[low] == nums[low+1])
                            low++;
                         while(low<high && nums[high] == nums[high-1])
                            high--;
                        low++;
                        high--;
                    }
                    else if(nums[low]+nums[high]<sum)
                        low++;
                    else
                        high--;
                }
            }
        }
        return result;
    }
};











// class Solution {
// public:
//     vector<vector<int>> threeSum(vector<int>& nums) {
//        int n = nums.size();
//         if(n<3)
//             return {};
//         vector<vector<int>> result;
//         sort(nums.begin(),nums.end());
//         for(int i=1; i<n-2; i++){
//             if(nums[i-1] ==nums[i])
//                 i++;
//             else{
//                 int low = i;
//                 int high = n-1;
//                 while(low<high){
//                     if(nums[i-1] + nums[low] + nums[ high] ==0){
//                         result.push_back({nums[i-1] , nums[low] ,nums[ high]});
//                         while(low<high && nums[low-1]==nums[low])
//                             low++;
//                         while(low<high && nums[high-1]==nums[high])
//                             high--;
//                     }
//                     if(nums[i-1] > nums[low] + nums[high])
//                         high--;
//                     else{
//                         low++;
//                     }
//                 }
//             }
//         }
//         return result;
//     }
// };


