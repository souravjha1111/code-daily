class Solution {
public:
    int numPairsDivisibleBy60(vector<int>& time) {
        int result=0;
        map<int, int> mp;
        for(int i=time.size() -1; i>=0; i--){
            int val = time[i];
            int need = 60 - (val%60);
            if(need ==60)
                need =0;
            int available = val%60;
            result += mp[need];
            mp[available]++;
        }
        return result;
    }
};