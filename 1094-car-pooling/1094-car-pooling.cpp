class Solution {
public:
    bool carPooling(vector<vector<int>>& trips, int capacity) {
        vector<int> vec(1001,0);
        int maxi = -1;
        for(auto x:trips){
            vec[x[1]]+=x[0];
            vec[x[2]]+=-x[0];
            maxi = max(maxi, x[2]);
        }
        int curr = 0;
        for(int i=0; i<=maxi; i++){
            curr+=vec[i];
            if(curr>capacity )
                return false;
        }
    return true;
    }
    
};  
