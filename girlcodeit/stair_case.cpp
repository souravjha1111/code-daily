#include<iostream>
#include<vector>
using namespace std;
int stair(int n)
{if(n==0)
    return 1;
if(n==1 || n==2 )
    return n;
return stair(n-1)+stair(n-2)+stair(n-3); 

}int main(){
    int n;
    cin>>n;
    cout<<stair(n);
}