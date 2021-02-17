#include<bits/stdc++.h>
using namespace std;
string Title(int n){
    string ans;
    while(n>0){
        n--;
        ans += char('A'+n%26);
        n = n/26;

    }
    return ans;
}
int main(){
    int n;cin>>n;
    cout<<Title(n)<<endl;
}