#include <iostream>
#include<algorithm>
#include<vector>
using namespace std;
#include<string>  
void target_sum(vector<int> &arr, int idx, string str, int sum, int target){
    if(idx ==arr.size()){
        
        if(target == sum){
            cout<<str<<endl;
        }
            return;
    }
    target_sum(arr, idx+1, str+(to_string(arr[idx]))+" " , sum + arr[idx], target);
    target_sum(arr, idx+1, str, sum , target);
}
int main(){
     int n=0;
     cout<<"started\n";
     cin>>n;
     vector<int> arr(n);
    for(int i=0; i<n;i++){
        int k=0;
        cin>>k;
        arr[i] = k;
    }
    cout<<"enter target\n";
    int target;
    cin>>target;
    string str="";
    int sum=0;
   
    target_sum(arr,0, str,sum, target);
 
    
 }