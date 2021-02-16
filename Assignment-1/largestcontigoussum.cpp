#include<bits/stdc++.h>
using namespace std;
int contSum(int arr[],int n){
    int localSum = arr[0] , globalSum = arr[0];
    for(int i=1;i<n;i++){
        localSum=max(arr[i],localSum+arr[i]);
        if(localSum > globalSum)
            globalSum = localSum;
    }
    return globalSum;
}
int main(){
    int n;cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];
    cout<<contSum(arr,n);
}