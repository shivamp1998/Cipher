#include<bits/stdc++.h>
using namespace std;
vector<int> djkstra(vector<vector<int>>adj[],int V,int s){
    bool visited[V] = {false};
    vector<int> cost(V,INT_MAX);
    cost[s] = 0;
    int idx = 0;
    for(int j=0;j<V;j++){
        int m = INT_MAX;
        for(int i=0;i<V;i++){
            if(!visited[i]){
            if( m > cost[i]){
                m = cost[i];
                idx = i;
                }
            }
        }
        visited[idx] = true;
        for(int i=0;i<adj[idx].size();i++){
            if(adj[idx][i][1]!=0 && visited[adj[idx][i][0]]==false){
                cost[adj[idx][i][0]] = min(cost[adj[idx][i][0]],adj[idx][i][1]);
            }
        }
        return cost;    
    }
}
int main(){

}