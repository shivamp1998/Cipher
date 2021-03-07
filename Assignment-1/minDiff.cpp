#include<bits/stdc++.h>
using namespace std;
int minDist(int a[], int n, int x, int y) {
    long long diff = INT_MAX;
    long long xidx =-1, yidx = -1;
    long long i;
    for(i=0;i<n;i++){
        if(a[i] == x) xidx = i;
        if(a[i] == y) yidx = i;
            if(xidx !=-1 && yidx != -1){
            diff = min(diff, abs(xidx-yidx));
    }
}
            if(diff == INT_MAX){
            return -1;
    }
        return diff;
}
int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)cin>>arr[i];
    }
}