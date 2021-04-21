#include<bits/stdc++.h>
using namespace std;
int findCatalan(int n){
    int ans = 1;
    for(int i=n;i>=1;i--){
        ans*=n+i;
        ans/=n-i+1;
    }
    ans/=n+1;
    return ans;
}
int main(){
    int n;cin>>n;
    cout<<findCatalan(n)<<endl;
}