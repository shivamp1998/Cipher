#include<bits/stdc++.h>
using namespace std;
int minJumps (int arr[], int n) {
    if(n < 2 )
    return 0;
    int i = arr[0];
    int jumps = 1;
    while(i < n) {
        if(arr[i] == 0 ){
            return -1;
        }
        i += arr[i];
        jumps++;
    }
    return jumps;
}
int main() {
    int arr[] = {1, 4, 3, 2, 6, 7};
    cout<<minJumps(arr,6);
}