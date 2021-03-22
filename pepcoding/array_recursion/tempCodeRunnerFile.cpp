#include <iostream>
using namespace std;
#include <algorithm>
int maxi(int arr[], int idx, int n){
        if(idx = n)
            return arr[idx];
        int misa = max(arr, idx+1);
        if(misa>arr[idx])
            return arr[idx];
        else 
            return misa;    
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int p = maxi(arr, 0, n);
    cout << p << endl;
}
