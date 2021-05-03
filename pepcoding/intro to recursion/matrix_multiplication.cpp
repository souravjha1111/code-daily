#include<iostream>  
using namespace std; 

int main(){
    cout<<"enter1"<<endl;
    //m=row,n=column
    int m,n;
    cin>>m;
    cin>>n;
    int* A =new int[m*n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>*(A+i*n+j);
        }
    }
    cout<<"enter2"<<endl;
    int m2,n2;
    cin>>m2;
    cin>>n2;
    int* B =new int[m2*n2];
    for(int i=0;i<m2;i++){
        for(int j=0;j<n2;j++){
            cin>>*(B+i*n2+j);
        }
    }
    if(m2!=n)
        cout<<"invalid"<<endl;
    else
    for(int i=0;i<m;i++){
        cout<<endl;
        for(int j=0;j<n2;j++){
            cout<<*(B+i*n2+j)**(B+i*n2+j);
        }
    }
}