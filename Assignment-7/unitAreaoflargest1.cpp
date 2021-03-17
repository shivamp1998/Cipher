#include<bits/stdc++.h>
using namespace std;
int m,n;
void dfs(vector<vector<int>> &grid,int i,int j,int &count){
    if(i<0 || j<0 || i>=n || j>=m || grid[i][j]==0)
    return;
    count++;
    grid[i][j]=0;
    dfs(grid,i+1,j,count);
    dfs(grid,i-1,j,count);
    dfs(grid,i,j+1,count);
    dfs(grid,i,j-1,count);
    dfs(grid,i-1,j-1,count);
    dfs(grid,i+1,j-1,count);
    dfs(grid,i+1,j+1,count);
    dfs(grid,i-1,j+1,count);
}
int largest(vector<vector<int>> grid){
    n = grid.size();
    m = grid[0].size();
    int count = 0;
    int ans  = 0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            count = 0;
            if(grid[i][j]==1){
                dfs(grid,i,j,count);
                ans = max(ans,count);
            }
        }
    }
}
int main(){

}