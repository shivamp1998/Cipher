#include<bits/stdc++.h>
using namespace std;
void find(string s, int l, int r, vector<string> &ans, int n){
    if(s.size() == 2*n){
        ans.push_back(s);
        return;
    }
    
    if(l < n){
        find(s+"(", l+1, r, ans, n);
    }
    
    if(l > r){
        find(s+")", l, r+1, ans, n);
    }
}
int main(){
    int n;cin>>n;
    vector<string> ans;
    find("",0,0,ans,n);
    for(auto x:ans){
        cout<<x<<endl;
    }
    
}