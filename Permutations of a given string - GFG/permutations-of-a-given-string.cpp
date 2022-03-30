// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
	public:
	
	void solve(string s, vector<string>& res, int left, int right){
	    if(left==right){
	        res.push_back(s);
	        return;
	    }
    else {
    for(int i=left; i<=right; i++){
	        swap(s[left], s[i]);
	        solve(s, res, left+1, right);
	        swap(s[left], s[i]);
	    }
}	}
	
	
		vector<string>find_permutation(string s)
		{
		    vector<string> res = {};
		    int temp = s.length()-1;
		    solve(s, res, 0, temp );
		    sort(res.begin(), res.end());
		    return res;
		}
};



// { Driver Code Starts.
int main(){
    int t;
    cin >> t;
    while(t--)
    {
	    string S;
	    cin >> S;
	    Solution ob;
	    vector<string> ans = ob.find_permutation(S);
	    for(auto i: ans)
	    {
	    	cout<<i<<" ";
	    }
	    cout<<"\n";
    }
	return 0;
}
  // } Driver Code Ends