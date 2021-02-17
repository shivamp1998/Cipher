#include<bits/stdc++.h>
using namespace std;
void kSmallest(int arr[],int n,int k){
    sort(arr,arr+n);
    for(int i=0;i<k;i++)
    cout<<arr[i]<<" ";
    cout<<endl;
}
int main(){
    int n,k;cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];
    kSmallest(arr,n,k);
}