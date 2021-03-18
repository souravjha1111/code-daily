#include<iostream>  
using namespace std; 

int main(){
int coordinates[6][2] = {{1,2},{2,3},{0,4},{4,5},{5,6},{6,7}};
double first_slope = 
((coordinates[1][1]) - (coordinates[0][1]))/((coordinates[1][0])-(coordinates[0][0]));
    cout<<"slope is "<<first_slope<<endl;

for(int i=2;i<6;i++)
{
double slope =((coordinates[i][1]) - (coordinates[i-1][1]))
                                    /
              ((coordinates[i][0])-(coordinates[i-1][0]));

    if(slope==first_slope){
        cout<<"straight line hai"<<endl;}
    else{
        cout<<"nahi hai straight line"<<endl;
        break;}
}
}
