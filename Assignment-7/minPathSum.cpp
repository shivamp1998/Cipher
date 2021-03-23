#include<bits/stdc++.h>
using namespace std;
#define pii pair<int,pair<int,int>> 
int minSum(vector<vector<int>> &grid){
    int n = grid.size();
    vector<vector<int>> cost(n,vector<int>(n,INT_MAX));
    vector<vector<bool>> visited(n,vector<bool>(n,false));
    priority_queue<pii,vector<pii>,greater<pii>> q;
    cost[0][0] =grid[0][0];
    q.push({grid[0][0],{0,0}});
    while(!q.empty()){
        pii u = q.top();
        q.pop();
        int i = u.second.first;
        int j = u.second.second;
        int xVect[] = {-1,0,1,0};
        int yVect[] = {0,-1,0,1};
        for(int k=0;k<4;k++){
            int x = i+xVect[k];
            int y = j+yVect[k];
            if(x>=0 && y>=0 && x<n && y<n){
                if(visited[x][y]==false){
                    if(cost[x][y] > cost[i][j]+grid[x][y]){
                        cost[x][y] = cost[i][j]+grid[x][y];
                        visited[x][y] = true;
                    }
                }
            }
        }
        return cost[n-1][n-1];
    }

}
int main(){

}