#include<bits/stdc++.h>
using namespace std;
void swap(int &a,int &b) {
    int temp = a;
    a = b;
    b = temp;
}
void selectionSort(int arr[],int n) {
    for(int i=0;i<n;i++) {
        int min_index = i;
        for(int j = i + 1; j<n;j++) {
            if(arr[min_index] > arr[j]) {
                min_index = j;
            }
        }
        swap(arr[i],arr[min_index]);
    }
    
}

int main(){
    int arr[] = {1,3,5,1,2,3};
    selectionSort(arr,6);
    for(int i=0;i<6;i++) {
        cout<<arr[i]<<" ";
    }

}