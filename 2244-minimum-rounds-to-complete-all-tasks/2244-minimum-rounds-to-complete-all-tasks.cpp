class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
        // priority_queue<pair<int, int>> q;
        unordered_map<int, int> mp;
        for(auto el:tasks){
            mp[el]++;
        }
        // for(auto el: mp){
        //     q.push({el.second, el.first});
        // }
        // mp = {};
        int res =0;
        for(auto el : mp){
            // auto el = q.top();
            if(el.second==1)
                return -1;
            if(el.second %3==0){
                res+= el.second/3;
            }
            else if(el.second%3==2){
                res+=((el.second-2) /3)+1;
            }
            else if(el.second%3==1){
                res+= (el.second/3 -1) +2;
            }
           else if(el.second %2==0){
                res+= el.second/2;
            }
            // q.pop();
        }
        return res;
    }
};