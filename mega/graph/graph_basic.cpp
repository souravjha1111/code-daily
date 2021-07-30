#include <iostream>
#include<string>
#include<vector>
using namespace std;
#include<queue>

vector<int>bfsofgraph(int v, vector<int> graph[]){
    vector<int> visited(v+1,0);
    vector<int> bfs;
    for(int i=1; i<=v;i++){
        if(!visited[i]){
            queue<int> q;
            q.push(i);
            visited[i]=1;
            while(!q.empty()){
                int node = q.front();
                q.pop();
                bfs.push_back(node);
                cout<<node<<endl;
                for(auto it: graph[node]){
                        if(!visited[it]){
                            q.push(it);
                            visited[it]=1;
                        }
                }
            }
        }
    }
return bfs;
}


void addEdge(vector<int> adj[], int u, int v){
    adj[u].push_back(v);
    adj[v].push_back(u);
    }
int main() {
    int n, m;
    cout<<"enter n and m"<<endl;
    cin>>n>>m;
    vector<int> adj[n+1];
    cout<<"enter u and v one by one"<<endl;
    for(int index=0; index<m; index++){
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    vector<int> graph_bfs = bfsofgraph(n, adj); 
    return 0; 
}

