#include<bits/stdc++.h>
using namespace std;
void addEdge(vector<int> adj[],int u,int v){
    adj[u].push_back(v);
    adj[v].push_back(u);
}
void BFS(vector<int> adj[],int V){
    bool visited[V+1] = {false};
    queue<int> q;
    q.push(0);
    visited[0] = false;
    while(!q.empty()){
        int u = q.front();
        q.pop();
        cout<<u<<" ";
        for(int i=0;i<adj[u].size();i++){
            if(visited[adj[u][i]] == false){
                q.push(adj[u][i]);
                visited[adj[u][i]] = true;
            }
        }
    }
}
void printGraph(vector<int> adj[],int V){
    for(int i=0;i<V;i++){
        for(int x:adj[i]){
            cout<<x<<" ";
        }
    }
}
int main(){
    int v = 4;
    vector<int>  adj[v];
    for(int i=0;i<v;i++){
        int x,y;cin>>x>>y;
        addEdge(adj,x,y);
    }
    printGraph(adj,v);
    BFS(adj,v);
}