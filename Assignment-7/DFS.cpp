#include<bits/stdc++.h>
using namespace std;
void addEdge(vector<int> adj[],int u,int v){
    adj[u].push_back(v);
    adj[v].push_back(u);
}
void BFSrec(vector<int> adj[],bool visited[],int source){
    visited[source] = true;
    cout<<source<<endl;
    for(int i=0;i<adj[source].size();i++){
        if(visited[i]==false){
            BFSrec(adj,visited,adj[source][i]);
        }
    }
}
void BFS(vector<int> adj[],int V){
    bool visited[V] = {false};
    BFSrec(adj,visited,0);
}
int main(){
    int V;cin>>V;
    vector<int> adj[V];
    for(int i=0;i<V;i++){
        int x,y;cin>>x>>y;
        addEdge(adj,x,y);
    }
    BFS(adj,V);
}