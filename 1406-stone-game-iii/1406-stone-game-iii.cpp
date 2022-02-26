class Solution {
public:
    
    // int solve(vector<int> s, int i){
    //     if(i>=s.size())
    //         return 0;
    //     if(dp[i]!=-1)
    //         return dp[i];
    //     else{
    //         int ans = INT_MIN;
    //         ans = max(ans, s[i]-solve(s,i+1));
    //         if(i+1<s.size())
    //         ans = max(ans, s[i]+ s[i+1]-solve(s,i+2));
    //         if(i+2<s.size())
    //         ans = max(ans, s[i]+s[i+1] + s[i+2]-solve(s,i+3));
    //         dp[i]=ans;
    //         return ans;
    //     }
    // }
    string stoneGameIII(vector<int>& s) {
    
    int n= s.size();
    vector<int> dp(n+1,0);
        int i=n-1;
        while(i>=0){
            int ans = INT_MIN;
            ans = max(ans, s[i]-dp[i+1]);
            if(i+1<s.size())
            ans = max(ans, s[i]+ s[i+1]-dp[i+2]);
            if(i+2<s.size())
            ans = max(ans, s[i]+s[i+1] + s[i+2]-dp[i+3]);
            dp[i]=ans;
            i--;
        }
        
    int alice =dp[0];
    if(alice>0)
        return "Alice";
    else if(alice==0)
        return "Tie";
    else
        return "Bob";
    }
};
