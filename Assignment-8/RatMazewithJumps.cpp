#include<bits/stdc++.h>
using namespace std;
void print(int n,vector<int> sol[]){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<sol[i][j]<<" ";
        }
        cout<<endl;
    }
}
bool isSafe(vector<int> maze[],int i,int j,int n){
    return i<n && j<n && maze[i][j]!=0;
}
bool solRec(int i,int j,vector<int> maze[],vector<int> sol[],int n){
    if(i == n-1 && j==n-1){
        sol[i][j] = 1;
        return true;
    }
    if(isSafe(maze,i,j,n)==true){
        int jumps = maze[i][j];
        sol[i][j] = 1;
        for(int k=1;k<=jumps;k++){
            if(solRec(i,j+1,maze,sol,n)==true)
                return true;
            if(solRec(i+1,j,maze,sol,n)==true)
            return true;
        }
        sol[i][j] = 0;
    }
    return false;
}
void solve(int n,vector<int> maze[]){
    vector<int> sol[100];
    for(int i=0;i<n;i++){
        sol[i].assign(n,0);
        if(solRec(0,0,maze,sol,n)==false)
        cout<<-1<<endl;
        else{
            print(n,sol);
        }
    }

}
int main(){
        // int t;cin>>t;
        // while(t--){
        //     int n;cin>>n;
        //     vector<int> maze[100];
        //     for(int i=0;i<n;i++){
        //         maze[i].assign(n,0);
        //         for(int j=0;j<n;j++){
        //             cin>>maze[i][j];
        //         }
        //     }
        //     solve(n,maze);
        // }
    }