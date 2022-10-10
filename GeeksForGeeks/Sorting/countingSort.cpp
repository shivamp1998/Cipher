#include<bits/stdc++.h>
using namespace std;
void countingSort(int arr[],int n) {
    int a[n] = {0};
    for(int i=0;i<n;i++) {
        a[arr[i]]++;
    }
    for(int i=1;i<n;i++) {
        a[i] = a[i-1] + a[i];
    }
    int output[n] = {0};
    for(int i=0;i<n;i++) {
        output[a[arr[i]] - 1] = arr[i];
        a[arr[i]]--;
    }
    for(int i=0;i<n;i++) {
        arr[i] = output[i];
    }
}
int main() {
    int arr[] = {2,6,2,4,6,1,3};
    countingSort(arr,7);
    for( int i = 0 ; i < 7 ; i++ ) {
        cout<<arr[i]<<" ";
    }
}