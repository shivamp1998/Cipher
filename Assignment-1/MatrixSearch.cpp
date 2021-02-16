#include<bits/stdc++.h>
using namespace std;
int matSearch (vector <vector <int>> &mat, int N, int M, int X)
	{
	    int i = 0 , j = M-1;
	    if(N == 1 && M == 1)
	    {
	        if(mat[0][0] == X)
	        return 1;
	    }
	    else if( N == 1){
	        for(int i=0;i<M;i++){
	            if(mat[0][i] == X)
	            return 1;
	        }
	    }
	    else if( M == 1){
	        for(int i=0;i<N;i++){
	            if(mat[i][0] == X)
	            return 1;
	        }
	    }
	    while(i < N && j >= 0 ){
	        if( X > mat[i][j]){
	           //cout<<mat[i][j]<<" ";
	            i++;
	        }
	        if( i >= N)
	        return 0;
	        if( X < mat[i][j]){
	            //cout<<mat[i][j]<<" ";
	            j--;
	        }
	        if(j < 0)
	        return 0;
	        if(X == mat[i][j]){
	            return 1;
	        }
	    }
	    return 0;
	} 
int main(){
    int N,M;cin>>N>>M;
    vector<vector<int>> arr(N,vector<int> (M,0));
    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            cin>>arr[i][j];
        }
    }
    int X;cin>>X;
    cout<<matSearch(arr,N,M,X);
    
}