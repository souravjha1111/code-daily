#include<iostream>  
using namespace std; 
int main(){
  int n,m;

  cin>>n>>m;
  int matrix[n][m];
 
  for(int i=0;i<n;i++) {
      for(int j=0;j<m;j++)
         cin>>matrix[i][j];
  }
  int rotated_matrix[m][n];
  for(int i=0,j=m-1;i<n && j>=0;i++,j--){
      for(int k =0;k<n;k++){
          rotated_matrix[k][j] =matrix[i][k]; 
      }
  }
    for(int i=0;i<n;i++) {
      cout<<endl;
      for(int j=0;j<m;j++)
         cout<<rotated_matrix[i][j]<<" ";
  }
}
