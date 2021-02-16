#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;cin>>n>>m;
    int a[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++)
        cin>>a[i][j];
    }
    int up = 0 , right = m-1, left = 0, down = n-1;
    while(up <= down && right >= left){
        for(int i=left;i<=right;i++){
            cout<<a[up][i]<<" ";
        }
        up++;
        if(up > down)break;
        for(int i=up;i <= down;i++){
            cout<<a[i][right]<<" ";
        }
        right--;
        if(left > right)break;
        for(int i=right;i>=left;i--){
            cout<<a[down][i]<<" ";
        }
        down--;
        if(up > down)
        break;
        for(int i=down;i>=up;i--){
            cout<<a[i][left]<<" ";
        }
        left++;
    
    }
}