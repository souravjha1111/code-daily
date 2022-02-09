class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        int cnt=0;
        map<int,int>mp;
        for(auto el:nums){
            mp[el]++;
        }
        if(k==0){
            for(auto el:mp){
                if(el.second>1) cnt++;
                }
        return cnt;
        }
        for(auto el:mp){
            if(mp.find(el.first+k)!=mp.end() ){
                cnt++;
            }
        }
        return cnt;
    }
}; 
