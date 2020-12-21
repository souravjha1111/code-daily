#include <algorithm>
#include <iostream>
#include<algorithm>
#include<vector>
#include <string>

#include <iostream>
using namespace std;
#include <vector> 
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> print;
        vector<int> print_main;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==target){
                print.push_back(i);
                if(nums[i+1]!=nums[i])
                    i=nums.size();
            }
            
    }
        print_main.push_back(print[0]);
        print_main.push_back(print[print.size()-1]);
        return print_main;
    }

int main() {
    vector<int> nums = {5,7,7,8,8,10};
cout<<searchRange(nums,8);
}

