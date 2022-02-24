class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        unordered_map<char, int> mp;
        for(auto el: tasks)
            mp[el]++;
        priority_queue<int> q;
        for(auto el: mp){
            q.push(el.second);
        }
        int res=0;
        while(!q.empty()){
            vector<int> temp;
            int timer =0;
            for(int i=0; i<=n; i++){
                if(!q.empty()){
                    temp.push_back(q.top()-1);
                    q.pop();
                    timer++;
                }
            }
            for(auto el:temp){
                if(el)
                    q.push(el);
            }
            if(!q.empty())
                res+=n+1;
            else
                res+=timer;
        }
        return res;
    }
};