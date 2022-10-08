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
}

int main () {
    int arr[] = {10,80,30,90,40,50,70};
    partition(arr,0,6,30);
    
}