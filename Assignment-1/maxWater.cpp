#include<bits/stdc++.h>
using namespace std;
int solve(int arr[],int n){
    int left = 0 , right  = n-1;
    int ans = 0;
    while(left < right){
        ans = max(ans,min(arr[left],arr[right])*(right-left));
        if(arr[left] < arr[right])
        left++;
        else right--;
    }
    return ans;
}
int main(){
    int arr[] = {1,4,7,8,3,4,6,9};
    int n = sizeof(arr)/sizeof(int);
    cout<<solve(arr,n);   
}