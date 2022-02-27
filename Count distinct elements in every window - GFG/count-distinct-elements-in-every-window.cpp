// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



 // } Driver Code Ends

class Solution{
  public:
    vector <int> countDistinct (int a[], int n, int k)
    {
        vector<int> res;
        int count=0;
        unordered_map<int, int> mp;
        for(int i=0; i<k; i++){
            if(mp.find(a[i])==mp.end())
                count++;
            mp[a[i]]++;
        }
        res.push_back(count);
        for(int j=k, i=1; j<n;j++, i++){
            mp[a[i-1]]--;
            if(mp[a[i-1]]==0){
                mp.erase(a[i-1]);
                count--;
            }
            if(mp.find(a[j])==mp.end()){
                count++;
                mp[a[j]]++;
            }
            else{
                mp[a[j]]++;
            }
        res.push_back(count);
            
        }
        return res;
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int n, k;
        cin >> n >> k;
        int a[n];
        for (int i = 0; i < n; i++) 
        	cin >> a[i];
        Solution obj;
        vector <int> result = obj.countDistinct(a, n, k);
        for (int i : result) 
        	cout << i << " ";
        cout << endl;
    }
    return 0;
}  // } Driver Code Ends