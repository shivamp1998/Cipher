#include<bits/stdc++.h>
using namespace std;
void helper(string s,int k,string &max){
    if(k == 0){
        return;
    }
    int n = s.length();
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(s[i] < s[j]){
                swap(s[i],s[j]);
                if(s > max)
                max = s;
                helper(s,k-1,max);
                swap(s[i],s[j]);
            }
        }
    }
}
string maxNumber(string s,int k){
    string max = s;
    helper(s,k,max);
    return max;
}
int main(){
    int k;cin>>k;
    string s;cin>>s;
    cout<<maxNumber(s,k)<<endl;
}