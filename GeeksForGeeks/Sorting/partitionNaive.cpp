#include<bits/stdc++.h>
using namespace std;

void partition (int arr[], int start, int end, int pivot) {
    
    int temp[end - start  + 1] = {0};
    int i = 0;
    while (start <= end ) {
        if (arr[i] <= pivot) {
            temp[start++] = arr[i];
        }else {
            temp[end--] = arr[i];
        }
        i++;
    }
    for(int i=0;i<6;i++) {
        cout<<temp[i]<<" ";
    }
}

int main () {
    int arr[] = {5,13,6,9,12,11,18};
    partition(arr,0,6,9);
    
}