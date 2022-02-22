// class Solution {
// public:
//     int nthUglyNumber(int n) {
//         int res =0;
//         if(n==1)
//             return 1;
//         map<int, bool> mp;
//         mp[2] = true;
//         mp[1] = true;
//         mp[3] = true;
//         mp[5] = true;
//         int i =0;
//         while(n>-1){
//             if(mp.find(i)!=mp.end()){
//                 n--;
//             }
//             else if(mp.find(i/2)!=mp.end()){
//                 mp[i] = true;
//                 n--;
//             }
//             else if(mp.find(i/5)!=mp.end()){
//                 mp[i] = true;
//                 n--;
//             }
//             else if(mp.find(i/3)!=mp.end()){
//                 mp[i] = true;
//                 n--;
//             }
//             i++;
//         cout<<n;
//         }
//         return i;
//     }
// };
class Solution {
public:
    int nthUglyNumber(int n) {
        vector<int>dp={1};
        int two=0,three=0,five=0;
        for(int i=0;i<n-1;++i){
          int tmp=min(min(2*dp[two],3*dp[three]),5*dp[five]);
          dp.push_back(tmp);
          if(tmp==dp[two]*2)
            ++two;
          if(tmp==dp[three]*3)
            ++three;
          if(tmp==dp[five]*5)
            ++five;
        }
        return dp.back();
    }
};
