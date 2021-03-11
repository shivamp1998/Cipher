 #include<bits/stdc++.h>
 using namespace std;
 int spanningTree(int V, vector<vector<int>> adj[]) {
       bool vis[V] = {false};
       int cost[V];
       for(int i=0;i<V;i++)
       cost[i] = INT_MAX;
       cost[0] = 0;
       int res = 0;
       for(int j=0;j<V;j++){
           int u = 0,m=INT_MAX;
           for(int i=0;i<V;i++){
                if(vis[i]==false){
                  if(cost[i] < m)
                  {
                      m = cost[i];
                      u = i;
                  }
               }
           }
       res+=cost[u];
       vis[u] = true;
       for(int i=0;i<adj[u].size();i++){
           if(adj[u][i][1]!=0 && vis[adj[u][i][0]]==false){
               cost[adj[u][i][0]] = min(cost[adj[u][i][0]],adj[u][i][1]);
           }
       }
      }
       return res;
    }

    int main(){
        
    }