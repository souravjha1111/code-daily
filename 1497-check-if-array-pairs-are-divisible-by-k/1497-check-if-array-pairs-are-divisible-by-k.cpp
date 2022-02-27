class Solution {
public:
 bool canArrange(vector<int>& arr, int k) {
        
        map<int,int> mp;
        
        for(auto x: arr){
            mp[(x%k + k)%k]++;
        }
        
       
        for(int i=0;i<k;i++){
            
            if(mp[i]!=mp[k-i] and i!=0)
                return false;
            if(i==0){
                if(mp[i]%2!=0)
                    return false;
            }
        }
        
        
        return true;
    }};
