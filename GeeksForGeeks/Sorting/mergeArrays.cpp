#include<bits/stdc++.h>
using namespace std;
 
void merge(int a[],int b[], int m,int n) {
    int i = 0 , j = 0;
    int temp[m+n-1] = {0};
    int k = 0;
    while(i < m && j < n) {
        if(a[i] > b[j]) {
            temp[k] = b[j];
            k++;
            j++;
        }else{
            temp[k] = a[i];
            k++;
            i++;
        }
    }
    for(int i=0;i<m+n-1;i++) {
        cout<<temp[i]<<" ";
    }
}

int main() {
    int arr1[] = {2,5,7,9,11};
    int arr2[] = {1,3,4,6,10,12};
    merge(arr1,arr2,5,6);
}