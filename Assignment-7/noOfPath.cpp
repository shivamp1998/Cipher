#include<bits/stdc++.h>
using namespace std;
void dfs(vector<int> adj[],int V,int source,int destination,bool visited[],int &count){
    if(source == destination)
    count++;
    else{
        visited[source] = true;
        for(int x:adj[source]){
            if(!visited[x]){
                dfs(adj,V,x,destination,visited,count);
                visited[x] = false;
            }
        }
    }
}
int noOfPath(vector<int> adj[],int V,int source,int destination){
    bool visited[V] = {false};
    int count = 0;
    dfs(adj,V,source,destination,visited,count);
    return count;
}
int main(){
    
}