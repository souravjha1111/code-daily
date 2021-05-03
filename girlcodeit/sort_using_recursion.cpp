#include <iostream>
#include<algorithm>
#include<vector>
using namespace std;
#include<string> 
void sort_arr(vector<int> &array, int n){
    if(n==0)
        return;
    sort_arr(array, n= n-1);
    for(int i=0;i<n;i++){
        if(array[i]>array[n]){
            array.insert(array.begin()+i,array[n]);
            array.erase(array.begin() + n-1);
        }
    }
}
int main(){
    vector<int> array={5,16,7,8,0,15};
    int n =array.size()-1;
    sort_arr(array,n);
    cout<<array[2];
}


