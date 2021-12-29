class Solution {
public:
    void findperm(vector<int>& nums,int idx, vector<vector<int>> &ans){
        if(idx==nums.size()-1){
            ans.push_back(nums);
            return;
    }
        for(int i=idx;i<nums.size();i++){
            swap(nums[idx],nums[i]);
            findperm(nums,idx+1,ans);   // fixing numbers
            swap(nums[idx],nums[i]);     // tracking back
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        findperm(nums,0,ans);
        return ans;
    }
};
