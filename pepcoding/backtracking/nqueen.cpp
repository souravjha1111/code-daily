#include <iostream>
#include<algorithm>
#include<vector>
using namespace std;
#include<string> 

bool itissafe( vector<vector<int>> &chess, int row, int col ){
    for(int i=row-1,  j=col; i>=0;i--){
        if(chess[i][j]==1)
            return false;
    }
    for(int i=row-1, j=col - 1; i>=0 && j>=0;i--,j--){
        if(chess[i][j]==1)
            return false;
    }
    for(int i=row-1, j=col + 1; i>=0 && j<chess.size();i--,j++){
        if(chess[i][j]==1)
            return false;
    }
        return true;

}
void printqueen(vector<vector<int>> &chess, string str, int row){
    if(row==chess.size()){
        cout<<str<<"."<<endl;
        return;
    }
    for(int col=0; col<chess.size(); col++){
        if(itissafe(chess, row, col)==true){
            chess[row][col]=1;
            printqueen(chess, str + to_string(row) + "-"+ to_string(col) + ",", row+1);
            chess[row][col]=0;
            
        }
    }
}
int main(){
    int n;
    cin>>n;
    vector<vector<int>> chess(n,vector<int>(n,0));    
    printqueen(chess ,"", 0);

}