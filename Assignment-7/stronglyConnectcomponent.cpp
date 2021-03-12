#include<bits/stdc++.h>
using namespace std;
/*Kosaraju's algorithm*/
void dfs(vector<int> adj[],bool visited[],int u,stack<int> &s){
    visited[u] = true;
    for(int i=0;i<adj[u].size();i++){
        if(visited[adj[u][i]==false]){
            dfs(adj,visited,u,s);
        }
    }
    s.push(u);// Insert Ending time of all the nodes
}
void DFS(vector<int> adj[],bool visited[],int u){
    visited[u] = true;
    for(int i=0;i<adj[u].size();i++){
        if(visited[adj[u][i]] == false)
        {
            DFS(adj,visited,u);
        }
    }
}
int connectedComponent(vector<int> adj[],int V){
    bool visited[V] = {false};
    stack<int> s;
    for(int i=0;i<V;i++){
        if(visited[i] == false){
            dfs(adj,visited,i,s);
        }
    }
    
    
    vector<int> graph[V];
    for(int i=0;i<V;i++){
        for(int x:adj[i]){
            graph[x].push_back(i);
        }
    }
    
    bool vis[V] = {false};
    int count = 0; 
   while(!s.empty()){
        int u = s.top();
        s.pop();
        if(!vis[u]){
            DFS(graph,visited,u);
            count++;
        }
    }
    

    
}
int main(){

}