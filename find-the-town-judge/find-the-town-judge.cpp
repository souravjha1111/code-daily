class Solution {
public:
   int findJudge(int n, vector<vector<int>>& trust) {
        if(n==1)
            return 1;
        vector<int> adj[n+1];
        for(int i=0;i<trust.size();i++)
            adj[trust[i][0]].push_back(trust[i][1]);
        vector<int> indegree(n+1,0);
        vector<int> outdegree(n+1,0);
        for(int i=0;i<n+1;i++)
            for(auto it: adj[i])
            {
                indegree[it]++;
                outdegree[i]++;
            }
        for(int i=0;i<n+1;i++)
            if(indegree[i]==n-1&&outdegree[i]==0)
                return i;
        return -1;
    }
};