#include<iostream>
using namespace std;
int factorial(int n){
   int x=1;
   {if(n==1)
        return 1;}
    x = n*factorial(n-1);
   return x;
}
int main(){
    int n; cin>>n;
    cout<<factorial(n);
}
