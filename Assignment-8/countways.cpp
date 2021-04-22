#include<bits/stdc++.h>
using namespace std;
int countWays(int n){
    int arr[n+1] = {0};
    arr[0] = 1;
    for(int i=1;i<n;i++){
        for(int j=i;j<=n;j++){
            arr[j]  = arr[j]+arr[j-1];
        }
    }
    return arr[n];
}
int main(){
    int n;cin>>n;
    cout<<countWays(n)<<endl;
}