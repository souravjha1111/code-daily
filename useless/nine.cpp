#include <iostream>
using namespace std;
int Nine(int nums[10]){
int len = sizeof(nums)/sizeof(nums[0]);
for(int i=0;i<len;i++){
        for(int j=i+1;j<=len;j++){
            if(nums[i]+nums[j]==9)
                cout<<i<<" "<<j;
            }
        }
        return 0;
    }
    int main()
    {
        int nums[10] ={1,2,3,4,5,6,7,8,9,10}; 
        nums[2];
        //Nine(nums);
    }