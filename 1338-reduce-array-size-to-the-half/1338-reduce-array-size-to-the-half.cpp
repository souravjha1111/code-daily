class Solution {
public:
    int minSetSize(vector<int>& arr) {
        if(arr.size()==2)
            return 1;
        unordered_map<int, int> mp;
        for(auto el:arr)
            mp[el]++;
        priority_queue<int> pq;
        for(auto el:mp){
            pq.push(el.second);
        }
        int counter=0;
        int curr =arr.size();
        int size =arr.size();
        while(!pq.empty()){
            curr = curr-pq.top();
            pq.pop();
            counter++;
            if(curr<=size/2)
                return counter;
        }
        return counter;
    }
};