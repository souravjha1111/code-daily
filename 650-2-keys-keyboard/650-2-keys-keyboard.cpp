class Solution {
public:
    bool is_prime(int n){
    bool flag = true;
    if (n == 0 || n == 1) {
        flag = false;
    }
  for (int i = 2; i <= n/2; ++i) {
    if (n % i == 0) {
      flag = false;
      break;
    }
  }
return flag;
}
    
    
//     int maxPrimeFactors(int n){
//         long long maxPrime = -1;
//     while (n % 2 == 0) {
//         maxPrime = 2;
//         n >>= 1; 
//     }
//         while (n % 3 == 0) {
//         maxPrime = 3;
//         n=n/3;
//     }
//     for (int i = 5; i <= sqrt(n); i += 6) {
//         while (n % i == 0) {
//             maxPrime = i;
//             n = n / i;
//         }
//       while (n % (i+2) == 0) {
//             maxPrime = i+2;
//             n = n / (i+2);
//         }
//     }
//      if (n > 4)
//         maxPrime = n;
 
//     return maxPrime;
// }
 
    
    int maxfactor(int n){
    int res = INT_MIN;
  for(int i=1;i<n;++i)
  {
      if(n%i==0)
         res = max(res, i);
  }  
  return res;
}
    
    
    int minSteps(int n) {
     vector<int> dp(n+2);
        dp[0]=0;
        dp[1]=0;
        dp[2]=2;
        for(int i=3; i<=n;i++){
            if(i%2==0)
                dp[i] = dp[i/2] +2;
            else{
                if(is_prime(i)){
                    dp[i]=i;
                    cout<<"yes"<<i<<" ";
                }
                else{
                    int maxprime = maxfactor(i);
                    dp[i] = i/maxprime + dp[maxprime];
                }
            }
        }
        return dp[n];
    }
};