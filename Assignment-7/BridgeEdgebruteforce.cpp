#include<bits/stdc++.h>
using namespace std;
void dfs(int u,vector<int> adj[],bool visited[]){
    visited[u] = true;
    for(int x:adj[u]){
        if(visited[x]==false){
          dfs(x,adj,visited);  
        }
    }
}
bool isBridge(vector<int> adj[],int V,int u,int v){
    bool visited[V] = {false};
    int before = 0;
    for(int i=0;i<V;i++){
        if(visited[i]==false){
            dfs(i,adj,visited);
            before++;
        }
    }
    for(int i=0;i<adj[u].size();i++){
        if(adj[u][i] == v){
            adj[u].erase(adj[u].begin()+i);
        }
    }
    for(int i=0;i<adj[v].size();i++){
        if(adj[v][i] == u){
            adj[v].erase(adj[v].begin()+i);
        }
    }
    int after = 0;
    memset(visited,false,sizeof(visited));
    for(int i=0;i<V;i++){
        if(visited[i]==false){
            after++;
            dfs(i,adj,visited);
        }
    }
}
int main(){

}