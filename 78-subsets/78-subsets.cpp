class Solution 
{
public:
    void solve(vector<int>& nums,vector<vector<int>>&result,vector<int>temp,int index)
    {
        if(index==nums.size())
        {
            result.push_back(temp);
            return;
        }
        temp.push_back(nums[index]);
        solve(nums,result,temp,index+1);
        temp.pop_back();
        solve(nums,result,temp,index+1);
    }
    vector<vector<int>> subsets(vector<int>& nums) 
    {
        if(nums.empty())
        {
            return {};
        }
        vector<vector<int>>result;
        solve(nums,result,{},0);
        return result;
    }
};