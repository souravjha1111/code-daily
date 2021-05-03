#include <iostream>
#include<algorithm>
#include<vector>
using namespace std;
void floodfill(vector<vector<int>>&maze, int i, int j, string path, vector<vector<int>>&visited,int n,int m){
    if(i==n-1 && j==m-1){
        cout<<path; 
        return;
    }
    if(i<0 || i>=maze.size() || j <0 ||j>=maze[0].size() 
        || visited[i][j]==1){
            return;
    }        
    visited[i][j]=1;
    if(i-1>=0 && maze[i-1][j]==0){
         floodfill(maze,i-1,j,path+"u",visited,n,m); 
    }      
    if(j-1>=0 && maze[i][j-1]==0){
       floodfill(maze,i,j-1,path+"l",visited,n,m);
    }
    if(i+1<n && maze[i+1][j]==0){
         floodfill(maze,i+1,j,path+"d",visited,n,m); 
    }
    if(j+1<m && maze[i][j+1]==0){
       floodfill(maze,i,j+1,path+"r",visited,n,m); 
    }
    visited[i][j]=0; 
}
int main()
{
    int n;
    int m;cin>>n>>m;
    vector<vector<int>> maze(n,vector<int>(m,0));    
    for(int i=0;i<n;i++){
        for(int j=0; j<m;j++){
            int k=0;
            cin>>k;
            maze[i][j]=k;
        }
    }
vector<vector<int>>visited(n,vector<int>(m,0));
floodfill(maze,0,0,"",visited,n,m);
return 0;
}