#include<bits/stdc++.h>
using namespace std;
int Peak(vector<int> arr){
    int slow = 0, fast = arr.size()-1;
    while(slow <= fast){
       int mid = slow + (fast - slow)/2;
       if(arr[mid-1]<arr[mid] && arr[mid+1]<arr[mid])
       return arr[mid];
       else if(arr[mid-1] > arr[mid]){
           fast = mid-1;
       }else slow = mid+1;
    }
    return -1;
}
int main(){
     vector<int> arr = {10, 20, 15, 2, 23, 90, 67};
    cout<<Peak(arr);
}