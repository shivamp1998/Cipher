#include<bits/stdc++.h>
using namespace std;
const char s[10][5]={" "," ","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
void printPhone(int a[],string cur,int index,int n){
    
    if(index == n){
        cout<<cur<<" ";
        return;
    }
    for(int i=0;i<strlen(s[a[index]]);i++){
        printPhone(a,cur+s[a[index]][i],index+1,n);
    }
}
int main(){
   int n;cin>>n;
   int arr[n];
   for(int i=0;i<n;i++)cin>>arr[i];
   printPhone(arr,"",0,n);
    
}