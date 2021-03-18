#include <iostream>
using namespace std;
int main() {
int arr[10] = {0,5,2,8,4,1,9,7,3,6};
int arrSize = sizeof(arr)/sizeof(arr[0]);
int i = 1;
int x = 0;
while (x < arrSize){
    while (i < arrSize){
        while (arr[i]<arr[i-1]){
               int temp = arr[1];
                arr[1] = arr[i-1];
                arr[i-1] = temp;
            }
            i=i+1;
        }
        x= x+1;
        i=1;
    }
    cout<<arr;   
}