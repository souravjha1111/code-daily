class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int, vector<int>,
                                greater<int> > gq; 
        for(int i=0; i<nums.size(); i++){
            gq.push(nums[i]);
            if(gq.size()>k)
                gq.pop();
        }
        return gq.top();
    }
};
