#include<iostream>
using namespace std;

int firstIndex(int arr[], int idx, int x, int n){
    if(idx == n )
        return idx;
    int result = firstIndex(arr, idx+1 , x , n);
    if(x == arr[idx]){
        result = idx;
        return idx;
        }
    else
        return result;
}
int main()
{
    int n;
    cin >> n;
    int d;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cin >> d;
    int p = firstIndex(arr, 0, d, n);
    cout << p << endl;
}