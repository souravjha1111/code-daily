#include <iostream>
using namespace std;
#include <algorithm>
int max(int arr[], int idx, int n){
        if(idx == n-1)
            return arr[idx];
        int misa = max(arr, idx+1 ,n);
        if(misa > arr[idx])
            return misa;    
        else 
            return arr[idx];
}
int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int p = max(arr, 0, n);
    cout << p << endl;
}
