class Solution {
public:
    string stoneGameIII(vector<int>& s) {
    int n= s.size();
    int one=0,two=0,three=0;
        int i=n-1;
        while(i>=0){
            int ans = INT_MIN;
            ans = max(ans, s[i]-one);
            if(i+1<s.size())
            ans = max(ans, s[i]+ s[i+1]-two);
            if(i+2<s.size())
            ans = max(ans, s[i]+s[i+1] + s[i+2]-three);
            three = two;
            two  =one;
            one= ans;
            i--;
        }
    int alice =one;
    if(alice>0)
        return "Alice";
    else if(alice==0)
        return "Tie";
    else
        return "Bob";
    }
};
