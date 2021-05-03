#include<iostream>
#include<vector>
using namespace std;
int remove_n(int n)
{   if(n<1)
        return 0;
    if(n==1)
        return 1;
return remove_n(n-1)+remove_n(n/2)+remove_n(n/3); 

}int main(){
    int n;
    cin>>n;
    cout<<remove_n(n);
}   

