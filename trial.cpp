#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<int> nums ={0,1,0,0,0,0,2,0,5,0,11};
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
            nums.erase(nums.begin()+i);
            nums.push_back(0);
            }
        }
        for(int value : nums){
            cout<<value<<",";
        } }
