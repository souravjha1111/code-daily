#include<iostream>  
using namespace std; 
int main(){
  int r,c;
  cout<<"enter\n"; 
  cin>>r>>c;
  int matrix[r][c];
  cout<<"enter elements\n";
  for(int i=0;i<r;i++) {
      for(int j=0;j<c;j++)
         cin>>matrix[i][j];
  }
  for(int i=0; i<r; i++){
      for(int j = i,row = 0;j<c;j++,row++){
          cout<<matrix[row][j]<<" ";
      }
  }
}