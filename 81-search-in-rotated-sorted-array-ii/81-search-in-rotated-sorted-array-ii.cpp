class Solution {
public:
    bool search(vector<int>& nums, int target) {
        for(int values:nums){
            if(values==target)
                return true;
        }
        return false;
    }
};