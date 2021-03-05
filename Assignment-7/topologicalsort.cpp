#include<bits/stdc++.h>
using namespace std;
void addEdge(vector<int> adj[],int u,int v,vector<int> indegree){
    adj[u].push_back(v);
    indegree[v]++;
}
vector<int> topologicalSort(vector<int> adj[],int V,vector<int> indegree){
    queue<int> q;
    vector<int> sorted;
    for(int i=0;i<indegree.size();i++){
        if(indegree[i]==0)
        q.push(indegree[i]);
    }
    while(!q.empty()){
        int u = q.front();
        sorted.push_back(u);
        for(int x:adj[u]){
            indegree[x]--;
            if(indegree[x]==0)
                q.push(x);
        }
    }
    return sorted;
}
int main(){
    int V;cin>>V;
    vector<int> indegree(V);
    vector<int> adj[V];
    for(int i=0;i<V;i++){
        int x,y;cin>>x>>y;
        addEdge(adj,x,y,indegree);
    }
    vector<int> topological = topologicalSort(adj,V,indegree);
    for(int x:topological)
    cout<<x<<" ";
    cout<<"\n";
    
}