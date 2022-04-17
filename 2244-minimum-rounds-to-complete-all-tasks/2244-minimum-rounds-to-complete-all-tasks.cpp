class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
        priority_queue<pair<int, int>> q;
        unordered_map<int, int> mp;
        for(auto el:tasks){
            mp[el]++;
        }
        for(auto el: mp){
            q.push({el.second, el.first});
        }
        int res =0;
        while(q.size()!=0){
            auto el = q.top();
            if(el.first==1)
                return -1;
            if(el.first %3==0){
                res+= el.first/3;
            }
            else if(el.first%3==2){
                res+=((el.first-2) /3)+1;
            }
            else if(el.first%3==1){
                res+= (el.first/3 -1) +2;
            }
           else if(el.first %2==0){
                res+= el.first/2;
            }
            q.pop();
        }
        return res;
    }
};