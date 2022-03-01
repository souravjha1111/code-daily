class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int res= 0;
        priority_queue<int, vector<int>, greater<int> > lastseen;
        int curr =0;
        int i =0;
        for(i=0; i<nums.size(); i++){
            if(nums[i]==1){
                curr++;
                res = max(res, curr);
            }
            else{
                if(k>0){
                    curr ++;
                    res = max(res, curr);
                    lastseen.push(i);
                    k--;
                }
                else{
                    if(lastseen.empty()){
                        curr = 0;
                        res = max(res, curr);
                    }
                    else{
                    curr = i-lastseen.top();
                    lastseen.pop();
                    res = max(res, curr);
                    lastseen.push(i);
                    }
                }
            }
        }
        return res;
    }
};