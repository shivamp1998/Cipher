#include<bits/stdc++.h>
using namespace std;
void dfs(vector<int> adj[],int source,bool visited[],int level[]){
    queue<int> q;
    q.push(source);
    visited[source] = true;
    while(!q.empty()){
        int u = q.front();
        q.pop();
        for(int x:adj[u]){
            visited[x] = true;
            q.push(x);
            level[x] = level[u]+1;
        }
    }
}
int levelOfNodes(vector<int> adj[],int V,int X){
    bool visited[V] = {false};
    int level[V];
    level[0] = 0;
    for(int i=0;i<V;i++){
        if(visited[i]==false){
            dfs(adj,i,visited,level);
        }
    }
    return level[X];
}
int main(){
    
}