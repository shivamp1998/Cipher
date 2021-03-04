#include<bits/stdc++.h>
using namespace std;
void addEdge(vector<int> adj[],int u,int v){
    adj[u].push_back(v);
    adj[v].push_back(u);
}
bool DFSrec(vector<int> adj[],int source, bool visited[],int parent){
        visited[source] = true;
        for(int x:adj[source]){
            if(visited[x]==false){
                if(DFSrec(adj,x,visited,source)==true)
                return true;
            }else{
                if(x!=parent)
                return true;
            }
        }
        return false;
}
bool DetectCycle(vector<int> adj[], int V){
    bool visited[V];
    for(int i=0;i<V;i++){
        if(visited[i]==false){
            if(DFSrec(adj,i,visited,-1)==true)
            return true;
            }
    }
    return false;
    
}

int main(){
        int V;cin>>V;
        vector<int> adj[V];
        for(int i=0;i<V;i++){
            int x,y;
            cin>>x>>y;
            addEdge(adj,x,y);
        }
        if(DetectCycle(adj,V)==true)
        cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

}