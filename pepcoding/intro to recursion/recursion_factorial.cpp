#include<iostream>  
using namespace std; 

int factorial(int n){
    int result =1;
    if(n>1)
        return result = n*factorial(n-1);
    else 
        return 1;

}
int main(){
int n;
cin>>n;
cout<<factorial(n);
}