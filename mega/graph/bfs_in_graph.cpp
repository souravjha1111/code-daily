#include <iostream>
#include<string>
#include<vector>
#include<queue>
using namespace std;

///////////////// DFS ///////////
void DFSR(vector<int> adj[], int s, bool visited[]){
    visited[s] = true;
    cout<<s<<" ";
    for(int v: adj[s]){
        if(visited[v]==false){
            DFSR(adj, v, visited);
        }
    }
}


void DFS(vector<int> adj[], int v, int s){
    bool visited[v];
    for(int i=0; i<v; i++){
        visited[i]= false;}
    DFSR(adj, 0,visited);
}

//BFS

void BFS(vector<int> adj[], int v, int s){
    bool visited[v+1];
    for(int i=0; i<v; i++){
        visited[i]= false;}
        queue<int> q;
        visited[s] = true;
        q.push(s);
        while(q.empty()==false){
            int u = q.front();
            q.pop();
            cout<<u<<" ";
            for(int v: adj[u]){
                if(visited[v]==false){
                    visited[v]==true;
                    q.push(v);
                }
            }
        }
    }

void addEdge(vector<int> adj[], int u, int v){
    adj[u].push_back(v);
    adj[v].push_back(u);
    }



void shortestPath(vector<int> adj[], int s, int v){
    vector<int> dist(v,0);
    bool visited[v+1];
    for(int i=0; i<v; i++){
        visited[i]= false;
        }
        queue<int> q;
        visited[s] = true;
        q.push(s);
    while(q.empty()==false){
        int u = q.front();
        q.pop();
        for(int v: adj[u]){
            if(visited[v]==false){
                dist[v] = dist[u]+1;
                visited[v]==true;
                q.push(v);
            }
        }        
    }
    for(int x: dist){
        cout<<x<<" ";
    }
}
int main() {
int v = 4;
vector<int> adj[8];
addEdge(adj,0,1);
addEdge(adj,0,2);
addEdge(adj,1,2);
addEdge(adj,1,3);
cout<<adj[0][1];
cout<<endl;
DFS(adj,6,0);
cout<<endl;
shortestPath(adj, 6,0);
}

