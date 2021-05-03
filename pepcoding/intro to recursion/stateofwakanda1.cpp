#include<iostream>  
using namespace std; 
int main(){
  int n,m;
  cout<<"enter\n"; 
  cin>>n>>m;
  int matrix[n][m];
  cout<<"enter elements\n";
  for(int i=0;i<n;i++) {
      for(int j=0;j<m;j++)
         cin>>matrix[i][j];
  }
  int min_r = 0;
  int max_r = n;
  int temp_c = 0;
  while(temp_c<m){
      for(int i=0; i<n && temp_c<m; i++)
        cout<<matrix[i][temp_c];
        temp_c++;
      for(int i=n-1; i>=0 && temp_c<m; i--)
        cout<<matrix[i][temp_c];
        temp_c++;
  }

}