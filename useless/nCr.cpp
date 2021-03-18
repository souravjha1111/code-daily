#include<iostream>  
using namespace std; 
int fact(int num){
    if (num==0)
    return 1;
    return fact(num-1)*num;
}
int ncr(int n,int r){
    if(r==0)
    return 1;
    return fact(n)/((fact(r) )*(fact(n-r)));
}

int main(){
cout<<ncr(5,3)   ; 
}



