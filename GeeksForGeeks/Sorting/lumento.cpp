#include<bits/stdc++.h>
using namespace std;

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

void lumentoPartition (int arr[], int l , int h) {
    int i = l - 1;
    int pivot = h;
    for(int j = l ; j <= h - 1; j++) {
        if(arr[j] < arr[pivot]) {
            i++;
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[i++],arr[pivot]);
    for(int i=0;i<=h;i++) {
        cout<<arr[i]<<" ";
    }
}
int main() {
    int arr[] = {10,80,30,90,40,50,70};
    lumentoPartition(arr,0,6);
}