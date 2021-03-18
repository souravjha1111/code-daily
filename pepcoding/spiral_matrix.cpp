#include<iostream>  
using namespace std; 
int main(){
    int array[5][5]={
        {1, 2, 3, 4, 5},
        {6, 7, 8, 9, 10},
        {11,12,13,14,15},
        {15,16,17,18,19},
        {21,22,23,24,25}
    };
    int minr = 0,minc= 0;
    int maxr = 4;
    int maxc = 4;
    int count = 0;
    int total = 5*5;
    while(count<5*5){
        for(int i=minr,j=minc;i<=maxr&&count<5*5;i++){
            cout<<array[i][j]<<endl;
            count++;
        }
        minc++;
        for(int i=maxr,j=minc;i<=maxc&&count<5*5;j++){
            cout<<array[i][j]<<endl;
            count++;
        }
        maxr--;

        for(int i=maxr,j=maxc;i<=minr&&count<5*5;i--){
            cout<<array[i][j]<<endl;
            count++;
        }
        maxc--;
        for(int i=minr,j=maxc;j<=minc&&count<5*5;j--){
            cout<<array[i][j]<<endl;
            count++;
        }
        minr++;
    }
    return 0;
}