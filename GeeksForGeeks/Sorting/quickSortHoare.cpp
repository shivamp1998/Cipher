#include<bits/stdc++.h>
using namespace std;
void swap(int &a,int&b) {
    int temp = a;
    a = b;
    b = temp;
}

int partition (int arr[],int low,int high) {
    int i = low-1, j = high+1; 
    int pivot = low;
    while(true) {
        do{
            i++;
        }while(arr[i] < arr[pivot]);
        do{
            j--;
        }while(arr[j] > arr[pivot]);
        if(i >=  j) return j;
        swap(arr[i],arr[j]);
    }
}
void quickSort (int arr[],int low,int high) {
    if(low < high){
        int p = partition(arr,low,high);
        quickSort(arr,low,p);
        quickSort(arr,p+1,high);
    }
}

int main () {
 int arr[] = {1,45,23,45,12,41,31};
    quickSort(arr,0,6);
    for(int i=0;i<7;i++) {
        cout<<arr[i]<<" ";
    }
}