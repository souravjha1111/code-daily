#include<iostream>
using namespace std;

int power(int x,int n){
    if(n==0)
        return 1;
    int res = x*power(x,n-1);
        return res;
}
int main(){
    int n,x; 
    cout<<"daal number";
    cin>>x>>n;
    cout<<power(x,n);
}
