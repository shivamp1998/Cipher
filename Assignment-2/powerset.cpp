#include<bits/stdc++.h>
using namespace std;
void powerSet(string str,int index = -1, string curr=""){
    int n = str.length();
    if(index == n){
        return;
    }
    cout<<curr<<endl;
    for(int i=index+1;i<n;i++){
        curr+=str[i];
        powerSet(str,i,curr);
        curr.erase(curr.size()-1);
    }
} 

int main(){
    string s;cin>>s;
    powerSet(s);
}