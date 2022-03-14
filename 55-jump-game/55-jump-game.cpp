class Solution {
public:
    bool canJump(vector<int>& nums) {
        bool res = true;
        int size =nums.size();
        if(size==1)
            return true;
        int mustreach = size-1;
        for(int i=size-2;0<=i; i--){
            if(mustreach> i + nums[i]){
                res = false;
        }
            else
            {
                                mustreach =i;
res = true;
            }                
        }
        return res;
    }
};