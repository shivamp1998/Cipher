#include<bits/stdc++.h>
using namespace std;
bool dfs(vector<int> adj[],int i,int j,int N){
    if(i<0 || j<0 || i>=N || j>=N || adj[i][j]==0)
    return false;
    if(adj[i][j]==2)
    return true;
    
    adj[i][j] = 1;
    bool a = dfs(adj,i,j+1,N);
    bool b = dfs(adj,i,j-1,N);
    bool c = dfs(adj,i+1,j,N);
    bool d = dfs(adj,i-1,j,N);

    if(a || b || c || d)
    return true;

    return false;
}
bool pathExists(vector<int> adj[]){
    int N  = adj[0].size();
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            if(adj[i][j]==1){
               return dfs(adj,i,j,N);
            }
        }
    }
    return false;
}
int main(){

}