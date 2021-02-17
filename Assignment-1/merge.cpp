#include<bits/stdc++.h>
using namespace std;
vector<int> merge(int arr1[],int arr2[],int n,int m){
    int i = 0, j = 0;
    vector<int> a;
    while(i<n && j<m){
        if(arr1[i] <= arr2[j]){
            a.push_back(arr1[i]);
            i++;
        }else{
            a.push_back(arr2[j]);
            j++;
        }
    }
    while(i<n){
        a.push_back(arr1[i]);
        i++;
    }
    while(j<n){
        a.push_back(arr2[j]);
        j++;
    }
    return a;
}
int main(){
    int n,m;cin>>n>>m;
    int arr1[n],arr2[m];
    for(int i=0;i<n;i++)cin>>arr1[i];
    for(int i=0;i<m;i++)cin>>arr2[i];
    vector<int> a = merge(arr1,arr2,n,m);
    for(auto x: a){
        cout<<x<<" ";
    }
    cout<<endl;
}