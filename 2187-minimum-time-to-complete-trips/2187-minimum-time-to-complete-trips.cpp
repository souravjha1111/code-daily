class Solution {
public:
    long long minimumTime(vector<int>& time, int total) {
        long long left =0, right = 100000000000000;
        long long mid =0;
        long long ans = right;
        while(left<right){
            mid = left + (right-left)/2;
            long long temp=0;
            for(int i=0; i<time.size(); i++){
                temp+=mid/time[i];
            }
            if(temp>=total)
            {
                right = mid;
                ans  = min(ans, mid);
            }                
            else
                left = mid+1;
        }
        return ans;
    }
};