using namespace std;
#include<iostream>
#include<vector>
using namespace std;
void subsetSums(int arr[], int l, int r, int sum=0)
{    if (l > r) {
        cout << sum << " ";
        return;}
     // Subset including arr[l]
    subsetSums(arr, l+1, r, sum+arr[l]);
     // Subset excluding arr[l]
    subsetSums(arr, l+1, r, sum);
}
// Driver code
int main()
{
    int arr[] = {1,2,4,7};
       int n = sizeof(arr)/sizeof(arr[0]);
    subsetSums(arr, 0, n-1);
    return 0;
}