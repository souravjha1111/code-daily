class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        vector<vector<int>> result;
        priority_queue<pair<int,int>> q;
        for(int i=0; i<points.size(); i++){
            int temp = points[i][0]*points[i][0] + points[i][1]*points[i][1]; 
            q.push({temp,i});
            if(q.size()>k)
                q.pop();
        }
        while(q.size()>0){
            result.push_back(points[q.top().second]);
            q.pop();
        }
        return result;
    }
};