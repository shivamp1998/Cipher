#include<bits/stdc++.h>
using namespace std;
int n,m;
int minTime(vector<vector<int>> grid){
    n = grid.size();
    m = grid[0].size();
    vector<vector<int>> dist(n,vector<int> (m,INT_MAX));
    queue<pair<int,int>> q;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(grid[i][j] == 2){
                q.push({i,j});
                dist[i][j] = 0;
            }
            if(grid[i][j]==0)
            dist[i][j]=0;
        }
    }
    while(!q.empty()){
        pair<int,int> u;
        u = q.front();
        int x = u.first;
        int y = u.second;
        int newX[] = {0,-1,0,1};
        int newY[] = {-1,0,1,0};
        q.pop();
        for(int k=0;k<4;k++){
            int i = x+newX[k];
            int j = y+newY[k];
            if(i<n && j<m && i>=0 && j>=0){
                if(grid[i][j]==1){
                    dist[i][j] = min(dist[i][j],dist[x][y]+1);
                    q.push({i,j});
                }
            }
        }
    }
    int maximum = 0;
    for(int i=0;i<n;i++){
        for(int j=0; j<n ; j++){
            maximum = max(maximum , grid[i][j]); 
        }
    }
    return maximum;
}
int main(){

}