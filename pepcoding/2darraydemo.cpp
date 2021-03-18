#include<iostream>  
using namespace std; 
int main(){
    cout<<"enter"<<endl;
    int m,n;
    cin>>m;
    cin>>n;
    int* A =new int[m*n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>*(A+i*n+j);
        }
    }
    for(int i=0;i<m;i++){
        cout<<endl;
        for(int j=0;j<n;j++){
            cout<<*A[i][j]<<"";
        }
    }
}