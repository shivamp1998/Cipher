#include<bits/stdc++.h>
using namespace std;
bool cmp(int &a,int &b){
    return to_string(a) + to_string(b) > to_string(b) + to_string(a); 
}
string maxNumber(vector<int> arr){
    int n = arr.size();
    sort(arr.begin(),arr.end(),cmp);
    string ans="";
    for(int i=0;i<n;i++)
        ans+=arr[i];
    if(ans[0]=='0')
    return "0";
    return ans;
}
int main(){
    
}