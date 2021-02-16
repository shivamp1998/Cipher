#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    int arr[n];
    for(int i=0;i<n-1;i++)cin>>arr[i];
    int x = 0;
    for(int i=1;i<=n;i++)
    x = x ^ i;
    for(int i=0;i<n-1;i++)
    x = x ^ arr[i];
    cout<<x<<endl;
}