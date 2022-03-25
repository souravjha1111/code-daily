class Solution {
public:
    int twoCitySchedCost(vector<vector<int>>& costs) {
        priority_queue<pair<int, int>> pq;
        for(int i=0; i<costs.size(); i++){
            pq.push({costs[i][0] - costs[i][1], i});
        }
        int res =0;
        int x= costs.size()/2;
        while(x--){
            // if(pq.top().first<=0)
            res+=abs(costs[pq.top().second][1]);
            pq.pop();
        }
        x= costs.size()/2;
        while(x--){
            // if(pq.top().first<=0)
            res+=abs(costs[pq.top().second][0]);
            pq.pop();
        }
        return res;
    }
};