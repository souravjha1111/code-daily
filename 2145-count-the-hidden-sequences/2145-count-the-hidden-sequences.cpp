// class Solution {
// public:
//     int numberOfArrays(vector<int>& differences, int lower, int upper) {
//         int curr_max = differences[0];
//         int curr_min=differences[0];
//         vector<int> res;
//         res.push_back(0);
//             for(int i=1; i<differences.size(); i++){
//                 res.push_back(res[i-1] + differences[i]);
//             }     
//             for(int i=1; i<res.size(); i++){
//                 curr_max = max(curr_max, res[i]);
//                 curr_min = min(curr_min, res[i]);
//             }   
//             int maxi = upper - curr_max;
//             int mini = curr_min - lower;
//             int r = maxi +mini+1;
//             return max(0, r);

//     }
// };
class Solution {
public:
    int numberOfArrays(vector<int>& A, int lower, int upper) {
        long sum = 0, mn = 0, mx = 0;
        for (int n : A) {
            sum += n;
            mn = min(mn, sum);
            mx = max(mx, sum);
        }
        return max(0L, mn - mx + upper - lower + 1);
    }
};