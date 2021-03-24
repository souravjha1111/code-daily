#include <iostream>
using namespace std;
#include <algorithm>
int maxi(int arr[], int idx, int n)
{
    // if n = 0 means whole array has been traversed
    if (!n)
        return arr[0];
    return max(arr[n-1], maxi(arr, n-1,n));
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
