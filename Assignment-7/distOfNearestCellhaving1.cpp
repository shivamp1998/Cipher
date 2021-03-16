#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> nearest(vector<vector<int>> grid){
    int row = grid.size();
    int col = grid[0].size();
    vector<vector<int>> dist(row,vector<int> (col,INT_MAX));
    queue<pair<int,int>> q; 
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(grid[i][j] == 1){
                q.push({i,j});
                dist[i][j] = 0;
            }
        }
    }
    int xDist[] = {1,-1,0,0};
    int yDist[] = {0,0,1,-1};
    while(!q.empty()){
        pair<int,int> u = q.front();
        int i = u.first;
        int j = u.second;
        for(int k=0;k<4;k++){
            int x = i + xDist[k];
            int y = j + yDist[k];
            if( x >= 0 && x < row && y >= 0 && y < col && dist[x][y] > dist[i][j]+1){
                dist[x][y] = dist[i][j]+1;
            }
        }
        return dist;
    }
}
int main(){
    
}