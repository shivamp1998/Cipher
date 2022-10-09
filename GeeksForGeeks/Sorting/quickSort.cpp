#include<bits/stdc++.h>
using namespace std;

void swap(int &a,int &b) {
    int temp = a;
    a = b;
    b = temp;
}


int partition(int arr[], int low, int high ){
    int i = low - 1; 
    int pivot = high;
    for(int j=low;j<high;j++) {
        if(arr[j] < arr[pivot]) {
            swap(arr[++i],arr[j]);
        }
    }
    swap(arr[++i],arr[pivot]);
    return i;
}

void quickSort (int arr[], int low, int high){
    if (low < high) {
        int p = partition(arr,low,high);
        quickSort(arr,low,p-1);
        quickSort(arr,p+1,high);
    }
}

int main() {
    int arr[] = {1,45,23,45,12,41,31};
    quickSort(arr,0,6);
    for(int i=0;i<7;i++) {
        cout<<arr[i]<<" ";
    }
}