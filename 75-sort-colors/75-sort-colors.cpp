class Solution {
public:
    void sortColors(vector<int>& arr) {
        int n=arr.size();
        int low = 0, mid = 0, high = n - 1;
    while (mid <= high)
    {
        if (arr[mid] == 0)
            swap(arr[low++], arr[mid++]);
        else if (arr[mid] == 1)
            mid++;
        else if (arr[mid] == 2)
            swap(arr[mid], arr[high--]);
    }
    }
};
