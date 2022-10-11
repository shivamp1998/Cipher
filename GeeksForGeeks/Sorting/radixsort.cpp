#include<bits/stdc++.h>
using namespace std;


void radixSort(int arr[], int n, int exp){
    int a[10] = {0};
    for(int i=0; i<n; i++) {
        a[(arr[i]/exp)%10]++;
    }
    for(int i=1; i<10; i++) {
        a[i] = a[i] + a[i-1];
    }
    int output[n] = {0};
    for(int i=n-1;i>=0;i--) {
       output[a[(arr[i]/exp)%10] - 1] = arr[i];
       a[(arr[i]/exp)%10]--;
    }
    for(int i=0;i<n;i++) {
        cout<<output[i]<<" ";
    }
}

void radix(int arr[],int n) {
    int max = arr[0];
    for(int i=0;i<n;i++) {
        if(max < arr[i]) {
            max = arr[i];
        }
    }
    for(int ex=1; max/ex>0 ; ex*=10) {
        radixSort(arr,n,ex);
    }
}


int main () {
    int arr[] = {1, 9, 345, 2};
    radix(arr,4);
}