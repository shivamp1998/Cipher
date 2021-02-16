#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
    int n,x;cin>>n>>x;
    int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];
    int first = -1, last = -1;
    for(int i=0;i<n;i++){
        if(arr[i] == x){
            if(first == -1){
                first = i;
            }
            last = i;
        }
    }
    if(first == -1)
    cout<<-1<<"\n";
    else cout<<first<<" "<<last<<endl;
    }
}