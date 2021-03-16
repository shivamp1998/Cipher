#include<bits/stdc++.h>
using namespace std;
void dfs(vector<int> adj[],int u,bool visited[]){
    visited[u] = true;
    for(int x:adj[u]){
        if(visited[x]==false){
            dfs(adj,x,visited);
        }
    }
}
int motherVertex(vector<int> adj[],int V){
    bool visited[V] = {false};
    bool flag = true;
    for(int i=0;i<V;i++){
        dfs(adj,i,visited);
        for(int j=0;j<V;j++){
            if(visited[j]==false)
                flag = false;
        }
        if(flag == true)
        return i;
    }
    return -1;
}
int main(){

}