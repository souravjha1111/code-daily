class Solution {
public:
    string reorganizeString(string s) {
        unordered_map<char, int> mp;
        priority_queue<pair<int, char>> pq;
        for(auto el: s){
            mp[el]++;
        }
        for(auto el: mp)
            pq.push({el.second, el.first});
        string res ="";
        while(!pq.empty()){
            int timer =0;
            vector<pair<int, char>> temp;
            for(int i=0; i<=1; i++){
                if(!pq.empty()){
                    timer++;
                    temp.push_back({pq.top().first-1,pq.top().second} );
                    res+=pq.top().second;
                    pq.pop();
                }
            }
            for(auto el:temp)
                if(el.first)
                    pq.push(el);
        }
        for(int i=1; i<res.size(); i++){
            if(res[i]==res[i-1])
                return "";
        }
        return res;
    }
};