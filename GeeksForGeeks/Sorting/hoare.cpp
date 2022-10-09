#include<bits/stdc++.h>
using namespace std;

void swap (int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

void hoarsePartition (int arr[], int l , int h ) {
    int pivot = arr[l];
    int i = l-1, j = h+1;
    while(1) {
        do{
            i++;
        }while(arr[i]<pivot);
        do{
            j--;
        }while(arr[j]>pivot);
        if(i >= j) break; 
        swap(arr[i],arr[j]);
    }
} 

int main (){
    int arr[] = {5,3,8,4,2,7,1,10};
    hoarsePartition(arr,0,7);
    for(int i=0; i<8;i++){
        cout<<arr[i]<<" ";
    }
}