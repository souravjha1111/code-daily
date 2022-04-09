class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) 
    {
        vector<int> result;
        unordered_map<int, int> umap;
        for(auto el:nums)
            umap[el]++;
        priority_queue <pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>> > q;
        unordered_map<int, int>::iterator it;
        for(it = umap.begin(); it!=umap.end(); it++){
            q.push({it->second, it->first});
            if(q.size()>k)
                q.pop();
        }
        while(q.size()>0)
        {
            result.push_back(q.top().second);
            q.pop();
        }
        return result;
            
    }
};