class Solution {
public:
    int twoCitySchedCost(vector<vector<int>>& costs) {
        int size = costs.size();
        priority_queue<pair<int, int>> pq;
        for(int i=0; i<size; i++){
            pq.push({costs[i][0] - costs[i][1], i});
        }
        int res =0;
        int x=size;
        bool toggle = true;
        while(x--){
            if(toggle)
            res+=abs(costs[pq.top().second][1]);
            else
            res+=abs(costs[pq.top().second][0]);
            if(x<=size/2)
                toggle = false;
            pq.pop();
        }
      return res;
    }
};