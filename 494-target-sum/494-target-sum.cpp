// class Solution {
// public:
//     int res =0;
//     void solve(vector<int>& nums, int i, int curr, int target){
//         if(i==nums.size()){
//             if(curr==target)
//                 res++;
//             return ;
//         }
//         else{
//             solve(nums, i+1, curr+nums[i],target);
//             solve(nums, i+1, curr-nums[i],target);
//         }
//     }
//     int findTargetSumWays(vector<int>& nums, int target) {
//         solve(nums, 0,0,target);
//         return res;
//     }
// };

class Solution {
public:
    int findTargetSumWays(vector<int>& nums, int S) {
        vector<unordered_map<int,int>> mem(nums.size());
        return find(0,nums,S,mem);    
    }
    int find(int p, vector<int>& nums, int sum, vector<unordered_map<int,int>>& mem) {
        if(p==nums.size()) return sum==0;
        auto it = mem[p].find(sum);
        if(it != mem[p].end()) return it->second;
        return mem[p][sum]=find(p+1,nums,sum+nums[p],mem)+find(p+1,nums,sum-nums[p],mem);
    }
};
