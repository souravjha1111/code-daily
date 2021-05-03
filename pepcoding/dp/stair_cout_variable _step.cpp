#include <iostream>
using namespace std;
#include<vector>
int cs(int n,vector<int> &dp1){
    if(n==0)
        return 1;
    else if(n<0)
    return 0;
    if(dp1[n]>0)
        return dp1[n];
    int result1 = cs(n-1,dp1);
    int result2  = cs(n-2,dp1);
    int result3  = cs(n-3,dp1);
    int result = result1+result2+result3;
    dp1[n]= result;
    return result;
}
int main(){
    int n;
    cin>>n;
    vector<int> dp1(n+1,0);
    cout<<cs(n,dp1)<<endl;
}