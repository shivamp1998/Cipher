#include<bits/stdc++.h>
using namespace std;
void stringPermutation(string a,int l, int r){
    if(l == r)
    cout<<a<<endl;
    else{
        for(int i=l;i<=r;i++){
            swap(a[l],a[i]);
            stringPermutation(a,l+1,r);
            swap(a[l],a[i]);
        }
    }
}
int main(){
    string s;cin>>s;
    stringPermutation(s,0,s.size()-1);
}