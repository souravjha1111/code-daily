# include <iostream>
using namespace std;
#include<algorithm>
#include<vector>
void floodfill(vector<vector<int>> maze, int row, int column, string path, vector<vector<int>> visited){
    if(row<0 || row>=maze.size() || column <0 ||column>=maze[0].size() || maze[row][column]==1 
        || visited[row][column]==1){
            return;
    }
    if(row==maze.size()-1, column==maze[0].size()-1)
        cout<<path; 
    visited[row][column]=1;
    floodfill(maze,row-1,column,path+"l",visited);
    floodfill(maze,row,column-1,path+"u",visited);
    floodfill(maze,row+1,column,path+"r",visited);
    floodfill(maze,row,column+1,path+"d",visited);
    visited[row][column]=0; 
}
int main()
{
    int n;
    int m;
    vector<vector<int>> maze;
    cin>>n>>m;
    for(int i=0;i<n;i++){
        for(int j=0; j<m;j++){
            int k=0;
            cin>>k;
            maze[i][j]=k;
        }
    }
vector<vector<int>> visited;
string path;
floodfill(maze,n,m,path,visited);
}