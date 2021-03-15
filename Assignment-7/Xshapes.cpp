#include<bits/stdc++.h>
using namespace std;
int R,C;
void dfs(vector<vector<char>> &grid,vector<vector<bool>> &visited,int i,int j){
    if(i>=R || i>=C || i<0 || j<0 || !visited[i][j])
        return;
    visited[i][j] = true;
    dfs(grid,visited,i-1,j);
    dfs(grid,visited,i+1,j);
    dfs(grid,visited,i,j+1);
    dfs(grid,visited,i,j-1);
}
void xShapes(vector<vector<char>> &grid){
    R = grid.size();
    C = grid[0].size();
    vector<vector<bool>> visited(R,vector<bool>(C,false));
    int count = 0;
    for(int i=0;i<R;i++){
        for(int j=0;j<C;j++){
            if(!visited[i][j] && grid[i][j]=='X'){
                dfs(grid,visited,i,j);
            }
        }
    }
}
int main(){
    
}