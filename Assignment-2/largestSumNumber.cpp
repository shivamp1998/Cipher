#include<bits/stdc++.h>
using namespace std;
string largestSum(int n,int sum){
   string ans(n,0);
   for(int i=0;i<n;i++){
       int val = 0;
       if(sum > 9){
           val = 9;
           sum = sum - 9;
       }else{
           val = sum;
           sum = 0;
       }
       ans[i] = val+'0'; 
   }
   if(sum > 0)
   return "-1";
   return ans;
}
int main(){
    cout<<largestSum(5,12);
}